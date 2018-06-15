// Fill out your copyright notice in the Description page of Project Settings.

#include "MeshExtractor.h"
#include "WorldGameMode.h"
#include "OpenWorld_16.h"
#include "SurfaceExtractor.h"
#include "Async.h"

DEFINE_LOG_CATEGORY(Mesh_Extractor);

//***********************************************************
//Thread Worker Starts as NULL, prior to being instanced
//		This line is essential! Compiler error without it
FMeshExtractor* FMeshExtractor::Runnable = NULL;
//***********************************************************

FMeshExtractor::FMeshExtractor(AWorldGameMode* IN_GM, int32 size, int32 Voxelsize, int32 height)
	: GameMode(IN_GM)
{
	ChunkSize = size;
	VoxelSize = Voxelsize;
	MaxHeight = height;

	Thread = FRunnableThread::Create(this, TEXT("FMeshExtractor"), 0, TPri_BelowNormal); //windows default = 8mb for thread, could specify more
}

FMeshExtractor::~FMeshExtractor()
{
	delete Thread;
	Thread = NULL;
}

bool FMeshExtractor::Init()
{
	//Init the Data

	if (GameMode)
	{
		UE_LOG(Mesh_Extractor, Warning, TEXT("******************************"));
		UE_LOG(Mesh_Extractor, Warning, TEXT("Mesh Extractor Thread Started!"));
		UE_LOG(Mesh_Extractor, Warning, TEXT("******************************"));
	}
	else
	{
		UE_LOG(Mesh_Extractor, Error, TEXT("Failed starting Mesh Extractor Thread, null GameMode reference!"));
		return false;
	}
	return true;
}

uint32 FMeshExtractor::Run()
{
	//Initial wait before starting
	FPlatformProcess::Sleep(0.03f);

	while (StopTaskCounter.GetValue() == 0 && !IsFinished)
	{
		FPlatformProcess::Sleep(0.1f);

		if (!GameMode) return 0;

		FChunkData Data;

		while (GameMode->QueuedMeshs.Dequeue(Data) && StopTaskCounter.GetValue() == 0 && !IsFinished)
		{
			double start = FPlatformTime::Seconds();

			ExtractMesh(Data.Density, Data.Position);

			double end = FPlatformTime::Seconds();
			GameMode->AvTime.Add(FMath::FloorToInt((end - start) * 1000000.0));
			GameMode->ExtractedMeshs.Increment();
			FPlatformProcess::Sleep(0.001f);
		}
	}
	return 0;
}

void FMeshExtractor::Stop()
{
	StopTaskCounter.Increment();
	IsFinished = true;
}

void FMeshExtractor::EnsureCompletion()
{
	Stop();
	Thread->WaitForCompletion();
	UE_LOG(Mesh_Extractor, Warning, TEXT("Thread shutdown"));
}

FMeshExtractor* FMeshExtractor::JoyInit(AWorldGameMode* IN_GM, int32 Size, int32 VoxelSize, int32 Height)
{
	//Create new instance of thread if it does not exist
	//		and the platform supports multi threading!
	if (!Runnable && FPlatformProcess::SupportsMultithreading())
	{
		Runnable = new FMeshExtractor(IN_GM, Size, VoxelSize, Height);
	}
	return Runnable;
}

FVector FMeshExtractor::CalcNormals(const FVector & p1, const FVector & p2, const FVector & p3)
{
	FVector Norm;
	Norm.X = (p3.Y - p1.Y)*(p2.Z - p1.Z) - (p3.Z - p1.Z)*(p2.Y - p1.Y);
	Norm.Y = (p3.Z - p1.Z)*(p2.X - p1.X) - (p3.X - p1.X)*(p2.Z - p1.Z);
	Norm.Z = (p3.X - p1.X)*(p2.Y - p1.Y) - (p3.Y - p1.Y)*(p2.X - p1.X);
	Norm.Normalize();
	return Norm;
}

