// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EndlessRunnerGameModeBase.generated.h"

class AFloorTile;
class UUserWidget;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCoinsCountChanged, int32, CoinsCount);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLivesCountChanged, int32, LivesCount);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLevelReset);
/**
 * 
 */
UCLASS()
class ENDLESSRUNNER_API AEndlessRunnerGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Delegates")
		FOnLevelReset OnLevelReset;

	UPROPERTY(VisibleInstanceOnly, Category = "RunTime")
		TArray<AFloorTile*> FloorTiles;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Delegates")
		FOnLivesCountChanged OnLivesCountChanged;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Delegates")
		FOnCoinsCountChanged OnCoinsCountChanged;

	UPROPERTY(VisibleInstanceOnly, Category = "Runtime")
		class UGameHud* GameHud;

	UPROPERTY(EditAnywhere, Category = "Config")
		TSubclassOf<UUserWidget> GameHudClass;

	UPROPERTY(VisibleAnywhere)
		int32 TotalCoins = 0;

	UPROPERTY(VisibleAnywhere)
		int32 NumberOfLives = 0;

	UPROPERTY(EditAnywhere)
		int32 MaxLives = 3;

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

	UFUNCTION(BlueprintCallable)
		void PlayerDied();

	UFUNCTION(BlueprintCallable)
		void RemoveTile(AFloorTile* Tile);
protected:
	virtual void BeginPlay() override;
};
