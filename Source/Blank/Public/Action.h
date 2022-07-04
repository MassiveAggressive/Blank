// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Action.generated.h"

class UWorld;

UCLASS(Blueprintable)
class BLANK_API UAction : public UObject
{
	GENERATED_BODY()

public:
	UWorld* GetWorld() const override;
};
