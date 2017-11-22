// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UFNBlueprintFunctionLibrary.h"
#include "FastNoise/FastNoise.h"
#include "SurfaceExtractor.h"
#include "OpenWorld_16.h"
#include "WorldManager.generated.h"

class AChunk;

UCLASS()
class OPENWORLD_16_API AWorldManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWorldManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


//########  Properties  ########//

	//Chunk to spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		TSubclassOf<AChunk> Chunk;

	//Sets the number of voxels per line that the chunk will contain.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		int32 ChunkSize = 10;

	//Size of the voxels in UUs.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		int32 VoxelSize = 100;

	//Used to calculte the chunks that will be generated
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		int32 RenderRange = 8;

	// Stores the materials for all the tipes of voxel
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		TArray<UMaterialInterface*> Voxels;

	// Can we use RuntimeMeshComponent plugin?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		bool UseRuntime = false;

	//Point used to calculate the rendered chunks
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "World Settings")
		FVector2D ChunkCenter;

	//Stores the generated chunks
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "World Settings")
		TMap<FVector2D, class AChunk*> World;

	/*Stores the voxels classes
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		TArray<TSubclassOf<UBlock>> Voxel_Classes;*/


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

	////Initialize all
	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Initialize World", Keywords = "Initialize"), Category = Procedural)
	//	void Initialize();

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
};
