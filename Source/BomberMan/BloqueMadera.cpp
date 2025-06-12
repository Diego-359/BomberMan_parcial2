// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueMadera.h"
#include "UObject/ConstructorHelpers.h"


// Sets default values
ABloqueMadera::ABloqueMadera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	Tipo = ETipoBloque::Madera;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (MeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
	}
}
void ABloqueMadera::ComportamientoIndividual()
{
	UE_LOG(LogTemp, Warning, TEXT("Bloque de madera: se rompe fácil"));
}

void ABloqueMadera::ComportamientoGrupal()
{
	UE_LOG(LogTemp, Warning, TEXT("Grupo de madera: inflamable"));
}
// Called when the game starts or when spawned
/*void ABloqueMadera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloqueMadera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}*/

