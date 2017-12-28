// Fill out your copyright notice in the Description page of Project Settings.

#include "MeshExtractor.h"
#include "WorldGameMode.h"
#include "OpenWorld_16.h"
#include "FastNoise/FastNoise.h"
#include "SurfaceExtractor.h"

DEFINE_LOG_CATEGORY(Mesh_Extractor);


//***********************************************************
//Thread Worker Starts as NULL, prior to being instanced
//		This line is essential! Compiler error without it
FPrimeNumberWorker* FPrimeNumberWorker::Runnable = NULL;
//***********************************************************

FPrimeNumberWorker::FPrimeNumberWorker(TArray<uint32>& TheArray, const int32 IN_TotalPrimesToFind)
	: TotalPrimesToFind(IN_TotalPrimesToFind)
	, StopTaskCounter(0)
	, PrimesFoundCount(0)
{
	//Link to where data should be stored
	PrimeNumbers = &TheArray;

	Thread = FRunnableThread::Create(this, TEXT("FPrimeNumberWorker"), 0, TPri_BelowNormal); //windows default = 8mb for thread, could specify more
}

FPrimeNumberWorker::~FPrimeNumberWorker()
{
	delete Thread;
	Thread = NULL;
}

//Init
bool FPrimeNumberWorker::Init()
{
	//Init the Data
	PrimeNumbers->Empty();
	PrimeNumbers->Add(2);
	PrimeNumbers->Add(3);

	return true;
}

//Run
uint32 FPrimeNumberWorker::Run()
{
	//Initial wait before starting
	FPlatformProcess::Sleep(0.03);

	//While not told to stop this thread
	//		and not yet finished finding Prime Numbers
	while (StopTaskCounter.GetValue() == 0 && !IsFinished())
	{
		PrimeNumbers->Add(FindNextPrimeNumber());
		PrimesFoundCount++;

		//***************************************
		//Show Incremental Results in Main Game Thread!

		//	Please note you should not create, destroy, or modify UObjects here.
		//	  Do those sort of things after all thread are completed.

		//	  All calcs for making stuff can be done in the threads
		//	     But the actual making/modifying of the UObjects should be done in main game thread.
		///ThePC->ClientMessage(FString::FromInt(PrimeNumbers->Last()));
		//***************************************

		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		//prevent thread from using too many resources
		//FPlatformProcess::Sleep(0.01);
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	}

	//Run FPrimeNumberWorker::Shutdown() from the timer in Game Thread that is watching
	//to see when FPrimeNumberWorker::IsThreadFinished()

	return 0;
}

//stop
void FPrimeNumberWorker::Stop()
{
	StopTaskCounter.Increment();
}

FPrimeNumberWorker* FPrimeNumberWorker::JoyInit(TArray<uint32>& TheArray, const int32 IN_TotalPrimesToFind)
{
	//Create new instance of thread if it does not exist
	//		and the platform supports multi threading!
	if (!Runnable && FPlatformProcess::SupportsMultithreading())
	{
		Runnable = new FPrimeNumberWorker(TheArray, IN_TotalPrimesToFind);
	}
	return Runnable;
}

void FPrimeNumberWorker::EnsureCompletion()
{
	Stop();
	Thread->WaitForCompletion();
}

void FPrimeNumberWorker::Shutdown()
{
	if (Runnable)
	{
		Runnable->EnsureCompletion();
		delete Runnable;
		Runnable = NULL;
	}
}

bool FPrimeNumberWorker::IsThreadFinished()
{
	if (Runnable) return Runnable->IsFinished();
	return true;
}
int32 FPrimeNumberWorker::FindNextPrimeNumber()
{
	//Last known prime number  + 1
	int32 TestPrime = PrimeNumbers->Last();

	bool NumIsPrime = false;
	while (!NumIsPrime)
	{
		NumIsPrime = true;

		//Try Next Number
		TestPrime++;

		//Modulus from 2 to current number - 1
		for (int32 b = 2; b < TestPrime; b++)
		{
			//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			//prevent thread from using too many resources
			//FPlatformProcess::Sleep(0.01);
			//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

			if (TestPrime % b == 0)
			{
				NumIsPrime = false;
				break;
				//~~~
			}
		}
	}

	//Success!
	return TestPrime;
}


