// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameModeComposite.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_API AGameModeComposite : public AGameModeBase
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
};
