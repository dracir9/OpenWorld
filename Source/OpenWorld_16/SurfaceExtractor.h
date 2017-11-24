// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OpenWorld_16.h"

	FVector VertexInterp(float isolevel, FVector p1, FVector p2, float valp1, float valp2);

	uint16 VertexMat(unsigned char isolevel, uint16 p1, uint16 p2, unsigned char valp1, unsigned char valp2);

	int Polygonise(GRIDCELL grid, unsigned char isolevel, TArray<TRIANGLE>& triangles);

	int PolygoniseTri(GRIDCELL g, unsigned char iso, TArray<TRIANGLE>& triangles);