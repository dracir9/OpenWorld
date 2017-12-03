// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UFNBlueprintFunctionLibrary.h"
#include "FastNoise/FastNoise.h"
//#include "SurfaceExtractor.h"
#include "OpenWorld_16.h"
#include "WorldGameMode.generated.h"


class AChunk;

USTRUCT()
struct FMesh {
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
struct FDynamicMaterial {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
		UMaterialInstanceDynamic* Mat;

	UPROPERTY(EditAnywhere)
		int32 index;
};

USTRUCT()
struct FVoxelTipes {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
		UMaterialInstance* Mat;

	UPROPERTY(EditAnywhere)
		UTexture* BaseColor;

	UPROPERTY(EditAnywhere)
		UTexture* NormalMap;
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

public:
	// Sets default values for this actor's properties
	AWorldGameMode();

	//Called every frame
	virtual void Tick(float DeltaTime) override;


//########  Properties  ########//

	//Chunk to spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		TSubclassOf<AChunk> Chunk;

	// Stores the base instance for transition between materials
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		UMaterialInterface* TransitionMat;

	//Sets the number of voxels per line that the chunk will contain.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		int32 ChunkSize = 10;

	//Size of the voxels in UUs.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		int32 VoxelSize = 100;

	//Used to calculte the chunks that will be generated
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		int32 RenderRange = 8;

	// Can we use RuntimeMeshComponent plugin?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		bool UseRuntime = false;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////*****     WORLD VARIABLES    *****///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// Stores the materials for all the tipes of voxel
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Varaibles")
		TArray<FVoxelTipes> Voxels;

	// Stores dynamic material instances
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Variables")
		TMap<FString, FDynamicMaterial> DynamicMatChache;

	//Point used to calculate the rendered chunks
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "World Variables")
		FVector2D ChunkCenter;

	//Stores the generated chunks
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "World Variables")
		TMap<FVector2D, class AChunk*> World;

	UPROPERTY()
		FTimerHandle CountdownTimerHandle;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////*****     DEBUG SETTINGS    *****////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Debug Variables")
		int32 iterations = 1;

	// Global loop count
	UPROPERTY(BlueprintReadOnly, Category = "Debug Variables")
		int32 count = 0;

	// Add chunk time
	UPROPERTY(BlueprintReadOnly, Category = "Debug Variables")
		float time;

	// Remove chunk time
	UPROPERTY(BlueprintReadOnly, Category = "Debug Variables")
		float time1;

	//
	UPROPERTY(BlueprintReadOnly, Category = "Debug Variables")
		FString SMeshSizeMax;

	//
	UPROPERTY(BlueprintReadOnly, Category = "Debug Variables")
		FString SMeshSizeMin = "999999";

	//
	UPROPERTY(BlueprintReadOnly, Category = "Debug Variables")
		FString SMeshSizeAll;
	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////*****     NOISE SETTINGS    *****////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
		UUFNNoiseGenerator* Noise;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
		ENoiseType NoiseType = ENoiseType::Simplex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
		ECellularDistanceFunction CellularDistanceFunction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
		ECellularReturnType CellularReturnType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
		EFractalType FractalType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
		EInterp Interpolation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
		int32 seed = 1234;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
		int32 Octaves = 4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
		float Frequency = 0.001f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
		float Lacunarity = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
		float FractialGain = 0.5f;

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//#####################   FUNCTIONS   #####################################################################################
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Stores the player position
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Update Position", Keywords = "Update"), Category = Procedural)
		bool UpdatePosition();

	//Cheks if a chunk is in the render range
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Check Range", Keywords = "Range"), Category = Procedural)
		bool InRange(int32 x, int32 y, FVector2D Center, int32 Range);

	//Delete chunks
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Unload map", Keywords = "Unload"), Category = Procedural)
		void UnloadMap();

	//Add chunks
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Load Map", Keywords = "Load"), Category = Procedural)
		void LoadMap();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Voxel from world", Keywords = "block"), Category = Procedural)
		int32 GetVoxelFromWorld(FVector Location);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set voxel from world", Keywords = "block"), Category = Procedural)
		bool SetVoxelFromWorld(FVector Location, int32 value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add triangles"), Category = "Procedural")
		void AddTriangles(TArray<FVector> &Vertex, TArray<int32> &Triangles, TArray<uint8> values);

	/** Gives the index for a given group of material ID's*/
	UFUNCTION(BlueprintCallable)
		FString CalcMatIndex(int32 &id1, int32 &id2, int32 &id3);

	/** Returns a dynamic transition material with the specified matetial index*/
	UFUNCTION(BlueprintCallable)
		FDynamicMaterial GetDynMat(int32 &id1, int32 &id2, int32 &id3);
	
};
