// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"

// Sets default values for this component's properties
UTriggerComponent::UTriggerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();

	if (Door == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("No Door has been set!"));
		return;
	}

	UMover* NewMover = Door->FindComponentByClass<UMover>();
	if (NewMover == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Door does not have a Mover component!"));
		return;
	}

	Mover = NewMover;
}

// Called every frame
void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor* AccActor = GetAcceptableActor();
	if (AccActor == nullptr)
	{
		Mover->SetShouldMove(false);
	}
	else
	{
		UPrimitiveComponent* Component = Cast<UPrimitiveComponent>(AccActor->GetRootComponent());
		if (Component)
		{
			Component->SetSimulatePhysics(false);
		}
		AccActor->AttachToComponent(this, FAttachmentTransformRules::KeepWorldTransform);
		Mover->SetShouldMove(true);
	}
	
}

AActor* UTriggerComponent::GetAcceptableActor() const
{
	TArray< AActor* > Actors;
	GetOverlappingActors(Actors);

	for (AActor* Actor : Actors)
	{
		bool HasCorrectTag = Actor->ActorHasTag(DoorTriggerTag);
		bool IsGrabbed = Actor->ActorHasTag("Grabbed");
		if (HasCorrectTag && !IsGrabbed)
		{
			return Actor;
		}
	}

	return nullptr;
}