void FMeshExtractor::Shutdown()
{
	if (Runnable)
	{
		Runnable->EnsureCompletion();
		delete Runnable;
		Runnable = NULL;
	}
}

bool FMeshExtractor::IsThreadFinished()
{
	if (Runnable) return Runnable->IsFinished;
	return true;
}

void FMeshExtractor::ExtractMesh(TArray<FDensity>* Density, FVector2D Position)
{	
	static bool bInit;
	// Initial checks for safety
	if (Density)
	{
		if ((*Density).Num() != 16) return;
		ChunkDensity = *Density;
	}
	else
	{
		UE_LOG(Mesh_Extractor, Error, TEXT("Bad pointer!"));
		return;
	}

	if (!bInit)
	{
		UE_LOG(Mesh_Extractor, Display, TEXT("[2/7] Mesh extractor started!"));
	}

	
	bool bNeedUpdate = false;
	Section.SetNum(ChunkDensity.Num());
	TMap<FVector2D, int32> usedID;
	
	for (uint8 a = 0; a < ChunkDensity.Num(); a++)
	{
		bool bIsPerimeter = false;

		Section[a].FillState = ChunkDensity[a].FillState;
		if (ChunkDensity[a].FillState == EFillState::FS_Empty)
		{
			continue;
		}
		else if (ChunkDensity[a].FillState == EFillState::FS_Full)
		{
			bIsPerimeter = true;
		}
		Section[a].points.SetNum((ChunkSize + 1) * (ChunkSize + 1) * (ChunkSize));

		int32 i = 0;
		for (uint8 x = 0; x < ChunkSize + 1; x++)
		{
			for (uint8 y = 0; y < ChunkSize + 1; y++)
			{
				for (uint8 z = 0; z < ChunkSize; z++)
				{
					int32 ID = 0;
					FVector p = FVector(x, y, z);

					///*/////////////////////
					// Get ID of the vertex
					///*/////////////////////

					//If point is outside the chunk get the value from world
					if (p.X >= ChunkSize || p.X < 0 || p.Y >= ChunkSize || p.Y < 0)
					{
						FVector pos = (p * VoxelSize) + FVector(Position.X, Position.Y, a * VoxelSize * ChunkSize);
						ID = GameMode->GetVoxelFromWorld(pos);
						while (ID == -2)
						{
							UE_LOG(RenderTerrain, Display, TEXT("Failed to get density"));
							FPlatformProcess::Sleep(0.001);
							ID = GameMode->GetVoxelFromWorld(pos);
						}
					}
					else
					{
						// If point is inside the chunk get the value directly from ChunkDensity array
						if (bIsPerimeter)
						{
							ID = ChunkDensity[a].Voxel[PerimeterIndex(x, y, z)];
						}
						else
						{
							int32 idx = p.X + p.Y * ChunkSize + p.Z * ChunkSize * ChunkSize;
							ID = ChunkDensity[a].Voxel[idx];
						}
					}
					///*/////////////////////////////
					// Set position, isovalue and material for vertex
					///*/////////////////////////////
					FPoint point;
					p *= VoxelSize;
					
					// If the voxel is air
					if (floor(ID/4.0f) == 0)
					{
						point.val = FMath::FloorToInt(FMath::GetMappedRangeValueClamped(FVector2D(3, 0), FVector2D(128, 255), ID%4));
						point.mat = 0;
					}

					// If there is no neighbour chunk mark this chunk to be updated.
					else if (ID == -1)
					{
						point.val = 255;
						point.mat = 0;
						bNeedUpdate = true;
					}
					
					// If is terrain
					else
					{
						point.val = FMath::FloorToInt(FMath::GetMappedRangeValueClamped(FVector2D(3, 0), FVector2D(0, 127), ID%4));
						point.mat = floor(ID/4.0f) - 1;
						if (!usedID.Contains(FVector2D(a, point.mat)))
						{
							int32& count = usedID.FindOrAdd(FVector2D(a, -1));
							usedID.Add(FVector2D(a, point.mat), count);
							usedID[FVector2D(a, -1)] = count + 1;
						}
					}

					Section[a].points[i] = point;

					i++;
				} // Close z for loop
			} // Close y for loop
		} // Close x for loop
	}// for (uint8 a = 0; a < TPoints.Num(); a++)

	if (!bInit)
	{
		UE_LOG(Mesh_Extractor, Display, TEXT("[3/7] Point cloud extracted!"));
	}

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

	//Initializes the variables used to store all the mesh data.
	TArray<TArray<FMesh>> meshSections;
	meshSections.SetNum(16);

	const FVector grid[] =
	{
		FVector(0, 0, 0), FVector(1, 0, 0), FVector(1, 1, 0), FVector(0, 1, 0),
		FVector(0, 0, 1), FVector(1, 0, 1), FVector(1, 1, 1), FVector(0, 1, 1)
	};

	uint16 k = 0;
	for (uint8 stage = 0; stage < Section.Num(); stage++)
	{
		if (Section[stage].FillState != EFillState::FS_Mixt)
		{
			k += 14;
		}
		int32 count = usedID.FindRef(FVector2D(stage, -1));
		meshSections[stage].SetNum(count + floor(count / 2.0f));
		for (; k - stage * ChunkSize < ChunkSize; k++)
		{
			for (uint8 j = 0; j < ChunkSize; j++)
			{
				for (uint8 i = 0; i < ChunkSize; i++)
				{
					GRIDCELL cell;
					// Fills the grid used to calculate the surface
					for (int8 a = 0; a < 8; a++)
					{
						FPoint point;
						FVector p;
						p = FVector(i, j, k) + grid[a];
						
						point = GetPoint(p);

						cell.p[a] = p * VoxelSize;
						cell.val[a] = point.val;
						cell.mat[a] = point.mat;
					}
					static bool bGridDone;
					if (!bGridDone)
					{
						UE_LOG(Mesh_Extractor, Display, TEXT("[4/7] First grid extracted!"));
						bGridDone = true;
					}
					TArray<TRIANGLE> triangles;
					
					// Calculate shape using Marching Cubes algorithm
					if (!Polygonise(cell, 128, triangles)) continue;
					
					int16 ID = 0;

					for (TRIANGLE& triangle : triangles/*int8 a = 0; a < triangles.Num(); a++*/)
					{
						int32 id1 = triangle.mat[0];
						int32 id2 = triangle.mat[1];
						int32 id3 = triangle.mat[2];

						// Request material for the mesh. If not created properly avoid.
						FDynamicMaterial mat;
						if (!GameMode->GetMaterial(id1, id2, id3, mat)) return;

						ID = mat.index;
						if (!usedID.Contains(FVector2D(stage, ID)))
						{
							int32& count = usedID.FindOrAdd(FVector2D(stage, -1));
							usedID.Add(FVector2D(stage, ID), count);
							usedID[FVector2D(stage, -1)] = count + 1;
						}
						
						ID = usedID.FindRef(FVector2D(stage, ID));
						if (meshSections[stage].Num() <= ID)
						{
							UE_LOG(Mesh_Extractor, Warning, TEXT("Resized!"));
							meshSections[stage].SetNum(ID +1);
						}
						meshSections[stage][ID].Mat = mat.Mat;
						for (uint8 p = 0; p < 3; p++)
						{
							if (triangle.mat[p] == id1)
							{
								meshSections[stage][ID].VertexColors.Add(FColor(255, 0, 0, 0));
							}
							else if (triangle.mat[p] == id2)
							{
								meshSections[stage][ID].VertexColors.Add(FColor(0, 255, 0, 0));
							}
							else
							{
								meshSections[stage][ID].VertexColors.Add(FColor(0, 0, 255, 0));
							}
						}

						// Add vertices
						int32 oldVertCount = meshSections[stage][ID].Vertices.Num();
						meshSections[stage][ID].Vertices.Add(triangle.p[0]);
						meshSections[stage][ID].Vertices.Add(triangle.p[1]);
						meshSections[stage][ID].Vertices.Add(triangle.p[2]);

						// Add vertex index (create triangle)
						meshSections[stage][ID].Triangles.Add(oldVertCount);
						meshSections[stage][ID].Triangles.Add(oldVertCount + 1);
						meshSections[stage][ID].Triangles.Add(oldVertCount + 2);

						// Calculate Normals
						FVector Normal = CalcNormals(triangle.p[0], triangle.p[1], triangle.p[2]);
						meshSections[stage][ID].Normals.Add(Normal);
						meshSections[stage][ID].Normals.Add(Normal);
						meshSections[stage][ID].Normals.Add(Normal);
						
						// Calculate UVs
						FVector a = triangle.p[0] / VoxelSize;
						FVector b = triangle.p[1] / VoxelSize;
						FVector c = triangle.p[2] / VoxelSize;
						Normal = Normal.GetAbs();
						if (Normal.Z >= 0.577f)
						{
							meshSections[stage][ID].UVs.Add(FVector2D(a.X, a.Y));
							meshSections[stage][ID].UVs.Add(FVector2D(b.X, b.Y));
							meshSections[stage][ID].UVs.Add(FVector2D(c.X, c.Y));
						}
						else if (Normal.Y >= 0.577f)
						{
							meshSections[stage][ID].UVs.Add(FVector2D(a.X, a.Z));
							meshSections[stage][ID].UVs.Add(FVector2D(b.X, b.Z));
							meshSections[stage][ID].UVs.Add(FVector2D(c.X, c.Z));
						}
						else
						{
							meshSections[stage][ID].UVs.Add(FVector2D(a.Y, a.Z));
							meshSections[stage][ID].UVs.Add(FVector2D(b.Y, b.Z));
							meshSections[stage][ID].UVs.Add(FVector2D(c.Y, c.Z));
						}


					}// for (int8 a = 0; a < triangles.Num(); a++)
					static bool bTriangleDone;
					if (!bTriangleDone)
					{
						UE_LOG(Mesh_Extractor, Display, TEXT("[5/7] First triangle created!"));
						bTriangleDone = true;
					}
				}// for (int8 w = 0; w < ChunkSize; w++)
			}// for (int8 j = 0; j < ChunkSize; j++)
		} // for (int8 i = 0; i < ChunkSize; i++)
	}

	if (!bInit)
	
	{
		UE_LOG(Mesh_Extractor, Display, TEXT("[6/7] First calculation completed!"));
		bInit = true;
	}

	ChunkDensity.Empty();

	FSurfaceData FinishedMesh;
	FinishedMesh.Mesh = meshSections;
	FinishedMesh.Position = Position;
	

	if (bNeedUpdate)
	{
		bool bIsFull = GameMode->MeshsToUpdate.Enqueue(FIntVector(Position.X, Position.Y, 0));
		if (!bIsFull)
		{
			UE_LOG(Mesh_Extractor, Warning, TEXT("Full! %d"), GameMode->MeshsToUpdate.Count());
		}
	}

	GameMode->FinishedMeshs.Enqueue(FinishedMesh);
}

FPoint FMeshExtractor::GetPoint(const FVector& pos)
{
	int32 section = FMath::FloorToInt(pos.Z / ChunkSize);

	if (section >= Section.Num()) return FPoint(255);
	
	
	if (Section[section].FillState != EFillState::FS_Empty)
	{
		int32 idx = pos.X * (ChunkSize + 1) * ChunkSize + pos.Y * ChunkSize + (pos.Z - ChunkSize * section);
		return Section[section].points[idx];
	}
	else
	{
		return FPoint(255);
	}
}

int32 FMeshExtractor::PerimeterIndex(const int32& x, const int32& y, const int32& z)
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