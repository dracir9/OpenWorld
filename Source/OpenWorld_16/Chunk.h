// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "RuntimeMeshComponent.h"
#include "WorldGameMode.h"
#include "SurfaceExtractor.h"
#include "Chunk.generated.h"

UCLASS()
class OPENWORLD_16_API AChunk : public AActor
{
	GENERATED_BODY()
	
public:	
	/** Sets default values for this actor's properties */
	AChunk();
	
	/** Destroys the current chunk */
	UFUNCTION(BlueprintCallable)
	void RemoveChunk();

	/** Returns the voxel density of a given location*/
	int32 GetVoxelDensity(const int32& index) 
	{ 
		if (index > ChunkDensity.Num()) return 0;
		return ChunkDensity[index]; 
	};

	/**Returns the voxel density of a given location*/
	UFUNCTION(BlueprintCallable)
	int32 GetVoxelDensity(const int32& x, const int32& y, const int32& z) const
	{ 
		int32 idx = x * ChunkSize * ChunkSize + y * ChunkSize + z;
		return ChunkDensity[idx];
	};

	/** Set the voxel density at given location*/
	UFUNCTION(BlueprintCallable)
	bool SetVoxelDensity(const int32& index, const int32& value) 
	{
		if (index >= 0 && index < ChunkDensity.Num()) 
		{
			// If the voxel alredy has this value there is no need to change it
			if (ChunkDensity[index] == value) return false;

			ChunkDensity[index] = value;
			return true;
		}
		else return false;
	};

	/** Calculates all the block data */
	UFUNCTION(BlueprintCallable)
		void InitializeChunk();

	/** Creates the mesh to be rendered */
	UFUNCTION(BlueprintCallable)
		void RenderChunk();

	/** Add given mesh to component to be rendered */
	UFUNCTION(BlueprintCallable)
		void FinishRendering(const TArray<FMesh>& meshSections);

	/** Helper function to calculate normal vector of a plane.*/
	UFUNCTION(BlueprintCallable)
	FVector CalcNormal(const FVector& p1, const FVector& p2, const FVector& p3);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Base componen of the world terrain
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Terrain")
		class UProceduralMeshComponent* ChunkMesh;

	// Base component of the terrain
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Terrain")
		class URuntimeMeshComponent* TerrainMesh;

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

	/// Can we use RuntimeMeshComponent plugin?
	FThreadSafeBool bRuntimeEnabled = true;

private:

	// Stores the voxel IDs of the chunk
	UPROPERTY()
		TArray<uint16> ChunkDensity;

	UPROPERTY()
		TArray<FDensity> Density;

};
