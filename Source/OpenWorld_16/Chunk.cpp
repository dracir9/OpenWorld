// Fill out your copyright notice in the Description page of Project Settings.

#include "Chunk.h"
#include "ProceduralMeshComponent.h"


AChunk::AChunk()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	// Create the component that will hold the terrain
	UBillboardComponent* Root = CreateDefaultSubobject<UBillboardComponent>(TEXT("RootComponent"));
	RootComponent = Root;
	
	TerrainMesh = CreateDefaultSubobject<URuntimeMeshComponent>(TEXT("Runtime Mesh"));
	//TerrainMesh->RegisterComponent();
	//TerrainMesh->UnregisterComponent();
	if(TerrainMesh) TerrainMesh->SetupAttachment(RootComponent);

	
	ChunkMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Procedural Mesh"));
	//ChunkMesh->RegisterComponent();
	//this->AddOwnedComponent(ChunkMesh);
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
		TestHeighmap(MapType);
		return;
	}
	
	double height = 0.0f;

	uint16 z = 0;

	bool bSolid;
	bool bAir;

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
						if (k < 500)
						{
							Density[section].Density[i] = 1;
						}
						else if (k < 700)
						{
							Density[section].Density[i] = 2;
						}
						else
						{
							Density[section].Density[i] = 3;
						}
						bSolid = true;
					}
					else
					{
						Density[section].Density[i] = 0;
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
			Density[section].Density.Empty();
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
	if (!TerrainMesh || !ChunkMesh) {
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

void AChunk::FinishRendering(const TArray<FMesh>& meshSections)
{
	static bool bHasRendered;

	if (!bHasRendered)
	{
		UE_LOG(RenderTerrain, Display, TEXT("[7/7] Finish Render!"));
		bHasRendered = true;
	}

	for (int16 s = 0; s < meshSections.Num(); s++)
	{
		if (meshSections[s].Vertices.Num() == 0) continue;

		if (bRuntimeEnabled)
		{

			if (TerrainMesh->DoesSectionExist(s))
			{
				TerrainMesh->UpdateMeshSection(s, meshSections[s].Vertices, meshSections[s].Triangles, meshSections[s].Normals, meshSections[s].UVs, meshSections[s].VertexColors, meshSections[s].RTangents);
			}
			else
			{
				TerrainMesh->CreateMeshSection(s, meshSections[s].Vertices, meshSections[s].Triangles, meshSections[s].Normals, meshSections[s].UVs, meshSections[s].VertexColors, meshSections[s].RTangents, true, EUpdateFrequency::Average);
			}
			TerrainMesh->SetMaterial(s, meshSections[s].Mat);
		}
		else
		{
			ChunkMesh->CreateMeshSection(s, meshSections[s].Vertices, meshSections[s].Triangles, meshSections[s].Normals, meshSections[s].UVs, meshSections[s].VertexColors, meshSections[s].Tangents, true);
			ChunkMesh->SetMaterial(s, meshSections[s].Mat);
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

void AChunk::TestHeighmap(const EMapType& type)
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


