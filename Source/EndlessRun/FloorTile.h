// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "FloorTile.generated.h"

class USceneComponent;
class UStaticMeshComponent;
class UBoxComponent;

UCLASS()
class ENDLESSRUN_API AFloorTile : public AActor
{
	GENERATED_BODY()
	
public:	

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Components")
		USceneComponent* SceneComponent;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Components")
		UStaticMeshComponent* FloorMesh;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Components")
		UArrowComponent* AttachPoint;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Components")
		UArrowComponent* CenterLane;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Components")
		UArrowComponent* RightLane;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Components")
		UArrowComponent* LeftLane;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Components")
		UBoxComponent* FloorTriggerBox;

	// Sets default values for this actor's properties
	AFloorTile();

	FORCEINLINE const FTransform& GetAttachTransform() const {
		return AttachPoint->GetComponentTransform();
	}

protected:

	UPROPERTY(VisibleInstanceOnly)
		class AEndLessRunGameModeBase* RunGameMode;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
