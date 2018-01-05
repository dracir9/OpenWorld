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
	RenderChunk();
}

// Called every frame
void AChunk::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AChunk::InitializeChunk()
{
	ChunkDensity.SetNum(ChunkSize * ChunkSize * ChunkSize);
	float heigh;
	if (Noise)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString("Yes"));
		for (int8 x = 0; x < ChunkSize; x++)
		{
			for (int8 y = 0; y < ChunkSize; y++)
			{
				for (int8 z = 0; z < ChunkSize; z++)
				{
					int32 i = x + (y * ChunkSize) + (z * ChunkSize * ChunkSize);
					heigh = Noise->GetNoise2D(x * VoxelSize + GetActorLocation().X, y * VoxelSize + GetActorLocation().Y);
					heigh = (heigh * 5 + 5) * 100;

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
	}

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
	Data.Density = &ChunkDensity;
	Data.Position = GetActorLocation();
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
