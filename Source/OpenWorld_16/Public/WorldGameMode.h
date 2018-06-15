// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UnrealFastNoisePlugin.h"
#include "ProceduralMeshComponent.h"
#include "RuntimeMeshComponent.h"
#include "OpenWorld_16.h"
#include "WorldGameMode.generated.h"


class AChunk;
class FMeshExtractor;
class UMySaveGame;
class UWorldDataSingleton;

USTRUCT(BlueprintType)
struct FMesh 
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
		TArray<FVector> Vertices;

	UPROPERTY(EditAnywhere)
		TArray<int32> Triangles;

	UPROPERTY(EditAnywhere)
		TArray<FVector> Normals;

	UPROPERTY(EditAnywhere)
		TArray<FVector2D> UVs;

	UPROPERTY(EditAnywhere)
		TArray<FProcMeshTangent> Tangents;

	UPROPERTY(EditAnywhere)
		TArray<FRuntimeMeshTangent> RTangents;

	UPROPERTY(EditAnywhere)
		TArray<FColor> VertexColors;

	UPROPERTY(EditAnywhere)
		UMaterialInstance* Mat;
};

USTRUCT()
struct FSurfaceData
{
	GENERATED_BODY()

	/** Mesh data array */
	/*UPROPERTY()
		TArray<FMesh> Mesh;*/

	/** Chunk Position */
	UPROPERTY()
		FVector2D Position;

	TArray<TArray<FMesh>> Mesh;
};


/**
 * 
 */
