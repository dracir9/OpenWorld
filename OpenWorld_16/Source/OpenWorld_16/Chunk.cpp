// Fill out your copyright notice in the Description page of Project Settings.

#include "Chunk.h"
#include "ProceduralMeshComponent.h"

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

const FVector grid[] = { FVector(0, 0, 0), FVector(1, 0, 0),  FVector(1, 1, 0),  FVector(0, 1, 0),  FVector(0, 0, 1),
						FVector(1, 0, 1),  FVector(1, 1, 1),  FVector(0, 1, 1) };

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
}

// Called every frame
void AChunk::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AChunk::InitializeChunk()
{
	ChunkDensity.SetNumUninitialized(ChunkSize * ChunkSize * ChunkSize);
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
					int16 i = x + (y * ChunkSize) + (z * ChunkSize * ChunkSize);
					heigh = Noise->GetNoise2D(x * VoxelSize + GetActorLocation().X, y * VoxelSize + GetActorLocation().Y);
					heigh = heigh * 5 + 5;

					if (z < heigh) {
						if (z < 5) {
							ChunkDensity[i] = 1;
						}
						else if (z < 7) {
							ChunkDensity[i] = 2;
						}
						else
						{
							ChunkDensity[i] = 3;
						}
						//ChunkDensity[i] = 2;
					}
					else {
						ChunkDensity[i] = 0;
					}
				}
			}
		}
	}
}


void AChunk::RenderChunk()
{
	
	if (!TerrainMesh || !ChunkMesh) {
		UE_LOG(Terrain_Renderer, Error, TEXT("Components not created properly"));
		return;
	}
	if (RuntimeEnabled) {
		//TerrainMesh->ClearAllMeshSections();
	}
		

	//Initializes the variables used to store all the mesh data.
	TArray<FMesh> meshSections;
	//meshSections.SetNum(1024);

	if (!GameMode) {
		UE_LOG(LogTemp, Error, TEXT("Game Mode ref is null!!"));
		return;
	}

	GRIDCELL points;

	//UE_LOG(LogTemp, Warning, TEXT("Mesh building started"));
	for (int8 x = 0; x < ChunkSize; x++) {
		for (int8 y = 0; y < ChunkSize; y++) {
			for (int8 z = 0; z < ChunkSize; z++) {
				// Fills the grid used to calculate the surface
				for (int8 a = 0; a < 8; a++)
				{
					int16 ID = 0;
					FVector mask = grid[a];
					FVector p = FVector(x, y, z) + mask;

					// If point is over or under the chunk's limit set it as air.
					if (p.Z >= ChunkSize || p.Z < 0) {
						p *= VoxelSize;
						ID = 0;
					}

					//If point is outside the chunk get the value from world
					else if (p.X >= ChunkSize || p.X < 0 || p.Y >= ChunkSize || p.Y < 0) {
						p *= VoxelSize;
						FVector pos = FVector(GetActorLocation().X + p.X, GetActorLocation().Y + p.Y, GetActorLocation().Z + p.Z);
						ID = GameMode->GetVoxelFromWorld(pos);
					}
					
					// If point is inside the chunk
					else {
						int16 i = p.X + (p.Y * ChunkSize) + (p.Z * ChunkSize * ChunkSize);
						ID = ChunkDensity[i];
						p *= VoxelSize;
					}

					// Set the material for vertex
					
					if (ID == 0) {
						points.p[a] = p;
						points.val[a] = 255;
						points.mat[a] = ID;
					}
					// If there is no neighbour chunk mark this chunk to be updated.
					else if (ID == -1) {
						NeedUpdate = true;
						points.p[a] = p;
						points.val[a] = 255;
						points.mat[a] = 0;
					}
					// If is terrain
					else {
						points.p[a] = p;
						points.val[a] = 0;
						points.mat[a] = --ID;
					}
				}

				TArray<TRIANGLE> triangles;

				// Calculate shape
				Polygonise(points, 127, triangles);

				int16 ID = 0;

				for (int8 a = 0; a < triangles.Num(); a++) {
					if (triangles[a].mat[0] == triangles[a].mat[1] && triangles[a].mat[1] == triangles[a].mat[2]) {
						ID = triangles[a].mat[0];
						if (!meshSections.IsValidIndex(ID)) {
							meshSections.SetNum(ID + 1);
						}
						meshSections[ID].Mat = GameMode->Voxels[ID].Mat;
					}
					else {
						int32 id1 = triangles[a].mat[0];
						int32 id2 = triangles[a].mat[1];
						int32 id3 = triangles[a].mat[2];

						FDynamicMaterial mat = GameMode->GetDynMat(id1, id2, id3);

						ID = mat.index;
						if (!meshSections.IsValidIndex(ID)) {
							meshSections.SetNum(ID + 1);
						}
						meshSections[ID].Mat = mat.Mat;

						for (char p = 0; p < 3; p++) {
							if (triangles[a].mat[p] == id1)
								meshSections[ID].VertexColors.Add(FColor(255, 0, 0, 0));
							else if (triangles[a].mat[p] == id2)
								meshSections[ID].VertexColors.Add(FColor(0, 255, 0, 0));
							else
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
					meshSections[ID].Normals.Add(CalcNormal(triangles[a].p[0], triangles[a].p[1], triangles[a].p[2]));
					meshSections[ID].Normals.Add(CalcNormal(triangles[a].p[0], triangles[a].p[1], triangles[a].p[2]));
					meshSections[ID].Normals.Add(CalcNormal(triangles[a].p[0], triangles[a].p[1], triangles[a].p[2]));

					// Add UVs
					/*meshSections[ID].UVs.Add(FVector2D(0, 0));
					meshSections[ID].UVs.Add(FVector2D(1, 0));
					meshSections[ID].UVs.Add(FVector2D(0, 1));*/

					/* Vertex Colors
					meshSections[ID].VertexColors.Add(FColor(255, 255, 255, ID));
					meshSections[ID].VertexColors.Add(FColor(255, 255, 255, ID));
					meshSections[ID].VertexColors.Add(FColor(255, 255, 255, ID));*/

				}
			}
		}
	}

	for (int16 s = 0; s < meshSections.Num(); s++)
	{
		if (!meshSections.IsValidIndex(s)) {
			UE_LOG(LogTemp, Warning, TEXT("Not a valid index"))
		}

		if (meshSections[s].Vertices.Num() == 0) continue;
		if (RuntimeEnabled) {

			if (TerrainMesh->DoesSectionExist(s))
			{
				UE_LOG(LogTemp, Warning, TEXT("Updating MeshSection %d"), s)
				TerrainMesh->UpdateMeshSection(s, meshSections[s].Vertices, meshSections[s].Triangles, meshSections[s].Normals, meshSections[s].UVs, meshSections[s].VertexColors, meshSections[s].RTangents);
			}
			else {
				TerrainMesh->CreateMeshSection(s, meshSections[s].Vertices, meshSections[s].Triangles, meshSections[s].Normals, meshSections[s].UVs, meshSections[s].VertexColors, meshSections[s].RTangents, true, EUpdateFrequency::Average);
			}
			TerrainMesh->SetMaterial(s, meshSections[s].Mat);
			
		}
		else {
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