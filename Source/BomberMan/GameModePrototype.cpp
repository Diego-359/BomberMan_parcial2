// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModePrototype.h"
#include "ClonadorBloques.h"
#include "Engine/World.h"

void AGameModePrototype::BeginPlay()
{
	Super::BeginPlay();
	UWorld* mundo = GetWorld();
	if (mundo)
	{
		FVector posicion(0,0, 100); // Adjust the spawn location as needed
		mundo->SpawnActor<AClonadorBloques>(AClonadorBloques::StaticClass(), posicion, FRotator::ZeroRotator);
	}
}

