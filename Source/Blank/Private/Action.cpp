// Fill out your copyright notice in the Description page of Project Settings.


#include "Action.h"

UWorld* UAction::GetWorld() const
{
	UActorComponent* OuterComponent = Cast<UActorComponent>(GetOuter());
	if (OuterComponent)
	{
		return OuterComponent->GetWorld();
	}

	return nullptr;
}