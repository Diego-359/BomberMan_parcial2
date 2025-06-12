// Fill out your copyright notice in the Description page of Project Settings.


#include "FacadeLaberinto.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "EngineUtils.h" 


// Sets default values
AFacadeLaberinto::AFacadeLaberinto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacadeLaberinto::BeginPlay()
{
	Super::BeginPlay();
	Director = new DirectorLaberinto();

	// Encontrar el builder concreto en el mapa
	for (TActorIterator<ABuilderConcreto> It(GetWorld()); It; ++It)
	{
		Builder = *It;
		break;
	}

	if (Builder && Director)
	{
		Director->SetBuilder(Builder);
		Director->ConstruirLaberintoBasico("Concreto");
	}
}

  
