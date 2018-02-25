// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OpenWorld_16.generated.h"


//Logging during terrain rendering
DECLARE_LOG_CATEGORY_EXTERN(RenderTerrain, Log, All);

//
DECLARE_LOG_CATEGORY_EXTERN(Mat_Loader, Log, All);


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