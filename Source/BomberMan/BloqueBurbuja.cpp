// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueBurbuja.h"
#include "UObject/ConstructorHelpers.h"

ABloqueBurbuja::ABloqueBurbuja()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	Tipo = ETipoBloque::Burbuja;
	// Load the static mesh for the bubble block
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (MeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
	}
}
void ABloqueBurbuja::ComportamientoIndividual()
{
	UE_LOG(LogTemp, Warning, TEXT("BloqueBurbuja::ComportamientoIndividual() called."));
}
void ABloqueBurbuja::ComportamientoGrupal()
{
	UE_LOG(LogTemp, Warning, TEXT("BloqueBurbuja::ComportamientoGrupal() called."));
	// Additional behavior when the bubble block is destroyed can be added here
}