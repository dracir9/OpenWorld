// Fill out your copyright notice in the Description page of Project Settings.

#include "WorldManager.h"
#include "Kismet/KismetMathLibrary.h"
#include "Chunk.h"


// Sets default values
AWorldManager::AWorldManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWorldManager::BeginPlay()
{
	double start = FPlatformTime::Seconds();
	Super::BeginPlay();
	Noise = UUFNBlueprintFunctionLibrary::CreateNoiseGenerator(this, NoiseType, CellularDistanceFunction, CellularReturnType, FractalType, Interpolation, seed, Octaves, Frequency, Lacunarity, FractialGain);
	
	if (Voxels.Num() <= 0) Voxels.SetNum(1);

	//Initialize();

	UpdatePosition();
	LoadMap();

	double end = FPlatformTime::Seconds();
	double time = (end - start) * 1000;
	UE_LOG(LogTemp, Warning, TEXT("First map load took: %f ms"), time);
}

// Called every frame
void AWorldManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (UpdatePosition()) {
		UnloadMap();
		LoadMap();
	}
}

void AWorldManager::LoadMap()
{
	for (int x = -RenderRange; x < RenderRange; x++) {
		for (int y = -RenderRange; y < RenderRange; y++)
		{
			FActorSpawnParameters SpawnParameters;
			FVector SpawnLocation = FVector((x + ChunkCenter.X) * ChunkSize * VoxelSize, (y + ChunkCenter.Y) * ChunkSize * VoxelSize, 0);
			FTransform SpawnTransform(FRotator(0, 0, 0), SpawnLocation, FVector(1, 1, 1));
			if (!World.Contains(FVector2D(x + ChunkCenter.X, y + ChunkCenter.Y))) {
				if (InRange(x + ChunkCenter.X, y + ChunkCenter.Y, ChunkCenter, RenderRange)) {
					AChunk* NewChunk = GetWorld()->SpawnActorDeferred<AChunk>(Chunk, SpawnTransform);
					if (NewChunk)
					{
						NewChunk->Noise = Noise;
						NewChunk->WorldManager = this;
						NewChunk->VoxelSize = VoxelSize;
						NewChunk->ChunkSize = ChunkSize;
						if (UseRuntime) NewChunk->EnableRuntime();

						UGameplayStatics::FinishSpawningActor(NewChunk, SpawnTransform);
						World.Add(FVector2D(x + ChunkCenter.X, y + ChunkCenter.Y), NewChunk);
					}
				}
			}
			else {
				AChunk* NChunk = World.FindRef(FVector2D(x + ChunkCenter.X, y + ChunkCenter.Y));
				if (NChunk->NeedUpdate) {
					NChunk->RenderChunk();
				}
			}
		}
	}
}

int32 AWorldManager::GetVoxelFromWorld(FVector Location)
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

bool AWorldManager::SetVoxelFromWorld(FVector Location, int32 value)
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

void AWorldManager::AddTriangles(TArray<FVector>& Vertex, TArray<int32>& Triangles, TArray<uint8> values)
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

void AWorldManager::UnloadMap()
{
	for (auto& Elem : World)
	{
		if (!InRange(Elem.Key.X, Elem.Key.Y, ChunkCenter, RenderRange)) {

			Elem.Value->RemoveChunk();
			World.Remove(Elem.Key);
		}
	}
}

bool AWorldManager::UpdatePosition()
{
	APawn* Player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	FVector PlayerLocation;
	if (Player) {
		PlayerLocation = Player->GetActorLocation() /* FVector(1, 1, 0)) / (ChunkSize * VoxelSize)*/;
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

bool AWorldManager::InRange(int32 x, int32 y, FVector2D Center, int32 Range)
{
	if ((FVector2D(x, y) - Center).Size() < Range) {
		return true;
	}
	return false;
}