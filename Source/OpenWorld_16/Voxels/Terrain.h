// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Voxels/Voxel.h"
#include "Terrain.generated.h"

/**
 * 
 */
UCLASS()
class OPENWORLD_16_API UVoxelTerrain : public UVoxel
{
	GENERATED_BODY()

public:
	uint64 fillstate;

	virtual bool IsSolid(const int32& x, const int32& y, const int32& z) const override
	{
		if (fillstate & (uint64)(FMath::Pow(2, x + y * 4 + z * 16))) return true;
		return false;
	}
};
