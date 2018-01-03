// Fill out your copyright notice in the Description page of Project Settings.

#include "WorldGameMode.h"
#include "Chunk.h"
#include "UFNBlueprintFunctionLibrary.h"
#include "MeshExtractor.h"
#include "Async.h"


// Sets default values
AWorldGameMode::AWorldGameMode()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AWorldGameMode::BeginPlay()
{
	double start = FPlatformTime::Seconds();
	Super::BeginPlay();

	// Generate noise used for terrain
	Noise = UUFNBlueprintFunctionLibrary::CreateNoiseGenerator(this, NoiseType, CellularDistanceFunction, CellularReturnType, FractalType, Interpolation, seed, Octaves, Frequency, Lacunarity, FractialGain);

	// if Voxel prototypes array is empty, fill with default values. Otherwise error will be triggered.
	if (Voxels.Num() <= 0) Voxels.SetNum(5);
	
	// Start Background for mesh calculations
	BackThread = FMeshExtractor::JoyInit(this, ChunkSize, VoxelSize, Noise);

	// Start timer to finish jobs from background thread
	GetWorldTimerManager().SetTimer(AsynkThreadCountTH, this, &AWorldGameMode::FinishJob, 0.1f, true, 1.0f);

	// Load Map
	UpdatePosition();
	LoadMap();

	double end = FPlatformTime::Seconds();
	double time = (end - start) * 1000;
	UE_LOG(LogTemp, Warning, TEXT("Game Initialization took: %f ms"), time);
}

void AWorldGameMode::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	BackThread->Shutdown();
	Super::EndPlay(EndPlayReason);
}

// Called every frame
void AWorldGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (UpdatePosition()) {
		LoadMap();
		UnloadMap();
	}
}

bool AWorldGameMode::UpdatePosition()
{
	APawn* Player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	FVector PlayerLocation;
	if (Player) {
		PlayerLocation = Player->GetActorLocation();
		PlayerLocation = PlayerLocation * FVector(1, 1, 0);
		PlayerLocation = PlayerLocation / (ChunkSize * VoxelSize);
	}

	if (floor(PlayerLocation.X) != ChunkCenter.X || floor(PlayerLocation.Y) != ChunkCenter.Y) {
		ChunkCenter.X = floor(PlayerLocation.X);
		ChunkCenter.Y = floor(PlayerLocation.Y);

		return true;
	}

	return false;
}

bool AWorldGameMode::InRange(const int32& x, const int32& y, const FVector2D& Center, const int32& Range)
{
	if ((FVector2D(x, y) - Center).Size() < Range) {
		return true;
	}
	return false;
}

void AWorldGameMode::UnloadMap()
{
	double start = FPlatformTime::Seconds();
	
	for (auto elem = World.CreateIterator(); elem; ++elem)
	{
		if (!InRange(elem.Key().X, elem.Key().Y, ChunkCenter, RenderRange + 2))
		{
			elem.Value()->RemoveChunk();
			elem.RemoveCurrent();
		}
	}
	
	double end = FPlatformTime::Seconds();
	removetime = FString::FromInt((end - start) * 1000);
}

void AWorldGameMode::LoadMap()
{
	double start = FPlatformTime::Seconds();
	bool Update = false;
	for (int32 x = -RenderRange; x < RenderRange; x++) 
	{
		for (int32 y = -RenderRange; y < RenderRange; y++)
		{
			if (InRange(x + ChunkCenter.X, y + ChunkCenter.Y, ChunkCenter, RenderRange)) 
			{
				FActorSpawnParameters SpawnParameters;
				FVector SpawnLocation = FVector((x + ChunkCenter.X) * ChunkSize * VoxelSize, (y + ChunkCenter.Y) * ChunkSize * VoxelSize, 0);
				FTransform SpawnTransform(FRotator(0, 0, 0), SpawnLocation, FVector(1, 1, 1));
				AChunk* NChunk = World.FindRef(FVector2D(x + ChunkCenter.X, y + ChunkCenter.Y));
				if (!NChunk) 
				{
					NChunk = GetWorld()->SpawnActorDeferred<AChunk>(Chunk, SpawnTransform);
					NChunk->SetActorLabel(*FString::Printf(TEXT("Chunk_%d_%d"), x + FMath::RoundToInt(ChunkCenter.X), y + FMath::RoundToInt(ChunkCenter.Y)));
					NChunk->Noise = Noise;
					NChunk->VoxelSize = VoxelSize;
					NChunk->ChunkSize = ChunkSize;
					if (UseRuntime) NChunk->EnableRuntime();
					
					UGameplayStatics::FinishSpawningActor(NChunk, SpawnTransform);
					World.Add(FVector2D(x + ChunkCenter.X, y + ChunkCenter.Y), NChunk);
					
					Update = true;
				}
			}
		}
	}

	if (Update)
	{
		for (auto elem = World.CreateIterator(); elem; ++elem)
		{
			if (elem.Value()->bNeedUpdate)
			{
				elem.Value()->bNeedUpdate = false;
				elem.Value()->RenderChunk();
			}
		}
	}
	double end = FPlatformTime::Seconds();
	addtime = FString::FromInt((end - start) * 1000);
}

