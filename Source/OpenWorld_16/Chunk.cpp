// Fill out your copyright notice in the Description page of Project Settings.

#include "Chunk.h"
#include "ProceduralMeshComponent.h"
#include "UFNBlueprintFunctionLibrary.h"
#include "DrawDebugHelpers.h"


AChunk::AChunk()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	// Create the component that will hold the terrain
	UBillboardComponent* Root = CreateDefaultSubobject<UBillboardComponent>(TEXT("RootComponent"));
	RootComponent = Root;
	
	TerrainMesh.SetNum(16);
	for (uint8 i = 0; i < 16; i++)
	{
		TerrainMesh[i] = CreateDefaultSubobject<URuntimeMeshComponent>(*FString("Runtime Mesh" + FString::FromInt(i)));
		if (TerrainMesh[i]) TerrainMesh[i]->SetupAttachment(RootComponent);
	}

	
	ChunkMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Procedural Mesh"));
	if(ChunkMesh) ChunkMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AChunk::BeginPlay()
{
	Super::BeginPlay();
	GameMode = (AWorldGameMode*)GetWorld()->GetAuthGameMode();

	InitializeChunk();
}

// Called every frame
void AChunk::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AChunk::InitializeChunk()
{
	if (!Noise) return;

	Density.SetNum(16);

	if (bUseTestHeightmaps)
	{
		TestHeightmap(MapType);
		return;
	}
	
	double height = 0.0f;

	uint16 z = 0;

	bool bSolid = false;
	bool bAir = false;

	for (uint8 section = 0; section < 16; section++)
	{
		Density[section].Density.SetNum(ChunkSize * ChunkSize * ChunkSize);
		int32 i = 0;

		for (; z - section * ChunkSize < ChunkSize; z++)
		{
			int32 k = z * VoxelSize;

			for (uint8 y = 0; y < ChunkSize; y++)
			{
				for (uint8 x = 0; x < ChunkSize; x++)
				{
					height = Noise->GetNoise2D(x * VoxelSize + GetActorLocation().X, y * VoxelSize + GetActorLocation().Y);
					height = height * (MaxHeight / 2) + MaxHeight / 2;
					

					if (k < height)
					{
						height = height - k;
						int8 add = FMath::FloorToInt(FMath::GetMappedRangeValueClamped(FVector2D(0, 50), FVector2D(0, 3.99999), height));
						if (k < MaxHeight/2)
						{
							Density[section].Density[i] = 4 + add;
						}
						else if (k < MaxHeight*0.7)
						{
							Density[section].Density[i] = 8 + add;
						}
						else
						{
							Density[section].Density[i] = 12 + add;
						}
						bSolid = true;
					}
					else
					{
						height = k - height;
						int8 add = FMath::FloorToInt(FMath::GetMappedRangeValueClamped(FVector2D(50, 0), FVector2D(0, 3.99999), height));
						Density[section].Density[i] = 0 + add;
						bAir = true;
					}
					i++;
				}
			}
		}
		if (bSolid && bAir)
		{
			Density[section].FillState = EFillState::FS_Mixt;
		}
		else if(bSolid)
		{
			uint16 i = ChunkSize * ChunkSize;
			for (uint8 a = 1; a < ChunkSize; a++)
			{
				for (uint8 b = 0; b < ChunkSize; b++)
				{
					for (uint8 c = 0; c < ChunkSize; c++)
					{
						Density[section].Density[PerimeterIndex(c, b, a)] = Density[section].Density[i];
						i++;
					}
				}
			}
			Density[section].Density.SetNum(pow(ChunkSize, 3) - pow(ChunkSize - 2, 3), true);
			Density[section].FillState = EFillState::FS_Full;
		}
		else
		{
			Density[section].Density.Empty();
			Density[section].FillState = EFillState::FS_Empty;
		}
	}
	
	Density.Shrink();

	// Set debug variables to be displayed. Get allocated memory of ChunkDenity array
	GameMode->SDensitySize = FString::FromInt(Density.GetAllocatedSize());
}


void AChunk::RenderChunk()
{
	static bool bHaStarted;
	if (!TerrainMesh[0] || !ChunkMesh) {
		UE_LOG(RenderTerrain, Error, TEXT("Components not created properly"));
		return;
	}
	
	if (!GameMode) {
		UE_LOG(RenderTerrain, Error, TEXT("Game Mode ref is null!!"));
		return;
	}

	if (!bHaStarted)
	{
		UE_LOG(RenderTerrain, Display, TEXT("[1/7] Render Started!"));
		bHaStarted = true;
	}

	FChunkData Data;
	Data.Density = &Density;
	Data.Position = FVector2D(GetActorLocation().X, GetActorLocation().Y);
	GameMode->QueuedMeshs.Enqueue(Data);
}

