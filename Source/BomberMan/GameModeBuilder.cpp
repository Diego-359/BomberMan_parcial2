// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModeBuilder.h"
#include "BuilderConcreto.h"
#include "DirectorLaberinto.h"
#include "Kismet/GameplayStatics.h"

void AGameModeBuilder::BeginPlay()
{
	Super::BeginPlay();

	UWorld* Mundo = GetWorld();
	if (!Mundo) return;
	
	ABuilderConcreto* Builder = Mundo->SpawnActor<ABuilderConcreto>(); //spawn world

	DirectorLaberinto Director; //creacion director
	Director.SetBuilder(Builder); //set builder
	Director.ConstruirLaberintoBasico("Concreto"); //construir laberinto

}