int32 AWorldGameMode::GetVoxelFromWorld(const FVector& Location)
{
	// Calculate Chunk index
	const FVector2D ChunkIndex = FVector2D(floor(round(Location.X) / (ChunkSize * VoxelSize)), floor(round(Location.Y) / (ChunkSize * VoxelSize)));

	// Calculate local coordinates of the voxel so it can be found inside chunk
	const FVector LocalBlockPos = FVector((Location.X / VoxelSize - (ChunkIndex.X * ChunkSize)) , (Location.Y / VoxelSize - (ChunkIndex.Y * ChunkSize)), Location.Z / VoxelSize);

	const int32 Idx = LocalBlockPos.X + LocalBlockPos.Y * ChunkSize + LocalBlockPos.Z * ChunkSize * ChunkSize;

	// Check if local coordinates are inside the actual chunk, it should always be inside!
	if (LocalBlockPos.X >= ChunkSize || LocalBlockPos.Y >= ChunkSize || LocalBlockPos.Z >= ChunkSize) {
		UE_LOG(RenderTerrain, Error, TEXT("Requested a voxel out of range %s"), *LocalBlockPos.ToString());
		return int32(0);
	}

	// Finally get the voxel ID
	AChunk* NChunk = World.FindRef(ChunkIndex);
	if (NChunk) {		
		return NChunk->GetVoxelDensity(Idx);
	}
	//*****************  If some chunks not found:
	return int32(-1);
}

bool AWorldGameMode::SetVoxelFromWorld(FVector Location, int32 value)
{
	// Calculate Chunk index
	FVector2D ChunkIndex = FVector2D(floor(round(Location.X) / (ChunkSize * VoxelSize)), floor(round(Location.Y) / (ChunkSize * VoxelSize)));

	// Calculate local coordinates of the voxel so it can be found inside chunk
	FVector LocalBlockPos = FVector((Location.X - (ChunkIndex.X * ChunkSize * VoxelSize)) / VoxelSize, (Location.Y - (ChunkIndex.Y * ChunkSize * VoxelSize)) / VoxelSize, Location.Z / VoxelSize);

	const int32 Idx = LocalBlockPos.X + LocalBlockPos.Y * ChunkSize + LocalBlockPos.Z * ChunkSize * ChunkSize;

	// Check if local coordinates are inside the actual chunk, it should always be inside!
	if (LocalBlockPos.X >= ChunkSize || LocalBlockPos.Y >= ChunkSize || LocalBlockPos.Z >= ChunkSize) {
		UE_LOG(RenderTerrain, Error, TEXT("Requested a voxel out of range %s"), *LocalBlockPos.ToString());
		return int32(0);
	}

	// Finally change the value
	AChunk* NChunk;
	if (LocalBlockPos.X = ChunkSize - 1)
	{
		ChunkIndex += FVector2D(1, 0);
	}

	NChunk = World.FindRef(ChunkIndex);
	if (NChunk) {
		if (!NChunk->SetVoxelDensity(Idx, value)) return true;
		NChunk->RenderChunk();
		return true;
	}

	//*****************  If chunk not found:
	return false;
}

void AWorldGameMode::AddTriangles(TArray<FVector>& Vertex, TArray<int32>& Triangles, TArray<uint8> values)
{
	double start = FPlatformTime::Seconds();

	GRIDCELL grid;
	FVector points[8] = { FVector(0, 0, 0), FVector(100, 0, 0),  FVector(100, 100, 0),  FVector(0, 100, 0),  FVector(0, 0, 100),  FVector(100, 0, 100),  FVector(100, 100, 100),  FVector(0, 100, 100) };

	for (int8 i = 0; i < 8; i++) {
		grid.p[i] = points[i];
		grid.val[i] = values[i];
	}

	TArray<TRIANGLE> triangles;

	int8 newTriangles = Polygonise(grid, 127, triangles);

	for (int8 a = 0; a < triangles.Num(); a++) {
		//UE_LOG(LogTemp, Warning, TEXT("Adding triangles"));
		int32 oldVertCount = Vertex.Num();
		Vertex.Add(triangles[a].p[0]);
		Vertex.Add(triangles[a].p[1]);
		Vertex.Add(triangles[a].p[2]);

		Triangles.Add(oldVertCount);
		Triangles.Add(oldVertCount + 1);
		Triangles.Add(oldVertCount + 2);
	}
	double end = FPlatformTime::Seconds();
	double time = (end - start) * 1000;
	UE_LOG(LogTemp, Warning, TEXT("Triangles load took: %f ms"), time);
}


