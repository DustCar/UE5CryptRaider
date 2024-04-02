// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CryptRaiderPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class CRYPTRAIDER_API ACryptRaiderPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ACryptRaiderPlayerController();

protected:
	virtual void BeginPlay();
	
};
