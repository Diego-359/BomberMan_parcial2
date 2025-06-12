// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueConcreto.h"
#include "UObject/ConstructorHelpers.h"

ABloqueConcreto::ABloqueConcreto()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	Tipo = ETipoBloque::Concreto;
	// Load the static mesh for the concrete block
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (MeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
	}
}

void ABloqueConcreto::ComportamientoIndividual()
{
	UE_LOG(LogTemp, Warning, TEXT("ComportamientoIndividual de BloqueConcreto llamado."));
	// Additional initialization if needed
}
void ABloqueConcreto::ComportamientoGrupal()
{
	UE_LOG(LogTemp, Warning, TEXT("ComportamientoColision de BloqueConcreto llamado."));
	// Additional collision behavior if needed
}