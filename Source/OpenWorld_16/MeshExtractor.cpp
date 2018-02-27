// Fill out your copyright notice in the Description page of Project Settings.

#include "MeshExtractor.h"
#include "WorldGameMode.h"
#include "OpenWorld_16.h"
#include "FastNoise/FastNoise.h"
#include "SurfaceExtractor.h"
#include "Async.h"

DEFINE_LOG_CATEGORY(Mesh_Extractor);

//***********************************************************
//Thread Worker Starts as NULL, prior to being instanced
//		This line is essential! Compiler error without it
FMeshExtractor* FMeshExtractor::Runnable = NULL;
//***********************************************************

FMeshExtractor::FMeshExtractor(AWorldGameMode* IN_GM, int32 size, int32 Voxelsize, int32 height, UUFNNoiseGenerator* noise)
	: GameMode(IN_GM)
{
	ChunkSize = size;
	VoxelSize = Voxelsize;
	MaxHeight = height;
	Noise = noise;

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
	//Density->Empty();
	//Mesh->Empty();

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
	FPlatformProcess::Sleep(0.03);

	while (StopTaskCounter.GetValue() == 0 && !IsFinished)
	{
		FPlatformProcess::Sleep(0.01);

		if (!GameMode) return 0;

		FChunkData Data;

		if (GameMode->QueuedMeshs.Dequeue(Data))
		{
			double start = FPlatformTime::Seconds();

			ExtractMesh(Data.Density, Data.Position);

			double end = FPlatformTime::Seconds();
			GameMode->AvTime.Add(FMath::FloorToInt((end - start) * 1000000));
			GameMode->ExtractedMeshs.Increment();
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

FMeshExtractor* FMeshExtractor::JoyInit(AWorldGameMode* IN_GM, int32 Size, int32 VoxelSize, int32 Height, UUFNNoiseGenerator* Noise)
{
	if (!Noise)
	{
		UE_LOG(Mesh_Extractor, Error, TEXT("Noise object pointer not valid"));
		return nullptr;
	}
	//Create new instance of thread if it does not exist
	//		and the platform supports multi threading!
	if (!Runnable && FPlatformProcess::SupportsMultithreading())
	{
		Runnable = new FMeshExtractor(IN_GM, Size, VoxelSize, Height, Noise);
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
	TPoints.SetNum(ChunkDensity.Num());
	
	for (uint8 a = 0; a < ChunkDensity.Num(); a++)
	{
		if (ChunkDensity[a].FillState != EFillState::FS_Mixt)
		{
			TPoints[a].FillState = ChunkDensity[a].FillState;
			continue;
		}
		TPoints[a].FillState = EFillState::FS_Mixt;
		TPoints[a].points.SetNum((ChunkSize + 1) * (ChunkSize + 1) * (ChunkSize));

		int32 i = 0;
		for (uint8 x = 0; x < ChunkSize + 1; x++)
		{
			for (uint8 y = 0; y < ChunkSize + 1; y++)
			{
				for (uint8 z = 0; z < ChunkSize; z++)
				{
					int16 ID = 0;
					FVector p = FVector(x, y, z);

					///*/////////////////////
					// Get ID of the vertex
					///*/////////////////////

					//If point is outside the chunk get the value from world
					if (p.X >= ChunkSize || p.X < 0 || p.Y >= ChunkSize || p.Y < 0)
					{
						FVector pos = (p * VoxelSize) + FVector(Position.X, Position.Y, a * VoxelSize * ChunkSize);
						ID = GameMode->GetVoxelFromWorld(pos);
					}

					// If point is inside the chunk get the value directly from ChunkDensity array
					else
					{
						int32 idx = (p.X * ChunkSize * ChunkSize) + (p.Y * ChunkSize) + p.Z;
						ID = ChunkDensity[a].Density[idx];
					}

					///*/////////////////////////////
					// Set position, isovalue and material for vertex
					///*/////////////////////////////
					FPoint point;
					p *= VoxelSize;

					float height = Noise->GetNoise2D(p.X + Position.X, p.Y + Position.Y);
					height = height * (MaxHeight / 2) + MaxHeight / 2;
					height -= p.Z + a * VoxelSize * ChunkSize;

					if (ID == 0)
					{
						point.val = 255;// FMath::FloorToInt(FMath::GetMappedRangeValueClamped(FVector2D(0, -100), FVector2D(128, 245), height));
						point.mat = 0;
					}

					// If there is no neighbour chunk mark this chunk to be updated.
					else if (ID == -1)
					{
						point.val = 255;// height >= VoxelSize ? 0 : 255;
						point.mat = 0;
						bNeedUpdate = true;
					}

					// If is terrain
					else
					{
						point.val = 0;// FMath::FloorToInt(FMath::GetMappedRangeValueClamped(FVector2D(100, 0), FVector2D(0, 117), height));
						point.mat = --ID;
					}

					TPoints[a].points[i] = point;

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
	TArray<FMesh> meshSections;

	const FVector grid[] =
	{
		FVector(0, 0, 0), FVector(1, 0, 0), FVector(1, 1, 0), FVector(0, 1, 0),
		FVector(0, 0, 1), FVector(1, 0, 1), FVector(1, 1, 1), FVector(0, 1, 1)
	};

	uint16 k = 0;
	for (uint8 b = 0; b < TPoints.Num(); b++)
	{
		//if (TPoints[b].FillState != EFillState::FS_Mixt)
		//{
		//	k += 15;
		//}
		for (; k - b * ChunkSize < ChunkSize; k++)
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

					for (int8 a = 0; a < triangles.Num(); a++)
					{
						int32 id1 = triangles[a].mat[0];
						int32 id2 = triangles[a].mat[1];
						int32 id3 = triangles[a].mat[2];

						// Request material for the mesh. If not created properly avoid.
						FDynamicMaterial mat;
						if (!GameMode->GetMaterial(id1, id2, id3, mat)) return;
						

						ID = mat.index;
						if (!meshSections.IsValidIndex(ID))
						{
							meshSections.SetNum(ID + 1);
						}
						meshSections[ID].Mat = mat.Mat;


						for (uint8 p = 0; p < 3; p++)
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
						FVector Normal = CalcNormals(triangles[a].p[0], triangles[a].p[1], triangles[a].p[2]);
						meshSections[ID].Normals.Add(Normal);
						meshSections[ID].Normals.Add(Normal);
						meshSections[ID].Normals.Add(Normal);

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


	if (bNeedUpdate && !GameMode->MeshsToUpdate.Enqueue(FIntVector(Position.X, Position.Y, 0)))
	{
		UE_LOG(Mesh_Extractor, Warning, TEXT("Full! %d"), GameMode->MeshsToUpdate.Count());
	}

	GameMode->FinishedMeshs.Enqueue(FinishedMesh);
}

FPoint FMeshExtractor::GetPoint(const FVector& pos)
{
	int32 section = FMath::FloorToInt(pos.Z / ChunkSize);

	if (section >= TPoints.Num()) return FPoint(255);
	if (TPoints[section].FillState == EFillState::FS_Mixt)
	{
		int32 idx = pos.X * (ChunkSize + 1) * ChunkSize + pos.Y * ChunkSize + (pos.Z - ChunkSize * section);
		return TPoints[section].points[idx];
	}
	else if (TPoints[section].FillState == EFillState::FS_Full)
	{
		return FPoint();
	}
	else
	{
		return FPoint(255);
	}
}
