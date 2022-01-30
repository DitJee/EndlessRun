// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameHud.generated.h"

class AEndlessRunnerGameModeBase;
/**
 * 
 */
UCLASS()
class ENDLESSRUNNER_API UGameHud : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* CoinCount;

public:
	UFUNCTION(BlueprintCallable)
		void InitializeHUD(AEndlessRunnerGameModeBase* RunGameMode);
	
	UFUNCTION(BlueprintCallable)
		void SetCoinsCount(const int32 Count);
};
