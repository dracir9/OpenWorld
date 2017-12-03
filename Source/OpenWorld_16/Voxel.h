// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Voxel.generated.h"

/**
 * 
 */
UCLASS()
class OPENWORLD_16_API UVoxel : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
		int64 fillstate;
	
};
