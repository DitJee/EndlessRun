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
	UPROPERTY(EditAnywhere, Category = "Config")
		TSubclassOf<UUserWidget> PauseMenuWidgetClass;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* CoinCount;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* PauseBtn;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* LifeCount;

	UFUNCTION()
		void OnPauseClick();

	virtual void NativeConstruct() override;
public:
	UFUNCTION(BlueprintCallable)
		void InitializeHUD(AEndlessRunnerGameModeBase* RunGameMode);
	
	UFUNCTION(BlueprintCallable)
		void SetCoinsCount(const int32 Count);

	UFUNCTION(BlueprintCallable)
		void SetLifeCount(int32 Life);
};