UCLASS()
class OPENWORLD_16_API AWorldGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	// Sets default values for this actor's properties
	AWorldGameMode();

	//Called every frame
	virtual void Tick(float DeltaTime) override;


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////*****     WORLD SETTINGS     *****///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Chunk to spawn
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Settings")
		TSubclassOf<AChunk> Chunk;

	// Stores the base instance for transition between materials
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Settings")
		UMaterialInterface* TransitionMat;

	// Stores the materials for all the tipes of voxel
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Settings")
		TArray<FVoxelS> Voxels;

	// Sets the number of voxels per line that the chunk will contain.
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Settings")
		int32 ChunkSize = 16;

	// Size of the voxels in UUs.
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Settings")
		int32 VoxelSize = 100;

	// Maximum terrain height in UnrealUnits.
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Settings",
		meta = (ClampMin = "0.0", ClampMax = "25000.0", UIMin = "0.0", UIMax = "25000.0"))
		int32 MaxHeight = 20000;

	//Used to calculte the chunks that will be generated
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		int32 RenderRange = 8;

	// Can we use RuntimeMeshComponent plugin?
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Settings")
		bool bUseRuntime = true;

	/** Are we using a special type of height map?
	* Use when debugging.
	* Skips height map generation based on noise and uses a preset function */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Settings")
		bool bUseTestHeightmaps;

	/** Defines the type of debugging height map
	* Works when bUseTestHeightmaps is true
	* It defines the function used to generate the heightmap */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Settings", meta = (EditCondition = "bUseTestHeightmaps"))
		EMapType MapType;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////*****     WORLD VARIABLES    *****///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// Stores dynamic material instances
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Variables")
		TMap<FString, FDynamicMaterial> DynamicMatChache;

	// Point used to calculate the rendered chunks
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "World Variables")
		FVector2D ChunkCenter;

	// Stores the generated chunks
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "World Variables")
		TMap<FVector2D, AChunk*> World;

	// Noise object for terrain generation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
		UUFNNoiseGenerator* Noise;

	// Save game Instance for saving the game stat
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "World Variables")
		UMySaveGame* SaveGameInstance;

	// Class where global variables are stored
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "World Variables")
	UWorldDataSingleton* DataInstance;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////******      MULTYTHREADING      ******////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// Backgrund thread
		FMeshExtractor* BackThread;

	// Queue for jobs to be runed on a background thread
		TQueue<FChunkData, EQueueMode::Mpsc> QueuedMeshs;

	// Queue for finished jobs that must be finished in the game thread
		TQueue<FSurfaceData, EQueueMode::Spsc> FinishedMeshs;

	// Queue for meshes that need to be updated in the next map load
		TCircularQueue<FIntVector> MeshsToUpdate = TCircularQueue<FIntVector>(512);

	// Queue for new Dynamic materials to be added
		TQueue<FIntVector, EQueueMode::Mpsc>RequestedMaterials;

	// Lock some sections when needed
		FCriticalSection CritialSection;

	// Time Handler for the timer that checks for finished jobs from background thread
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "World Variables")
		FTimerHandle AsynkThreadCountTH;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////*****     DEBUG SETTINGS    *****////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// Add chunk time
	UPROPERTY(BlueprintReadOnly, Category = "Debug Variables")
		FString AddTime = "0.000";

	// Remove chunk time
	UPROPERTY(BlueprintReadOnly, Category = "Debug Variables")
		FString RemoveTime = "0.000";

	// Average time needed for mesh extraction
	UPROPERTY(BlueprintReadOnly, Category = "Debug Variables")
		FString MeshExtractTime = "0.000";

	// Average time needed for mesh extraction (thread safe counter)
		FThreadSafeCounter64 AvTime;
		FThreadSafeCounter ExtractedMeshs;

	//
	UPROPERTY(EditAnywhere, Category = "Debug Variables")
		FString SDensitySize = "0";
	


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//#####################   FUNCTIONS   #####################################################################################
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	/**
	* Stores the player position */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Update Position", Keywords = "Update"), Category = Procedural)
		bool UpdatePosition();

	/**
	* Cheks if a chunk is in the render range */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Check Range", Keywords = "Range"), Category = Procedural)
		bool InRange(const int32& x, const int32& y, const FVector2D& Center, const int32& Range);

	/**
	* Cheks if the given position is inside the given range */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Check Local Range", Keywords = "Range"), Category = Procedural)
		bool InLocalRange(const int32& x, const int32& y, const int32& Range);

	/**
	* Generates the noise used to calculate the map */
	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "Generate Noise", Keywords = "Noise"), Category = Procedural)
		UUFNNoiseGenerator* CalculateNoise();
		virtual UUFNNoiseGenerator* CalculateNoise_Implementation();

	/**
	* Delete chunks */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Unload map", Keywords = "Unload"), Category = Procedural)
		void UnloadMap();

	/**
	* Add chunks */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Load Map", Keywords = "Load"), Category = Procedural)
		void LoadMap();

	/**
	* Returns the density ID of a voxel in a given location */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Voxel from world", Keywords = "block"), Category = Procedural)
		int32 GetVoxelFromWorld(const FVector& Location);

	/**
	* Sets the donsity ID of a voxel at a given location */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set voxel from world", Keywords = "block"), Category = Procedural)
		bool SetVoxelFromWorld(const FVector& Location, const int32& value);

	/** 
	* Gives the index for a given group of material ID's */
	UFUNCTION(BlueprintCallable)
		FString CalcMatIndex(int32 & d1, int32 & d2, int32 & d3);

	/** 
	* Gives a material based on face caracteristics */
	UFUNCTION(BlueprintCallable)
		bool GetMaterial(int32 & d1, int32 & d2, int32 & d3, FDynamicMaterial & mat);

	/** 
	* Returns a dynamic transition material with the specified matetial index */
	UFUNCTION(BlueprintCallable)
		FDynamicMaterial CreateDynMaterial(const int32 & d1,const int32 & d2,const int32 & d3);

	/** 
	* Timer function that finishes background thread calculations */
	UFUNCTION()
		void FinishJob();

	/** 
	* Shows chunk's limits */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Draw Chunk Limits", Keywords = "Chunk"), Category = Procedural)
		void DrawAllChunkLimits();

	TFunction<void()> TestFunction(TPromise<int32>);
	
};
