// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "ProceduralMeshComponent.h"
#include "RuntimeMeshComponent.h"

//Logging during game startup
DECLARE_LOG_CATEGORY_EXTERN(Terrain_Renderer, Log, All);

//
DECLARE_LOG_CATEGORY_EXTERN(Mat_Loader, Log, All);


struct TRIANGLE {
	FVector p[3];
	int32 mat[3];

	TRIANGLE(FVector p1 = FVector(0,0,0), FVector p2, FVector p3, int32 m1 = 0, int32 m2 = 0, int32 m3 = 0) {
		p[0] = p1;
		p[1] = p2;
		p[2] = p3;

		mat[0] = m1;
		mat[1] = m2;
		mat[2] = m3;
	}
};

typedef struct {
	FVector p[8];
	unsigned char val[8];
	uint16 mat[8];
} GRIDCELL;