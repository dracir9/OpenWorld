// Fill out your copyright notice in the Description page of Project Settings.

#include "Chunk.h"
#include "Voxels/Voxel.h"
#include "ProceduralMeshComponent.h"

//                 / |       1           / |

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
	ChunkDensity.SetNum(ChunkSize * ChunkSize * ChunkSize);
	Density.SetNum(ChunkSize * ChunkSize * ChunkSize);
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
	
	if (!TerrainMesh || !ChunkMesh) {
		UE_LOG(Terrain_Renderer, Error, TEXT("Components not created properly"));
		return;
	}
		

	//Initializes the variables used to store all the mesh data.
	TArray<FMesh> meshSections;
	

	if (!GameMode) {
		UE_LOG(LogTemp, Error, TEXT("Game Mode ref is null!!"));
		return;
	}

	
	TArray<POINT> points;
	points.SetNum((ChunkSize + 1) * (ChunkSize + 1) * (ChunkSize + 1));
	for (int8 x = 0; x < ChunkSize + 1; x++)
	{
		for (int8 y = 0; y < ChunkSize + 1; y++)
		{
			for (int8 z = 0; z < ChunkSize + 1; z++)
			{
				int16 ID = 0;
				FVector p = FVector(x, y, z);
				
				///*/////////////////////
				// Get ID of the vertex
				///*/////////////////////

				// If point is over or under the chunk's limit set it as air.
				if (p.Z >= ChunkSize || p.Z < 0) 
				{
					p *= VoxelSize;
					ID = 0;
				}

				//If point is outside the chunk get the value from world
				else if (p.X >= ChunkSize || p.X < 0 || p.Y >= ChunkSize || p.Y < 0) 
				{
					p *= VoxelSize;
					FVector pos = FVector(GetActorLocation().X + p.X, GetActorLocation().Y + p.Y, GetActorLocation().Z + p.Z);
					ID = GameMode->GetVoxelFromWorld(pos);
				}

				// If point is inside the chunk get the value directly from ChunkDensity array
				else 
				{
					int32 idx = p.X + (p.Y * ChunkSize) + (p.Z * ChunkSize * ChunkSize);
					ID = ChunkDensity[idx];
					p *= VoxelSize;
				}

				///*/////////////////////////////
				// Set position, isovalue and material for vertex
				///*/////////////////////////////
				POINT point;

				if (ID == 0) 
				{
					point.p = p;
					float heigh = Noise->GetNoise2D(p.X + GetActorLocation().X, p.Y + GetActorLocation().Y);
					heigh = (heigh * 5 + 5) * 100;
					heigh -= p.Z;
					point.val = FMath::FloorToInt(FMath::GetMappedRangeValueClamped(FVector2D(0, -100), FVector2D(128, 245), heigh));
					point.mat = 0;
				}

				// If there is no neighbour chunk mark this chunk to be updated.
				else if (ID == -1) 
				{
					bNeedUpdate = true;
					point.p = p;
					point.val = 255;
					point.mat = 0;
				}

				// If is terrain
				else 
				{
					point.p = p;
					float heigh = Noise->GetNoise2D(p.X + GetActorLocation().X, p.Y + GetActorLocation().Y);
					heigh = (heigh * 5 + 5) * 100;
					heigh -= p.Z;
					point.val = FMath::FloorToInt(FMath::GetMappedRangeValueClamped(FVector2D(100, 0), FVector2D(0, 117), heigh));
					point.mat = --ID;
				}

				p /= VoxelSize;
				int32 idx = p.X + (p.Y * (ChunkSize + 1)) + (p.Z * (ChunkSize + 1) * (ChunkSize + 1));
				points[idx] = point;

			} // Close z for loop
		} // Close y for loop
	} // Close x for loop
	
	//                 v7______________________v6
	//                  /|                    /|
	//                 / |       1           / |
	//                /  |                  /  |
	//               /___|_________________/   |
	//            v4|    |                 |   |
	//              |    |         4       |   |
	//              | 32 |                 | 16|
	//              |    |     8           |   |
	//              |    |_________________|___|
	//              |   / v3               |   /v2
	//             Z|  /         2         |  /
	//              | /Y                   | /
	//              |/_____________________|/ 
	//              v0    X                v1

	const FVector grid[] = 
	{
		FVector(0, 0, 0), FVector(1, 0, 0), FVector(1, 1, 0), FVector(0, 1, 0), 
		FVector(0, 0, 1), FVector(1, 0, 1), FVector(1, 1, 1), FVector(0, 1, 1) 
	};

	for (int8 i = 0; i < ChunkSize; i++) 
	{
		for (int8 j = 0; j < ChunkSize; j++) 
		{
			for (int8 k = 0; k < ChunkSize; k++) 
			{
				GRIDCELL cell;
				// Fills the grid used to calculate the surface
				for (int8 a = 0; a < 8; a++)
				{
					FVector mask = grid[a];
					FVector p = FVector(i, j, k) + mask;
					int32 idx = p.X + (p.Y * (ChunkSize + 1)) + (p.Z * (ChunkSize + 1) * (ChunkSize + 1));

					cell.p[a] = points[idx].p;
					cell.val[a] = points[idx].val;
					cell.mat[a] = points[idx].mat;
				}

				TArray<TRIANGLE> triangles;

				// Calculate shape using Marching Cubes algorithm
				if (!Polygonise(cell, 128, triangles)) continue;

				int16 ID = 0;

				for (int8 a = 0; a < triangles.Num(); a++) 
				{
					
					int32 id1 = triangles[a].mat[0];
					int32 id2 = triangles[a].mat[1];
					int32 id3 = triangles[a].mat[2];

					FDynamicMaterial mat = GameMode->GetDynMat(id1, id2, id3);

					ID = mat.index;
					if (!meshSections.IsValidIndex(ID)) 
					{
						meshSections.SetNum(ID + 1);
					}
					meshSections[ID].Mat = mat.Mat;


					for (char p = 0; p < 3; p++)
					{
						if (triangles[a].mat[p] == id1)
						{
							meshSections[ID].VertexColors.Add(FColor(255, 0, 0, 0));
						}
						else if (triangles[a].mat[p] == id2)
						{
							meshSections[ID].VertexColors.Add(FColor(0, 255, 0, 0));
						}
						else
						{
							meshSections[ID].VertexColors.Add(FColor(0, 0, 255, 0));
						}
					}
					
					// Add vertices
					int32 oldVertCount = meshSections[ID].Vertices.Num();
					meshSections[ID].Vertices.Add(triangles[a].p[0]);
					meshSections[ID].Vertices.Add(triangles[a].p[1]);
					meshSections[ID].Vertices.Add(triangles[a].p[2]);
					
					// Add vertex index (create triangle)
					meshSections[ID].Triangles.Add(oldVertCount);
					meshSections[ID].Triangles.Add(oldVertCount + 1);
					meshSections[ID].Triangles.Add(oldVertCount + 2);
					
					// Calculate Normals
					FVector Normal = CalcNormal(triangles[a].p[0], triangles[a].p[1], triangles[a].p[2]);
					meshSections[ID].Normals.Add(Normal);
					meshSections[ID].Normals.Add(Normal);
					meshSections[ID].Normals.Add(Normal);

				}
			}
		}
	}
	
	meshSections.Shrink();
	int size = meshSections.GetAllocatedSize();
	if (size > FCString::Atoi(*(GameMode->SMeshSizeMax))){
		GameMode->SMeshSizeMax = FString::FromInt(size);
	}
	else if (size < FCString::Atoi(*(GameMode->SMeshSizeMin))) {
		GameMode->SMeshSizeMin = FString::FromInt(size);
	}

	
	for (int16 s = 0; s < meshSections.Num(); s++)
	{
		if (!meshSections.IsValidIndex(s)) 
		{
			UE_LOG(LogTemp, Warning, TEXT("Not a valid index"))
		}

		if (meshSections[s].Vertices.Num() == 0) continue;
		if (bRuntimeEnabled) 
		{

			if (TerrainMesh->DoesSectionExist(s))
			{
				UE_LOG(LogTemp, Warning, TEXT("Updating MeshSection %d"), s)
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


void AChunk::RemoveChunk()
{
	ChunkDensity.Empty();
	
	Destroy();
}


FVector CalcNormal(FVector &p1, FVector &p2, FVector &p3) {
	FVector Norm;
	Norm.X = (p3.Y - p1.Y)*(p2.Z - p1.Z) - (p3.Z - p1.Z)*(p2.Y - p1.Y);
	Norm.Y = (p3.Z - p1.Z)*(p2.X - p1.X) - (p3.X - p1.X)*(p2.Z - p1.Z);
	Norm.Z = (p3.X - p1.X)*(p2.Y - p1.Y) - (p3.Y - p1.Y)*(p2.X - p1.X);
	Norm.Normalize();
	return Norm;
}
