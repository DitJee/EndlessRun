// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHud.h"
#include "Components/TextBlock.h"
#include <EndlessRunner/EndlessRunnerGameModeBase.h>

void UGameHud::InitializeHUD(AEndlessRunnerGameModeBase* RunGameMode)
{
	if (RunGameMode)
	{
		CoinCount->SetText(FText::AsNumber(0));

		RunGameMode->OnCoinsCountChanged.AddDynamic(this, &UGameHud::SetCoinsCount);
	}
}


void UGameHud::SetCoinsCount(const int32 Count)
{
	CoinCount->SetText(FText::AsNumber(Count));
}