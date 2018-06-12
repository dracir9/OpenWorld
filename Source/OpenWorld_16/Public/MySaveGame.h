// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "OpenWorld_16.h"
#include "MySaveGame.generated.h"

/**
 * 
 */
UCLASS()
class OPENWORLD_16_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = WorldData)
		TMap<FVector2D, FChunkDensity> WorldData;
	
	UMySaveGame();
};
