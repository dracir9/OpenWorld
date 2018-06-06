// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OpenWorld_16.h"
#include "UnrealFastNoisePlugin.h"
#include "MeshExtractor.generated.h"

/**
 * 
 */
DECLARE_LOG_CATEGORY_EXTERN(Mesh_Extractor, Log, All);

class AWorldGameMode;
class UUFNNoiseGenerator;
enum class EFillState : uint8;
struct FMesh;
struct FDensity;

USTRUCT()
struct FPoints
{
	GENERATED_BODY()

	UPROPERTY()
		TArray<FPoint> points;

	UPROPERTY()
		EFillState FillState;
};

/// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
///////////// MULTI-THREADING //////////////
/// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
class FMeshExtractor : public FRunnable
{
	/** Singleton instance, can access the thread any time via static accessor, if it is active! */
	static  FMeshExtractor* Runnable;

	/** Thread to run the worker FRunnable on */
	FRunnableThread* Thread;

	/** Total size of the chunks passed to mesh extractor thread */
	int32 ChunkSize;

	/** Size of the grid and its voxels */
	int32 VoxelSize;

	/** Max terraing height */
	int32 MaxHeight;

	/** Array to temporally store Chunk density data
	* Declared here to avoid creation of this heavy variable in a local scope
	* and avoid allocating and deallocating memory constantly ???????? */
	TArray<FDensity> ChunkDensity;

	/** Total Points. Array to temporally store chunk's point cloud*/
	TArray<FPoints> Section;

	/** Pointer to the noise object used to calculate terrain */
	UUFNNoiseGenerator* Noise;

	/** The Game Mode */
	AWorldGameMode* GameMode;

	/** Stop this thread? Uses Thread Safe Counter */
	FThreadSafeCounter StopTaskCounter;

	/** The surface mesh calculation*/
	void ExtractMesh(TArray<FDensity>* TheArray, FVector2D Position);

	/** Returns point data in the given location */
	FORCEINLINE FPoint GetPoint(const FVector& pos);

	/** Returns point data when we are looking at full chunks (Only perimeter voxels are stored in memory)*/
	int32 PerimeterIndex(const int32& x, const int32& y, const int32& z);

public:

	//Done?
	bool IsFinished = false;

	//Constructor / Destructor
	FMeshExtractor(AWorldGameMode* IN_GM, int32 size, int32 Voxelsize, int32 height, UUFNNoiseGenerator* noise);
	virtual ~FMeshExtractor();


	// Begin FRunnable interface.
	virtual bool Init();
	virtual uint32 Run();
	virtual void Stop();
	// End FRunnable interface

	/** Makes sure this thread has stopped properly */
	void EnsureCompletion();



	//~~~ Starting and Stopping Thread ~~~



	/**
	Start the thread and the worker from static (easy access)!
	This code ensures only 1 Mesh Extractor thread will be able to run at a time.
	This function returns a handle to the newly started instance.
	*/
	static FMeshExtractor* JoyInit(AWorldGameMode* IN_GM, int32 Size, int32 VoxelSize, int32 Height, UUFNNoiseGenerator* Noise);


	/** Helper function to calculate normal vector of a plane.*/
	FVector CalcNormals(const FVector& p1, const FVector& p2, const FVector& p3);

	/** Shuts down the thread. Static so it can easily be called from outside the thread context */
	static void Shutdown();

	static bool IsThreadFinished();

};
