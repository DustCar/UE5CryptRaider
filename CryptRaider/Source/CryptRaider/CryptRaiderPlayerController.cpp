// Fill out your copyright notice in the Description page of Project Settings.


#include "CryptRaiderPlayerController.h"

ACryptRaiderPlayerController::ACryptRaiderPlayerController()
{
	UE_LOG(LogTemp, Warning, TEXT("ACryptRaiderPlayerController::ACryptRaiderPlayerController()"))
}

void ACryptRaiderPlayerController::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("ACryptRaiderPlayerController::BeginPlay()"))
}
