// Fill out your copyright notice in the Description page of Project Settings.



#include "FloorTile.h"
#include "EndlessRunGameModeBase.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFloorTile::AFloorTile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = SceneComponent;

	FloorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FloorMesh"));
	FloorMesh->SetupAttachment(SceneComponent);

	AttachPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("AttachPoint"));
	CenterLane  = CreateDefaultSubobject<UArrowComponent>(TEXT("CenterLane"));
	RightLane   = CreateDefaultSubobject<UArrowComponent>(TEXT("RightLane"));
	LeftLane    = CreateDefaultSubobject<UArrowComponent>(TEXT("LeftLane"));
	AttachPoint->SetupAttachment(SceneComponent);
	CenterLane->SetupAttachment(SceneComponent);
	RightLane->SetupAttachment(SceneComponent);
	LeftLane->SetupAttachment(SceneComponent);

	FloorTriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("FloorTriggerBox"));
	FloorTriggerBox->SetupAttachment(SceneComponent);
	FloorTriggerBox->SetBoxExtent(FVector(32.f, 500.f, 200.f));
	FloorTriggerBox->SetCollisionProfileName(TEXT("OverLapOnlyPawn"));



}

// Called when the game starts or when spawned
void AFloorTile::BeginPlay()
{
	Super::BeginPlay();
	
	RunGameMode = Cast<AEndlessRunGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
}

// Called every frame
void AFloorTile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

