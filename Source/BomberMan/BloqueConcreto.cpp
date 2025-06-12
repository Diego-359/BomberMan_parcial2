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
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_CobbleStone_Smooth.M_CobbleStone_Smooth'"));
	if (MaterialAsset.Succeeded())
	{
		Mesh->SetMaterial(0, MaterialAsset.Object);
	}
}

void ABloqueConcreto::ComportamientoIndividual()
{
	UE_LOG(LogTemp, Warning, TEXT("ComportamientoIndividual de BloqueConcreto llamado."));
	SetActorScale3D(FVector(1.0f, 1.0f, 1.2f)); // more altura
	// Additional initialization if needed
}
void ABloqueConcreto::ComportamientoGrupal()
{
	UE_LOG(LogTemp, Warning, TEXT("ComportamientoColision de BloqueConcreto llamado."));
	SetActorLocation(GetActorLocation() - FVector(0, 0, 10)); 
	// Additional collision behavior if needed
}