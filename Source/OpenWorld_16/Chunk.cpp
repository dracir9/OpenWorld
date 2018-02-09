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

	ChunkDensity.SetNumZeroed(ChunkSize * ChunkSize * ChunkSize);
	Density.SetNum(16);

	//int32
	double height = 0.0f;

	TArray<int8> pending;
	int8 current = 0;

	int8 tmp = 0;
	int32 i = 0;
	for (int8 x = 0; x < ChunkSize; x++)
	{
		for (int8 y = 0; y < ChunkSize; y++)
		{
			height = Noise->GetNoise2D(x * VoxelSize + GetActorLocation().X, y * VoxelSize + GetActorLocation().Y);
			//heigh = (heigh * 127.5 + 127.5) * 100;
			height = (height * 5 + 5) * 100;

			tmp = floor(height / (ChunkSize * VoxelSize));
			if (tmp != current && (x != 0 || y != 0))
			{
				if (!pending.Contains(tmp))
				pending.Add(tmp);
			}
			else
			{
				current = tmp;
			}

			if (!Density[current].isActive)
			{
				Density[current].Density.SetNumZeroed(ChunkSize * ChunkSize * ChunkSize);
				Density[current].isActive = true;
			}

			for (int8 z = 0; z < ChunkSize; z++)
			{
				//i = x + (y * ChunkSize) + (z * ChunkSize * ChunkSize);

				int32 k = (z + current * ChunkSize) * VoxelSize;


				if (k < height)
				{
					if (k < 500)
					{
						Density[current].Density[i] = 1;
						ChunkDensity[i] = 1;
					}
					else if (k < 700)
					{
						Density[current].Density[i] = 2;
						ChunkDensity[i] = 2;
					}
					else
					{
						Density[current].Density[i] = 3;
						ChunkDensity[i] = 3;
					}
				}
				else
				{
					Density[current].Density[i] = 0;
					ChunkDensity[i] = 0;
				}
				i++;
			}
		}
	}

	//UE_LOG(LogTemp, Warning, TEXT("pending %d"), pending.Num());
	/*if (Noise)
	{
		for (int8 x = 0; x < ChunkSize; x++)
		{
			for (int8 y = 0; y < ChunkSize; y++)
			{
				heigh = Noise->GetNoise2D(x * VoxelSize + GetActorLocation().X, y * VoxelSize + GetActorLocation().Y);
				heigh = (heigh * 5 + 5) * 100;
				for (int8 z = 0; z < ChunkSize; z++)
				{
					int32 i = x + (y * ChunkSize) + (z * ChunkSize * ChunkSize);
					
					int32 k = z* VoxelSize;

					if (k < heigh)
					{
						if (k < 500)
						{
							ChunkDensity[i] = 1;
						}
						else if (k < 700)
						{
							ChunkDensity[i] = 2;
						}
						else
						{
							ChunkDensity[i] = 3;
						}
					}
					else
					{
						ChunkDensity[i] = 0;
					}
				}
			}
		}
	}*/

	// Optimize memory
	ChunkDensity.Shrink();

	// Set debug variables to be displayed. Get allocated memory of ChunkDenity array
	GameMode->SDensitySize = FString::FromInt(ChunkDensity.GetAllocatedSize());
}


void AChunk::RenderChunk()
{
	static bool haStarted;
	if (!TerrainMesh || !ChunkMesh) {
		UE_LOG(RenderTerrain, Error, TEXT("Components not created properly"));
		return;
	}
	
	if (!GameMode) {
		UE_LOG(RenderTerrain, Error, TEXT("Game Mode ref is null!!"));
		return;
	}

	if (!haStarted)
	{
		UE_LOG(RenderTerrain, Warning, TEXT("Render Started!"));
		haStarted = true;
	}

	FChunkData Data;
	Data.ChunkDensity = &ChunkDensity;
	Data.Density = &Density;
	Data.Position = FVector2D(GetActorLocation().X, GetActorLocation().Y);
	GameMode->QueuedMeshs.Enqueue(Data);
}

void AChunk::FinishRendering(const TArray<FMesh>& meshSections)
{
	static bool hasRendered;

	if (!hasRendered)
	{
		UE_LOG(RenderTerrain, Warning, TEXT("Finish Render!"));
		hasRendered = true;
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


void AChunk::RemoveChunk()
{
	ChunkDensity.Empty();
	ChunkDensity.~TArray();
	Destroy();
}
