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
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'"));
	if (MaterialAsset.Succeeded())
	{
		Mesh->SetMaterial(0, MaterialAsset.Object);
	}
}
void ABloqueBurbuja::ComportamientoIndividual()
{
	UE_LOG(LogTemp, Warning, TEXT("BloqueBurbuja::ComportamientoIndividual() called."));
	SetActorLocation(GetActorLocation() + FVector(0, 0, 20)); //un auto volo sobre mi con su rasho laser
}

void ABloqueBurbuja::ComportamientoGrupal()
{
	UE_LOG(LogTemp, Warning, TEXT("BloqueBurbuja::ComportamientoGrupal() called."));
	SetActorLocation(GetActorLocation() + FVector(0, 0, 50));
	// Additional behavior when the bubble block is destroyed can be added here
}