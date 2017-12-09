// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Voxel.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class OPENWORLD_16_API UVoxel : public UObject
{
	GENERATED_BODY()

public:
	
	int32 ID;
	
	virtual bool IsSolid(const int32& x, const int32& y, const int32& z) const 
	{
		return true;
	}
};
