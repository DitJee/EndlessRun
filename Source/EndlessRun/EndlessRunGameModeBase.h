// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "FloorTile.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EndlessRunGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ENDLESSRUN_API AEndlessRunGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, Category = "Config")
		TSubclassOf<AFloorTile> FloorTileClass;

	UPROPERTY(EditAnywhere,  Category = "Config")
		int32 NumInitialFloorTiles = 10;

	UPROPERTY(VisibleInstanceOnly, Category = "RunTine")
		FTransform NextSpawnPoint;

	UFUNCTION(BlueprintCallable)
		void CreateInitialFloorTiles();

	UFUNCTION(BlueprintCallable)
		void AddFloorTiles();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