void AChunk::FinishRendering(const TArray<TArray<FMesh>>& meshSections)
{
	static bool bHasRendered;

	if (!bHasRendered)
	{
		UE_LOG(RenderTerrain, Display, TEXT("[7/7] Finish Render!"));
		bHasRendered = true;
	}

	for (uint8 i = 0; i < 16; i++)
	{
		for (int16 s = 0; s < meshSections[i].Num(); s++)
		{
			if (meshSections[i][s].Vertices.Num() == 0) continue;

			if (bRuntimeEnabled)
			{

				if (TerrainMesh[i]->DoesSectionExist(s))
				{
					TerrainMesh[i]->UpdateMeshSection(s, meshSections[i][s].Vertices, meshSections[i][s].Triangles, meshSections[i][s].Normals, meshSections[i][s].UVs, meshSections[i][s].VertexColors, meshSections[i][s].RTangents);
				}
				else
				{
					TerrainMesh[i]->CreateMeshSection(s, meshSections[i][s].Vertices, meshSections[i][s].Triangles, meshSections[i][s].Normals, meshSections[i][s].UVs, meshSections[i][s].VertexColors, meshSections[i][s].RTangents, true, EUpdateFrequency::Average);
				}
				TerrainMesh[i]->SetMaterial(s, meshSections[i][s].Mat);
			}
			else
			{
				ChunkMesh->CreateMeshSection(s, meshSections[i][s].Vertices, meshSections[i][s].Triangles, meshSections[i][s].Normals, meshSections[i][s].UVs, meshSections[i][s].VertexColors, meshSections[i][s].Tangents, true);
				ChunkMesh->SetMaterial(s, meshSections[i][s].Mat);
			}
		}
	}
}

FVector AChunk::CalcNormal(const FVector & p1, const FVector & p2, const FVector & p3)
{
	FVector Norm;
	Norm.X = (p3.Y - p1.Y)*(p2.Z - p1.Z) - (p3.Z - p1.Z)*(p2.Y - p1.Y);
	Norm.Y = (p3.Z - p1.Z)*(p2.X - p1.X) - (p3.X - p1.X)*(p2.Z - p1.Z);
	Norm.Z = (p3.X - p1.X)*(p2.Y - p1.Y) - (p3.Y - p1.Y)*(p2.X - p1.X);
	Norm.Normalize();
	return Norm;
}

void AChunk::TestHeightmap(const EMapType& type)
{
	switch (type)
	{
	default:
		break;
	case EMapType::MT_Laminated:
		for (uint8 a = 0; a < 16; a++)
		{
			Density[a].Density.SetNum(ChunkSize * ChunkSize * ChunkSize);
			Density[a].FillState = EFillState::FS_Mixt;
			for (uint8 x = 0; x < ChunkSize; x++)
			{
				for (uint8 y = 0; y < ChunkSize; y++)
				{
					for (uint8 z = 0; z < ChunkSize; z++)
					{
						uint32 i = x * ChunkSize * ChunkSize + y * ChunkSize + z;

						if (z < 8)
						{
							Density[a].Density[i] = 1;
						}
						else
						{
							Density[a].Density[i] = 0;
						}
					}
				}
			}
		}
		break;

	case EMapType::MT_Ramp:
		for (uint8 a = 0; a < 16; a++)
		{
			Density[a].Density.SetNum(ChunkSize * ChunkSize * ChunkSize);
			Density[a].FillState = EFillState::FS_Mixt;
			for (uint8 x = 0; x < ChunkSize; x++)
			{
				for (uint8 y = 0; y < ChunkSize; y++)
				{
					for (uint8 z = 0; z < ChunkSize; z++)
					{
						uint32 i = x * ChunkSize * ChunkSize + y * ChunkSize + z;

						if (z + a * ChunkSize < y + x * ChunkSize)
						{
							Density[a].Density[i] = 1;
						}
						else
						{
							Density[a].Density[i] = 0;
						}
					}
				}
			}
		}
		break;
	}
}

int32 AChunk::GetVoxelDensity(const int32& x, const int32& y, const int32& z)
{
	{
		int32 section = z / ChunkSize;
		uint8 k = z - ChunkSize * section;
		if (Density[section].FillState == EFillState::FS_Mixt)
		{
			int32 idx = x + y * ChunkSize + k * ChunkSize * ChunkSize;
			return Density[section].Density[idx];
		}
		else if (Density[section].FillState == EFillState::FS_Full)
		{
			return Density[section].Density[PerimeterIndex(x, y, k)];
		}
		else
		{
			return 0;
		}
	}
}

