// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DirectorLaberinto.h"
#include "BuilderConcreto.h"
#include "FacadeLaberinto.generated.h"

UCLASS()
class BOMBERMAN_API AFacadeLaberinto : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacadeLaberinto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	DirectorLaberinto* Director;
	ABuilderConcreto* Builder;

};