//***********************************************************
//Thread Worker Starts as NULL, prior to being instanced
//		This line is essential! Compiler error without it
FMeshExtractor* FMeshExtractor::Runnable = NULL;
//***********************************************************

FMeshExtractor::FMeshExtractor(AWorldGameMode* IN_GM, int32 size, int32 Voxelsize, UUFNNoiseGenerator* noise)
	: GameMode(IN_GM)
{
	ChunkSize = size;
	VoxelSize = Voxelsize;
	Noise = noise;

	Thread = FRunnableThread::Create(this, TEXT("FPrimeNumberWorker"), 0, TPri_BelowNormal); //windows default = 8mb for thread, could specify more
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

	while (StopTaskCounter.GetValue() == 0 && !IsFinished())
	{
		if (GameMode)
		{
			FJob Job;

			if (GameMode->Jobs.Dequeue(Job))
			{
				ExtractMesh(Job.Density, Job.Mesh, Job.Position);
			}
		}
	}
	return 0;
}

void FMeshExtractor::Stop()
{
	StopTaskCounter.Increment();
}

void FMeshExtractor::EnsureCompletion()
{
	Stop();
	Thread->WaitForCompletion();
}

FMeshExtractor * FMeshExtractor::JoyInit(AWorldGameMode* IN_GM, int32 size, int32 Voxelsize, UUFNNoiseGenerator* noise)
{
	//Create new instance of thread if it does not exist
	//		and the platform supports multi threading!
	if (!Runnable && FPlatformProcess::SupportsMultithreading())
	{
		Runnable = new FMeshExtractor(IN_GM, size, Voxelsize, noise);
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
	if (Runnable) return Runnable->IsFinished();
	return true;
}

void FMeshExtractor::ExtractMesh(TArray<uint16>* ChunkDensity, TArray<FMesh>* MeshSections, FVector Position)
{
	// Initial checks for safety

	if (!ChunkDensity) return;
	if (!MeshSections) return;

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
					FVector pos = FVector(Position.X + p.X, Position.Y + p.Y, Position.Z + p.Z);
					ID = GameMode->GetVoxelFromWorld(pos);
				}

				// If point is inside the chunk get the value directly from ChunkDensity array
				else
				{
					int32 idx = p.X + (p.Y * ChunkSize) + (p.Z * ChunkSize * ChunkSize);
					ID = (*ChunkDensity)[idx];
					p *= VoxelSize;
				}

				///*/////////////////////////////
				// Set position, isovalue and material for vertex
				///*/////////////////////////////
				POINT point;

				if (ID == 0)
				{
					point.p = p;
					float heigh = Noise->GetNoise2D(p.X + Position.X, p.Y + Position.Y);
					heigh = (heigh * 5 + 5) * 100;
					heigh -= p.Z;
					point.val = FMath::FloorToInt(FMath::GetMappedRangeValueClamped(FVector2D(0, -100), FVector2D(128, 245), heigh));
					point.mat = 0;
				}

				// If there is no neighbour chunk mark this chunk to be updated.
				else if (ID == -1)
				{
					//bNeedUpdate = true;
					point.p = p;
					point.val = 255;
					point.mat = 0;
				}

				// If is terrain
				else
				{
					point.p = p;
					float heigh = Noise->GetNoise2D(p.X + Position.X, p.Y + Position.Y);
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

	//Initializes the variables used to store all the mesh data.
	TArray<FMesh> meshSections;

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
					FVector Normal = CalcNormals(triangles[a].p[0], triangles[a].p[1], triangles[a].p[2]);
					meshSections[ID].Normals.Add(Normal);
					meshSections[ID].Normals.Add(Normal);
					meshSections[ID].Normals.Add(Normal);
					
				}
			}
		}
	}
}
