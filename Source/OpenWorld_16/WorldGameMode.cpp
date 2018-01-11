// Fill out your copyright notice in the Description page of Project Settings.

#include "WorldGameMode.h"
#include "Chunk.h"
#include "UFNBlueprintFunctionLibrary.h"
#include "MeshExtractor.h"
#include "Async.h"


// Sets default values
AWorldGameMode::AWorldGameMode()
{
	/// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AWorldGameMode::BeginPlay()
{
	double start = FPlatformTime::Seconds();
	Super::BeginPlay();

	/// Generate noise used for terrain
	Noise = CalculateNoise();

	/// if Voxel prototypes array is empty, fill with default values. Otherwise error will be triggered.
	if (Voxels.Num() <= 0) Voxels.SetNum(5);
	
	/// Start Background for mesh calculations
	BackThread = FMeshExtractor::JoyInit(this, ChunkSize, VoxelSize, Noise);

	/// Start timer to finish jobs from background thread
	GetWorldTimerManager().SetTimer(AsynkThreadCountTH, this, &AWorldGameMode::FinishJob, 0.1f, true, 1.0f);

	/// Load Map
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

bool AWorldGameMode::InLocalRange(const int32 & x, const int32 & y, const int32 & Range)
{
	if (FVector2D(x, y).Size() < Range) {
		return true;
	}
	return false;
}

UUFNNoiseGenerator * AWorldGameMode::CalculateNoise_Implementation()
{
	return UUFNBlueprintFunctionLibrary::CreateNoiseGenerator(this, ENoiseType::Simplex, ECellularDistanceFunction::Euclidean,
		ECellularReturnType::CellValue, EFractalType::FBM, EInterp::InterpLinear, 1234, 4, 0.0001f, 2.0f, 0.5f);
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
	removetime = FString::SanitizeFloat((end - start) * 1000);
}

void AWorldGameMode::LoadMap()
{
	double start = FPlatformTime::Seconds();
	bool Update = false;

	int32 X = RenderRange * 2;
	int32 Y = RenderRange * 2;

	// Spiral
	int x, y, dx, dy;
	x = y = dx = 0;
	dy = -1;
	int t;
	for (int i = 0; i < X * Y; i++) 
	{
		if (InLocalRange(x, y, RenderRange))
		{
			FActorSpawnParameters SpawnParameters;
			FVector SpawnLocation = FVector((x + ChunkCenter.X) * ChunkSize * VoxelSize, (y + ChunkCenter.Y) * ChunkSize * VoxelSize, 0);
			FTransform SpawnTransform(FRotator(0, 0, 0), SpawnLocation, FVector(1, 1, 1));
			AChunk* NChunk = World.FindRef(FVector2D(x + ChunkCenter.X, y + ChunkCenter.Y));
			if (!NChunk)
			{
				NChunk = GetWorld()->SpawnActorDeferred<AChunk>(Chunk, SpawnTransform);
				///NChunk->SetActorLabel(*FString::Printf(TEXT("Chunk_%d_%d"), x + FMath::RoundToInt(ChunkCenter.X), y + FMath::RoundToInt(ChunkCenter.Y)));
				NChunk->Noise = Noise;
				NChunk->VoxelSize = VoxelSize;
				NChunk->ChunkSize = ChunkSize;
				NChunk->bRuntimeEnabled = UseRuntime;

				UGameplayStatics::FinishSpawningActor(NChunk, SpawnTransform);
				World.Add(FVector2D(x + ChunkCenter.X, y + ChunkCenter.Y), NChunk);

				Update = true;
			}
		}
		if ((x == y) || ((x < 0) && (x == -y)) || ((x > 0) && (x == 1 - y))) 
		{
			t = dx;
			dx = -dy;
			dy = t;
		}
		x += dx;
		y += dy;
	}

	if (Update)
	{
		for (int32 a = 0; a < MeshsToUp.Num(); a++)
		{
			FVector2D& pos = MeshsToUp[a];
			AChunk* Chunk = World.FindRef(pos);
			if (Chunk)
			{
				UE_LOG(LogTemp, Warning, TEXT("Run"));
				Chunk->RenderChunk();
				MeshsToUp.Remove(pos);
				Update = false;
			}
		}
		if (!Update)
		{
			MeshsToUp.Compact();
			MeshsToUp.Shrink();
		}
	}
	double end = FPlatformTime::Seconds();
	addtime = FString::SanitizeFloat((end - start) * 1000);
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
	if (LocalBlockPos.X == ChunkSize - 1)
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

bool AWorldGameMode::GetDynMat(int32 & id1, int32 & id2, int32 & id3, FDynamicMaterial & mat)
{
	if (id1 == id2 && id2 == id3)
	{
		mat.Mat = Voxels[id1].Mat;
		mat.index = id1;
		return true;
	}
	
	FString matIdx = CalcMatIndex(id1, id2, id3);

	if (DynamicMatChache.Contains(matIdx)) 
	{
		mat = DynamicMatChache.FindRef(matIdx);
		return true;
	}
	/// If it is called from the game thread create the material directly
	else if (IsInGameThread())
	{
		UE_LOG(Mat_Loader, Warning, TEXT("GT:Added transition meterial with index: %s"), *matIdx);

		UMaterialInstanceDynamic* DynMat;

		DynMat = UMaterialInstanceDynamic::Create(TransitionMat, this);

		DynMat->SetTextureParameterValue(FName("BaseColor_1"), Voxels[id1].BaseColor);
		DynMat->SetTextureParameterValue(FName("Normal_1"), Voxels[id1].NormalMap);

		DynMat->SetTextureParameterValue(FName("BaseColor_2"), Voxels[id2].BaseColor);
		DynMat->SetTextureParameterValue(FName("Normal_2"), Voxels[id2].NormalMap);

		DynMat->SetTextureParameterValue(FName("BaseColor_3"), Voxels[id3].BaseColor);
		DynMat->SetTextureParameterValue(FName("Normal_3"), Voxels[id3].NormalMap);

		int32 idx = DynamicMatChache.Num() + Voxels.Num();

		mat.Mat = DynMat;
		mat.index = idx;

		DynamicMatChache.Add(matIdx, mat);
		return true;
	}
	else 
	{
		RequestedMaterials.Enqueue(FIntVector(id1, id2, id3));
	}

	/// Wait for the material to be created on the Game Thread
	int attempts = 0;
	while (!DynamicMatChache.Contains(matIdx) && attempts < 4)
	{
		attempts++;
		FPlatformProcess::Sleep(0.5);
		continue;
	}
	if (attempts >= 4)
	{
		UE_LOG(Mat_Loader, Error, TEXT("Failed producing dynamic material!"));
		return false;
	}
	mat = DynamicMatChache.FindRef(matIdx);
	return true;
}

void AWorldGameMode::FinishJob()
{
	double start = FPlatformTime::Seconds();
	int8 count = 0;

	while ((FPlatformTime::Seconds() - start) < 0.001f && count < 64 && (!FinishedMeshs.IsEmpty() || !RequestedMaterials.IsEmpty()))
	{
		count++;

		if (!FinishedMeshs.IsEmpty())
		{
			FSurfaceData job;
			FinishedMeshs.Dequeue(job);

			/// Calculate Chunk index
			FVector2D ChunkIndex = FVector2D(floor(round(job.Position.X) / (ChunkSize * VoxelSize)), floor(round(job.Position.Y) / (ChunkSize * VoxelSize)));

			/// Render mesh
			AChunk* NChunk = World.FindRef(ChunkIndex);
			if (NChunk)
			{
				NChunk->FinishRendering(job.Mesh);
				if (job.NeedUpdate) MeshsToUp.Emplace(ChunkIndex);
			}
			job.Mesh.Empty();
		}

		if (!RequestedMaterials.IsEmpty())
		{
			FIntVector indexes;
			RequestedMaterials.Dequeue(indexes);

			FString matIdx = CalcMatIndex(indexes.X, indexes.Y, indexes.Z);

			UE_LOG(Mat_Loader, Warning, TEXT("Added transition meterial with index: %s"), *matIdx);

			UMaterialInstanceDynamic* DynMat;

			DynMat = UMaterialInstanceDynamic::Create(TransitionMat, this);

			DynMat->SetTextureParameterValue(FName("BaseColor_1"), Voxels[indexes.X].BaseColor);
			DynMat->SetTextureParameterValue(FName("Normal_1"), Voxels[indexes.X].NormalMap);

			DynMat->SetTextureParameterValue(FName("BaseColor_2"), Voxels[indexes.Y].BaseColor);
			DynMat->SetTextureParameterValue(FName("Normal_2"), Voxels[indexes.Y].NormalMap);

			DynMat->SetTextureParameterValue(FName("BaseColor_3"), Voxels[indexes.Z].BaseColor);
			DynMat->SetTextureParameterValue(FName("Normal_3"), Voxels[indexes.Z].NormalMap);

			int32 idx = DynamicMatChache.Num() + Voxels.Num();

			FDynamicMaterial mat;

			mat.Mat = DynMat;
			mat.index = idx;

			DynamicMatChache.Add(matIdx, mat);
		}
	}
}
