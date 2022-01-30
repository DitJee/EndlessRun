// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EndlessRunnerGameModeBase.generated.h"

class AFloorTile;
class UUserWidget;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCoinsCountChanged, int32, CoinsCount);

/**
 * 
 */
UCLASS()
class ENDLESSRUNNER_API AEndlessRunnerGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Delegates")
		FOnCoinsCountChanged OnCoinsCountChanged;

	UPROPERTY(VisibleInstanceOnly, Category = "Runtime")
		class UGameHud* GameHud;

	UPROPERTY(EditAnywhere, Category = "Config")
		TSubclassOf<UUserWidget> GameHudClass;

	UPROPERTY(VisibleAnywhere)
		int32 TotalCoins = 0;

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

	UFUNCTION(BlueprintCallable)
		void AddCoin();
protected:
	virtual void BeginPlay() override;
};
