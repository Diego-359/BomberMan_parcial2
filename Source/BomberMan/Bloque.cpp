// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque.h"

// Sets default values
ABloque::ABloque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;
}

void ABloque::ComportamientoIndividual()
{
	UE_LOG(LogTemp, Warning, TEXT("Bloque de madera: se rompe fácil!"));
}

void ABloque::ComportamientoGrupal()
{
	UE_LOG(LogTemp, Warning, TEXT("Bloque de madera: inflamable!"));
}

// Called when the game starts or when spawned
/*void ABloque::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
*/
//LAB3
ABloque* ABloque::Clonar(FVector nuevaPos, UWorld* mundo)
{
	FActorSpawnParameters parametros;
	ABloque* nuevoBloque = mundo->SpawnActor<ABloque>(GetClass(), nuevaPos, FRotator::ZeroRotator, parametros);
	
	if (nuevoBloque)
	{
		nuevoBloque->SetActorScale3D(FVector(6.0f, 6.0f, 6.0f));
	}
	return nuevoBloque;
}

