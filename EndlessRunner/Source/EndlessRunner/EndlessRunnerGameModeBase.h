// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EndlessRunnerGameModeBase.generated.h"

class AFloorTile;
/**
 * 
 */
UCLASS()
class ENDLESSRUNNER_API AEndlessRunnerGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Config")
		TSubclassOf<AFloorTile> FloorTileClass;

	UPROPERTY(EditAnywhere, Category = "Config")
		int32 NumInitialFloorTiles = 10;

	UPROPERTY(VisibleInstanceOnly, Category = "RunTime")
		FTransform NextSpawnPoint;

	UPROPERTY(VisibleInstanceOnly, Category = "RunTime")
		TArray<float> LaneSwitchValues;

	UFUNCTION(BlueprintCallable)
		void CreateinitialFloorTiles();

	UFUNCTION(BlueprintCallable)
		AFloorTile* AddFloorTile(const bool bSpawnItems);
	
protected:
	virtual void BeginPlay() override;
};
