// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueIndividual.h"

// Sets default values
ABloqueIndividual::ABloqueIndividual()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;
}

// Called when the game starts or when spawned
void ABloqueIndividual::BeginPlay()
{
	Super::BeginPlay();
	
}


void ABloqueIndividual::MostrarInformacion()
{
	UE_LOG(LogTemp, Warning, TEXT("Error de formato"));
}
