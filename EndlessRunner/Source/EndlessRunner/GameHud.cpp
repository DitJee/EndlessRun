// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHud.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include <EndlessRunner/EndlessRunnerGameModeBase.h>
#include "Blueprint/WidgetBlueprintLibrary.h"
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>

void UGameHud::NativeConstruct()
{
	Super::NativeConstruct();

	if (PauseBtn)
	{
		PauseBtn->OnClicked.AddDynamic(this, &UGameHud::OnPauseClick);
	}

	UWidgetBlueprintLibrary::SetInputMode_GameAndUI(UGameplayStatics::GetPlayerController(GetWorld(), 0), this);
}

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

void UGameHud::OnPauseClick()
{
	

	if (PauseMenuWidgetClass)
	{
		UGameplayStatics::SetGamePaused(GetWorld(), true);

		UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), PauseMenuWidgetClass);

		if (Widget)
		{
			Widget->AddToViewport();
		}
	}
}

