// Fill out your copyright notice in the Description page of Project Settings.


#include "PauseMenu.h"
#include "Components/Button.h"
#include <EndlessRunner/EndlessRunnerGameModeBase.h>
#include "Blueprint/WidgetBlueprintLibrary.h"
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>

void UPauseMenu::NativeConstruct()
{

	Super::NativeConstruct();

	if (ContinueBtn)
	{
		ContinueBtn->OnClicked.AddDynamic(this, &UPauseMenu::OnContinueClick);
	}

	if (RestartBtn)
	{
		RestartBtn->OnClicked.AddDynamic(this, &UPauseMenu::OnRestartClick);
	}

	UWidgetBlueprintLibrary::SetInputMode_GameAndUI(UGameplayStatics::GetPlayerController(GetWorld(), 0), this);

}

void UPauseMenu::OnContinueClick()
{
	UGameplayStatics::SetGamePaused(GetWorld(), false);
	this->RemoveFromViewport();
}

void UPauseMenu::OnRestartClick()
{
	UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), TEXT("RestartLevel"));
}