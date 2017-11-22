// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WorldManager.h"
#include "WorldGameMode.h"
#include "Chunk.generated.h"

UCLASS()
class OPENWORLD_16_API AChunk : public AActor
{
	GENERATED_BODY()
	
public:	
	/** Sets default values for this actor's properties */
	AChunk();
	
	/** Destroys the current chunk */
	void RemoveChunk();

	/** Enables using RuntimeMesh */
	void EnableRuntime() { RuntimeEnabled = true; };
	
	/** Check if we can use RuntimeMesh*/
	bool CanUseRuntime() { return RuntimeEnabled; };

	/** Returns the voxel density of a given location*/
	int32 GetVoxelDensity(int32 index) { return ChunkDensity[index]; };

	/**Returns the voxel density of a given location*/
	int32 GetVoxelDensity(int32 x, int32 y, int32 z) { 
		int32 idx = x + y * ChunkSize + z * ChunkSize * ChunkSize; 
		return ChunkDensity[idx];
	};

	/** Set the voxel density at given location*/
	bool SetVoxelDensity(int32 index, int32 value) {
		if (index >= 0 && index < ChunkDensity.Num()) ChunkDensity[index] = value;
		else return false;

		return true;
	};

	// Calculates all the block data
	UFUNCTION(BlueprintCallable)
		void InitializeChunk();

	//Creates the mesh to be rendered
	UFUNCTION(BlueprintCallable)
		void RenderChunk();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Base componen of the world terrain
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Terrain")
		class UProceduralMeshComponent* ChunkMesh;

	// Base component of the terrain ****** EPERIMENTAL********
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Terrain")
		class URuntimeMeshComponent* TerrainMesh;

	// Stores the reference to the World Manager
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class AWorldManager* WorldManager;

	// Stores the reference to World Game Mode
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class AWorldGameMode* GameMode;
	// Stores the size of the voxels
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 VoxelSize;

	// Stores the number of voxels per side of the chunk
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 ChunkSize;

	// Stores the reference to the noise used to generate terrain
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		UUFNNoiseGenerator* Noise;

	// Sets the chunk to be updated in the next load world cicle
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		bool NeedUpdate = false;

private:

	// Stores the voxel IDs of the chunk
	UPROPERTY()
	TArray<uint16> ChunkDensity;

	/// Can we use RuntimeMeshComponent plugin?
	bool RuntimeEnabled = true;

};

FVector CalcNormal(FVector & p1, FVector & p2, FVector & p3);
