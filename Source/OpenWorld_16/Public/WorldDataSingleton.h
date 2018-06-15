// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenWorld_16.h"
#include "Chunk.h"
#include "WorldDataSingleton.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class OPENWORLD_16_API UWorldDataSingleton : public UObject
{
	GENERATED_BODY()
	
public:
	UWorldDataSingleton(const FObjectInitializer& ObjectInitializer);

	////Chunk to spawn
	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Settings")
	//	TSubclassOf<AChunk> Chunk;

	//// Stores the base instance for transition between materials
	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Settings")
	//	UMaterialInterface* TransitionMat;

	//// Stores the materials for all the tipes of voxel
	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Settings")
	//	TArray<FVoxelS> Voxels;

	//// Sets the number of voxels per line that the chunk will contain.
	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Settings")
	//	int32 ChunkSize = 16;

	//// Size of the voxels in UUs.
	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Settings")
	//	int32 VoxelSize = 100;

	//// Maximum terrain height in UnrealUnits.
	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Settings",
	//	meta = (ClampMin = "0.0", ClampMax = "25000.0", UIMin = "0.0", UIMax = "25000.0"))
	//	int32 MaxHeight = 20000;

	////Used to calculte the chunks that will be generated
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
	//	int32 RenderRange = 8;

	//// Can we use RuntimeMeshComponent plugin?
	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Settings")
	//	bool bUseRuntime = true;

	///** Are we using a special type of height map?
	//* Use when debugging.
	//* Skips height map generation based on noise and uses a preset function */
	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Settings")
	//	bool bUseTestHeightmaps;

	///** Defines the type of debugging height map
	//* Works when bUseTestHeightmaps is true
	//* It defines the function used to generate the heightmap */
	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Settings", meta = (EditCondition = "bUseTestHeightmaps"))
	//	EMapType MapType;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Settings")
		int32 IntegerProve;

	
};
