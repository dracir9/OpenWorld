// Fill out your copyright notice in the Description page of Project Settings.

#include "WorldGameMode.h"
#include "Chunk.h"

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
	Noise = UUFNBlueprintFunctionLibrary::CreateNoiseGenerator(this, NoiseType, CellularDistanceFunction, CellularReturnType, FractalType, Interpolation, seed, Octaves, Frequency, Lacunarity, FractialGain);

	if (Voxels.Num() <= 0) Voxels.SetNum(5);

	
	UpdatePosition();
	LoadMap();


	double end = FPlatformTime::Seconds();
	double time = (end - start) * 1000;
	UE_LOG(LogTemp, Warning, TEXT("First map load took: %f ms"), time);
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

bool AWorldGameMode::InRange(int32 x, int32 y, FVector2D Center, int32 Range)
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
	time1 = (end - start) * 1000;
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
			if (elem.Value()->NeedUpdate)
			{
				elem.Value()->NeedUpdate = false;
				elem.Value()->RenderChunk();
			}
		}
	}
	double end = FPlatformTime::Seconds();
	time = (end - start) * 1000;
}

int32 AWorldGameMode::GetVoxelFromWorld(FVector Location)
{
	FVector2D ChunkPos = FVector2D(floor(round(Location.X) / (ChunkSize * VoxelSize)), floor(round(Location.Y) / (ChunkSize * VoxelSize)));
	FVector LocalBlockPos = FVector((Location.X - (ChunkPos.X * ChunkSize * VoxelSize)) / VoxelSize, (Location.Y - (ChunkPos.Y * ChunkSize * VoxelSize)) / VoxelSize, Location.Z / VoxelSize);
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::FromInt(LocalBlockPos.X) + " " + FString::FromInt(LocalBlockPos.Y));
	int32 ID = LocalBlockPos.X + LocalBlockPos.Y * ChunkSize + LocalBlockPos.Z * ChunkSize * ChunkSize;
	if (LocalBlockPos.X >= ChunkSize || LocalBlockPos.Y >= ChunkSize || LocalBlockPos.Z >= ChunkSize) {
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString("Input:" + Location.ToString() + "Output: " + LocalBlockPos.ToString()));
		UE_LOG(Terrain_Renderer, Error, TEXT("Requested a voxel out of range %s"), *LocalBlockPos.ToString());
		return int32(0);
	}
	if (World.Contains(ChunkPos)) {
		AChunk* NChunk = World.FindRef(ChunkPos);
		return NChunk->GetVoxelDensity(ID);
	}
	//*****************  If some chunks not found:
	return int32(-1);
}

bool AWorldGameMode::SetVoxelFromWorld(FVector Location, int32 value)
{
	FVector2D ChunkPos = FVector2D(floor(round(Location.X) / (ChunkSize * VoxelSize)), floor(round(Location.Y) / (ChunkSize * VoxelSize)));
	FVector LocalBlockPos = FVector((Location.X - (ChunkPos.X * ChunkSize * VoxelSize)) / VoxelSize, (Location.Y - (ChunkPos.Y * ChunkSize * VoxelSize)) / VoxelSize, Location.Z / VoxelSize);
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::FromInt(LocalBlockPos.X) + " " + FString::FromInt(LocalBlockPos.Y));
	int32 ID = LocalBlockPos.X + LocalBlockPos.Y * ChunkSize + LocalBlockPos.Z * ChunkSize * ChunkSize;
	if (LocalBlockPos.X >= ChunkSize || LocalBlockPos.Y >= ChunkSize || LocalBlockPos.Z >= ChunkSize) {
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString("Input:" + Location.ToString() + "Output: " + LocalBlockPos.ToString()));
		UE_LOG(Terrain_Renderer, Error, TEXT("Requested a voxel out of range %s"), *LocalBlockPos.ToString());
		return int32(0);
	}
	if (World.Contains(ChunkPos)) {
		AChunk* NChunk = World.FindRef(ChunkPos);

		if (NChunk->GetVoxelDensity(ID) == value) return true;

		NChunk->SetVoxelDensity(ID, value);
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

	if (id3>id2) {
		tmp = id3;
		id3 = id2;
		id2 = tmp;
	}
	if (id3>id1) {
		tmp = id3;
		id3 = id1;
		id1 = tmp;
	}
	if (id2>id1) {
		tmp = id2;
		id2 = id1;
		id1 = tmp;
	}
	
	if (id1 == id2) {
		if (id1 == 1)
			id1 = 2;
		else
			id2 = 1;
	}
	if (id2 == id3) {
		if (id2 == 0) {
			id2 = 1;
			if (id1 == 1) id1 = 2;
		}
		else
			id3 = 0;
	}

	return FString(FString::FromInt(id1) + "-" + FString::FromInt(id2) + "-" + FString::FromInt(id3));
}

FDynamicMaterial AWorldGameMode::GetDynMat(int32 & id1, int32 & id2, int32 & id3)
{
	int t1 = id1;
	int t2 = id2;
	int t3 = id3;

	FString matIdx = CalcMatIndex(id1, id2, id3);
	FDynamicMaterial mat;
	if (DynamicMatChache.Contains(matIdx)) {
		return DynamicMatChache.FindRef(matIdx);
	}
	else {
		UE_LOG(Mat_Loader, Warning, TEXT("Added transition meterial with index: %s"), *matIdx)

		UMaterialInstanceDynamic* DynMat = UMaterialInstanceDynamic::Create(TransitionMat, this);
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

		return mat;
	}
}
