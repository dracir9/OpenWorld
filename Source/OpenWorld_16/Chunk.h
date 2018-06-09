// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnrealFastNoisePlugin.h"
#include "ProceduralMeshComponent.h"
#include "RuntimeMeshComponent.h"
#include "WorldGameMode.h"
#include "SurfaceExtractor.h"
#include "OpenWorld_16.h"
#include "Chunk.generated.h"

UCLASS()
class OPENWORLD_16_API AChunk : public AActor
{
	GENERATED_BODY()
	
public:	
	/**
	* Sets default values for this actor's properties */
	AChunk();
	
///###############################################################################################################
//                                                   FUNCTIONS
///###############################################################################################################

	/**
	* Destroys the current chunk */
	UFUNCTION(BlueprintCallable)
	void RemoveChunk();

	/**
	* Returns the voxel density of a given location
	* @param x,y,z Local coordinates of the voxel*/
	UFUNCTION(BlueprintCallable)
		int32 GetVoxelDensity(const int32& x, const int32& y, const int32& z);

	/**
	* Set the voxel density at given location
	* @param x,y,z Local coordinates of the voxel
	*
	* In order to get max speed we don't check for valid input!
	* MAKE SURE COORDINATES ARE POSITIVE AND WITHIN CHUNK RANGE!*/
	UFUNCTION(BlueprintCallable)
		bool SetVoxelDensity(const FVector& pos, const int32& value);

	/**
	* Returns the index of the voxels at the external chunk walls
	*
	* In order to get max speed we don't check for valid input!
	* MAKE SURE COORDINATES ARE POSITIVE AND WITHIN CHUNK RANGE!*/
	UFUNCTION(BlueprintCallable)
		static int32 PerimeterIndex(const int32& x, const int32& y, const int32& z, const int32& ChunkSize);

	/**
	* Calculates all the block data */
	UFUNCTION(BlueprintCallable)
		void InitializeChunk();

	/**
	* Creates the mesh to be rendered */
	UFUNCTION(BlueprintCallable)
		void RenderChunk();

	/**
	* Add given mesh to component to be rendered */
	//UFUNCTION(BlueprintCallable)
		void FinishRendering(const TArray<TArray<FMesh>>& meshSections);

	/**
	* Helper function to calculate normal vector of a plane.*/
	UFUNCTION(BlueprintCallable)
		static FVector CalcNormal(const FVector& p1, const FVector& p2, const FVector& p3);

	/**
	* Special heigh maps useful for testing map generation*/
	UFUNCTION(BlueprintCallable)
		void TestHeightmap(const EMapType type);

	/**
	* Draws lines at the chunk's edges. Useful for debugging and testing*/
	UFUNCTION(BlueprintCallable)
		void DrawChunkLimits() const;

	/**
	* Function for async chunk initialization(Sets the material of each voxel)*/
	TFunction<void()> InitializeAsync();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

///#######################################################################
//                             CHUNK PROPERTIES
///#######################################################################

	// Base componen of the world terrain
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Terrain")
		class UProceduralMeshComponent* ChunkMesh;

	// Base component of the terrain
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Terrain")
		TArray<URuntimeMeshComponent*> TerrainMesh;

	// Stores the reference to World Game Mode
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class AWorldGameMode* GameMode;

	// Stores the size of the voxels
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 VoxelSize;

	// Stores the number of voxels per side of the chunk
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 ChunkSize;

	// Stores maximum terrain height in UnrealUnits
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 MaxHeight;

	// Stores the reference to the noise used to generate terrain
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		UUFNNoiseGenerator* Noise;

	/** Are we using a special type of height map?
	* Use when debugging.
	* Skips height map generation based on noise and uses a preset function */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		bool bUseTestHeightmaps;

	/** Defines the type of debugging height map
	* Works when bUseTestHeightmaps is true
	* It defines the function used to generate the heightmap */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		EMapType MapType;

	// Can we use RuntimeMeshComponent plugin?
		FThreadSafeBool bRuntimeEnabled = true;

private:

	// Stores the voxel IDs of the chunk
	UPROPERTY()
		TArray<FDensity> Density;
};
