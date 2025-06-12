// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueAcero.h"
#include "UOBject/ConstructorHelpers.h"

ABloqueAcero::ABloqueAcero()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	Tipo = ETipoBloque::Concreto;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (MeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
	}

}
void ABloqueAcero::ComportamientoIndividual()
{
	UE_LOG(LogTemp, Warning, TEXT("Bloque de acero no se puede destruir"));
	
}
void ABloqueAcero::ComportamientoGrupal()
{
	UE_LOG(LogTemp, Warning, TEXT("Bloque de acero no se puede destruir con bomba"));
}