FString AWorldGameMode::CalcMatIndex(int32 & id1, int32 & id2, int32 & id3)
{
	int32 tmp;
	// Order input from bigger to smaller
	if (id3>id2) 
	{
		tmp = id3;
		id3 = id2;
		id2 = tmp;
	}
	if (id3>id1) 
	{
		tmp = id3;
		id3 = id1;
		id1 = tmp;
	}
	if (id2>id1) 
	{
		tmp = id2;
		id2 = id1;
		id1 = tmp;
	}

	// Change input so there is no duplicated index
	if (id1 == id2)
	{
		if (id1 == 1)
		{
			id1 = 2;
		}
		else
		{
			id2 = 1;
		}
	}
	if (id2 == id3)
	{
		if (id2 == 0)
		{
			id2 = 1;
			if (id1 == 1)
			{
				id1 = 2;
			}
		}
		else
		{
			id3 = 0;
		}
	}

	// Finally construct the material index
	return FString(FString::FromInt(id1) + "-" + FString::FromInt(id2) + "-" + FString::FromInt(id3));
}

FDynamicMaterial AWorldGameMode::GetDynMat(int32 & id1, int32 & id2, int32 & id3)
{
	FDynamicMaterial mat;

	if (id1 == id2 && id2 == id3)
	{
		mat.Mat = Voxels[id1].Mat;
		mat.index = id1;
		return mat;
	}
	
	FString matIdx = CalcMatIndex(id1, id2, id3);

	if (DynamicMatChache.Contains(matIdx)) 
	{
		return DynamicMatChache.FindRef(matIdx);
	}
	else 
	{
		FJob job;
		job.id1 = id1;
		job.id2 = id2;
		job.id3 = id3;
		job.matIdx = matIdx;
		FinishedJobs.Enqueue(job);
	}
	while (!DynamicMatChache.Contains(matIdx))
	{
		if(!IsInGameThread()) FPlatformProcess::Sleep(0.5);
		continue;
	}

	return DynamicMatChache.FindRef(matIdx);
}

void AWorldGameMode::FinishJob()
{
	double start = FPlatformTime::Seconds();
	FJob job;
	int8 count = 0;
	while ((FPlatformTime::Seconds() - start) < 0.001f && count < 64 && FinishedJobs.Dequeue(job))
	{
		
		count++;
		if (job.jobType == EJobType::JT_ExtractMesh)
		{
			// Calculate Chunk index
			FVector2D ChunkIndex = FVector2D(floor(round(job.Position.X) / (ChunkSize * VoxelSize)), floor(round(job.Position.Y) / (ChunkSize * VoxelSize)));

			AChunk* NChunk = World.FindRef(ChunkIndex);
			if (NChunk)
			{
				NChunk->FinishRendering(job.Mesh);
				NChunk->bNeedUpdate = job.NeedUpdate;
			}

		}
		else if (job.jobType == EJobType::JT_AddMaterial)
		{
			UE_LOG(Mat_Loader, Warning, TEXT("Added transition meterial with index: %s"), *job.matIdx);

			UMaterialInstanceDynamic* DynMat;

			DynMat = UMaterialInstanceDynamic::Create(TransitionMat, this);

			DynMat->SetTextureParameterValue(FName("BaseColor_1"), Voxels[job.id1].BaseColor);
			DynMat->SetTextureParameterValue(FName("Normal_1"), Voxels[job.id1].NormalMap);

			DynMat->SetTextureParameterValue(FName("BaseColor_2"), Voxels[job.id2].BaseColor);
			DynMat->SetTextureParameterValue(FName("Normal_2"), Voxels[job.id2].NormalMap);

			DynMat->SetTextureParameterValue(FName("BaseColor_3"), Voxels[job.id3].BaseColor);
			DynMat->SetTextureParameterValue(FName("Normal_3"), Voxels[job.id3].NormalMap);

			int32 idx = DynamicMatChache.Num() + Voxels.Num();

			FDynamicMaterial mat;

			mat.Mat = DynMat;
			mat.index = idx;

			DynamicMatChache.Add(job.matIdx, mat);
				
		}
	}
}
