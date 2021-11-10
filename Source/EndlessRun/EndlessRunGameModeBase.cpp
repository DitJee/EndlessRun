// Copyright Epic Games, Inc. All Rights Reserved.


#include "EndlessRunGameModeBase.h"

void AEndlessRunGameModeBase::CreateInitialFloorTiles()
{
	for (int i = 0; i < NumInitialFloorTiles; i++)
	{
		AddFloorTiles();
	}
}

void AEndlessRunGameModeBase::AddFloorTiles()
{
	UWorld* World = GetWorld();
	if (World) {
		AFloorTile* Tile = World->SpawnActor<AFloorTile>(FloorTileClass, NextSpawnPoint);

		if (Tile) {
			NextSpawnPoint = Tile->GetAttachTransform();
		}
	}
	
}

void AEndlessRunGameModeBase::BeginPlay()
{
	CreateInitialFloorTiles();
}
