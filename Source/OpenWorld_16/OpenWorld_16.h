// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OpenWorld_16.generated.h"


//Logging during terrain rendering
DECLARE_LOG_CATEGORY_EXTERN(RenderTerrain, Log, All);

//Logging during material creation
DECLARE_LOG_CATEGORY_EXTERN(Mat_Loader, Log, All);

//Logging during terrain edition
DECLARE_LOG_CATEGORY_EXTERN(EditTerrain, Log, All);


struct  TRIANGLE
{
	FVector p[3];
	int32 mat[3];

	TRIANGLE() 
	{
		p[0] = FVector(0, 0, 0);
		p[1] = FVector(0, 0, 0);
		p[2] = FVector(0, 0, 0);

		mat[0] = 0;
		mat[1] = 0;
		mat[2] = 0;
	}

	TRIANGLE(int32 m1, int32 m2, int32 m3) 
	{
		p[0] = FVector(0, 0, 0);
		p[1] = FVector(0, 0, 0);
		p[2] = FVector(0, 0, 0);

		mat[0] = m1;
		mat[1] = m2;
		mat[2] = m3;
	}

	TRIANGLE(FVector p1, FVector p2, FVector p3, int32 m1 = 0, int32 m2 = 0, int32 m3 = 0) 
	{
		p[0] = p1;
		p[1] = p2;
		p[2] = p3;

		mat[0] = m1;
		mat[1] = m2;
		mat[2] = m3;
	}
};

USTRUCT()
struct FPoint
{
	GENERATED_BODY()

	UPROPERTY()
		uint8 val;

	UPROPERTY()
		uint16 mat;

	FPoint(uint8 value = 0, uint16 material = 0) : val(value), mat(material)
	{}
};

typedef struct 
{
	FVector p[8];
	unsigned char val[8];
	uint16 mat[8];
} GRIDCELL;

UENUM(BlueprintType)
enum class EFillState : uint8
{
	FS_Full		UMETA(DisplayName = "Full"),
	FS_Empty	UMETA(DisplayName = "Empty"),
	FS_Mixt		UMETA(DisplayName = "Mixed")
};

UENUM(BlueprintType)
enum class EMapType : uint8
{
	MT_Laminated	UMETA(DisplayName = "Laminated"),
	MT_Ramp			UMETA(DisplayName = "Ramp")
};

USTRUCT()
struct FDensity
{
	GENERATED_BODY()

	UPROPERTY()
		TArray<uint16> Voxel;

	UPROPERTY()
		EFillState FillState = EFillState::FS_Empty;
};

USTRUCT(BlueprintType)
struct FDynamicMaterial
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
		UMaterialInstance* Mat;

	UPROPERTY(EditAnywhere)
		int32 index;
};

USTRUCT(BlueprintType)
struct FVoxelS
{
	GENERATED_BODY()

	/** Regular material instance used when there is no material blend. It reduces the amount of
	Dynamic meterial Inatances and increases performance (It has a bit lower shader instructions too). */
	UPROPERTY(EditDefaultsOnly)
		UMaterialInstance* Mat;

	/** Base texture of the material, used in dynamic material when blending materials */
	UPROPERTY(EditDefaultsOnly)
		UTexture* BaseColor;

	/** Normal map texture of the material, used in dynamic material when blending materials */
	UPROPERTY(EditDefaultsOnly)
		UTexture* NormalMap;

};

USTRUCT()
struct FChunkData
{
	GENERATED_BODY()

		/** Chunk density data pointer */
		TArray<FDensity>* Density = nullptr;

	/** Chunk Position */
	UPROPERTY()
		FVector2D Position;
};
