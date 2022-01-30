// Copyright Epic Games, Inc. All Rights Reserved.


#include "EndlessRunnerGameModeBase.h"
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>
#include "FloorTile.h"
#include "GameHud.h"

void AEndlessRunnerGameModeBase::BeginPlay()
{
	NumberOfLives = MaxLives;

	UGameplayStatics::GetPlayerController(GetWorld(), 0)->bShowMouseCursor = true;

	GameHud = Cast<UGameHud>(CreateWidget(GetWorld(), GameHudClass));
	check(GameHud);

	GameHud->InitializeHUD(this);

	GameHud->AddToViewport();
	CreateinitialFloorTiles();
}


void AEndlessRunnerGameModeBase::CreateinitialFloorTiles()
{
	AFloorTile* Tile = AddFloorTile(false);

	if (Tile)
	{
		LaneSwitchValues.Add(Tile->LeftLane->GetComponentLocation().Y);
		LaneSwitchValues.Add(Tile->CenterLane->GetComponentLocation().Y);
		LaneSwitchValues.Add(Tile->RightLane->GetComponentLocation().Y);
	}

	/*for (float LaneSwitchValue: LaneSwitchValues)
	{
		UE_LOG(LogTemp, Warning, TEXT("Lane Value: %f"), LaneSwitchValue);
	}*/
	AddFloorTile(false);
	AddFloorTile(false);

	for (int32 i = 0; i < NumInitialFloorTiles; i++)
	{
		AddFloorTile(true);
	}
}

AFloorTile* AEndlessRunnerGameModeBase::AddFloorTile(const bool bSpawnItems)
{
	UWorld* World = GetWorld();
	if (World)
	{
		AFloorTile* Tile = World->SpawnActor<AFloorTile>(FloorTileClass, NextSpawnPoint);

		if (Tile)
		{
			FloorTiles.Add(Tile);

			if (bSpawnItems)
			{
				Tile->SpawnItems();
			}
			NextSpawnPoint = Tile->GetAttachTransform();
		}
		return Tile;
	}

	return nullptr;

}

void AEndlessRunnerGameModeBase::AddCoin()
{
	TotalCoins += 1;

	OnCoinsCountChanged.Broadcast(TotalCoins);

}


void AEndlessRunnerGameModeBase::PlayerDied()
{
	
	NumberOfLives -= 1;
	
	OnLivesCountChanged.Broadcast(NumberOfLives);

	if (NumberOfLives > 0)
	{
		// iterate over floortiles and call destroy floortiles
		for (auto* Tile: FloorTiles)
		{
			Tile->DestroyFloorTile();
		}

		// Empty the array
		FloorTiles.Empty();

		// set the next spawn point to initial value
		NextSpawnPoint = FTransform();

		// create initial floor tiles
		CreateinitialFloorTiles();

		// Broadcast level restart
		OnLevelReset.Broadcast();
	}
	else
	{
		// GameOver
	}
}

void AEndlessRunnerGameModeBase::RemoveTile(AFloorTile* Tile)
{
	FloorTiles.Remove(Tile);
}