bool AChunk::SetVoxelDensity(const FVector& pos, const int32& value)
{
	{
		uint8 section = FMath::FloorToInt(pos.Z / ChunkSize);
		int32 idx = pos.X + pos.Y * ChunkSize + (pos.Z - ChunkSize * section) * ChunkSize * ChunkSize;

		if (Density[section].FillState == EFillState::FS_Mixt)
		{
			if (Density[section].Density[idx] == value) return false;
			Density[section].Density[idx] = value;
			return true;
		}
		else if (Density[section].FillState == EFillState::FS_Empty && value == 0)
		{
			return false;
		}
		else
		{
			Density[section].FillState = EFillState::FS_Mixt;
			Density[section].Density[idx] = value;
			return true;
		}
		return false;
	}
}

int32 AChunk::PerimeterIndex(const int32& x, const int32& y, const int32& z)
{
	int32 idx = x + y * ChunkSize + z * ChunkSize * ChunkSize;

	if (z > 0 && z < ChunkSize - 1)
	{
		int8 k = z - 1;
		if (y == 0)
		{
			idx -= k * (ChunkSize - 1)*(ChunkSize - 1);
		}
		else if (y == ChunkSize - 1)
		{
			k++;
			idx -= k * (ChunkSize - 1)*(ChunkSize - 1);
		}
		else
		{
			int8 i = FMath::Clamp(x - 1, 0, ChunkSize - 1);
			int8 j = y - 1;
			idx -= i + j * (ChunkSize - 2) + k * (ChunkSize - 2)*(ChunkSize - 2);
		}
	}
	else if (z == ChunkSize - 1)
	{
		idx -= pow(ChunkSize - 2, 3);
	}

	return idx;
}


void AChunk::RemoveChunk()
{
	for (uint8 a = 0; a < Density.Num(); a++)
	{
		Density[a].Density.Empty();
	}
	Density.Empty();
	Density.~TArray();
	Destroy();
}

void AChunk::DrawChunkLimits()
{
	int32 Side = ChunkSize * VoxelSize;
	int32 Heigh = Side * 16;
	FVector Origin = GetActorLocation();
	FVector XCorner = Origin + FVector(Side, 0, 0);
	FVector YCorner = Origin + FVector(0, Side, 0);
	FVector XYCorner = Origin + FVector(Side, Side, 0);
	FVector ZOrigin = Origin + FVector(0, 0, Heigh);
	FVector XZCorner = Origin + FVector(Side, 0, Heigh);
	FVector YZCorner = Origin + FVector(0, Side, Heigh);
	FVector XYZCorner = Origin + FVector(Side, Side, Heigh);

	//Draw the Line!
	DrawDebugLine(GetWorld(), Origin, ZOrigin, FColor(0, 0, 255), true, -1, 0, 12.0);
	DrawDebugLine(GetWorld(), XCorner, XZCorner, FColor(0, 255, 255), true, -1, 0, 12.0);
	DrawDebugLine(GetWorld(), YCorner, YZCorner, FColor(255, 64, 0), true, -1, 0, 12.0);
	DrawDebugLine(GetWorld(), XYCorner, XYZCorner, FColor(0, 0, 0), true, -1, 0, 12.0);
	for (int8 i = 0; i < 16; i++)
	{
		DrawDebugLine(GetWorld(), Origin, YCorner, FColor(0, 255, 0), true, -1, 0, 12.0);
		DrawDebugLine(GetWorld(), Origin, XCorner, FColor(255, 0, 0), true, -1, 0, 12.0);
		//DrawDebugLine(GetWorld(), XCorner, XYCorner, FColor(255, 255, 0), true, -1, 0, 12.0);
		//DrawDebugLine(GetWorld(), YCorner, XYCorner, FColor(64, 0, 255), true, -1, 0, 12.0);
		Origin += FVector(0, 0, Side);
		YCorner += FVector(0, 0, Side);
		XCorner += FVector(0, 0, Side);
		XYCorner += FVector(0, 0, Side);
	}
	//DrawDebugLine(GetWorld(), XCorner, XYCorner, FColor(255, 0, 0), true, -1, 0, 12.0);
	//DrawDebugLine(GetWorld(), YCorner, XYCorner, FColor(0, 64, 0), true, -1, 0, 12.0);
	//DrawDebugLine(GetWorld(), ZOrigin, XZCorner, FColor(0, 0, 64), true, -1, 0, 12.0);
	//DrawDebugLine(GetWorld(), ZOrigin, YZCorner, FColor(0, 0, 128), true, -1, 0, 12.0);
	//DrawDebugLine(GetWorld(), XZCorner, XYZCorner, FColor(0, 0, 192), true, -1, 0, 12.0);
	//DrawDebugLine(GetWorld(), YZCorner, XYZCorner, FColor(0, 0, 255), true, -1, 0, 12.0);
}
