// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderConcreto.h"
#include "BloqueConcreto.h"
#include "BloqueAcero.h"
#include "BloqueLadrillo.h"
#include "BloqueBurbuja.h"
#include "BloqueMadera.h"
#include "Engine/World.h"

// Sets default values
ABuilderConcreto::ABuilderConcreto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mundo = GetWorld();
}
void ABuilderConcreto::CrearBordes(FString TipoBloque)
{
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			if (i == 0 || j == 0 || i == filas-1 || j == columnas-1) // Bordes del mapa
			{
				FVector Pos = FVector(i * 100, j * 100, 100); // Posición de los bloques
				auto Bloque = Mundo->SpawnActor<ABloqueConcreto>(Pos, FRotator::ZeroRotator); // Crear el bloque concreto
				BloquesCreados.Add(Bloque); // Añadir el bloque a la lista de bloques creados
			}
		}
	}
}
void ABuilderConcreto::CrearMuros(FString TipoBloque)
{

	for (int i = 2; i < filas-2; i += 2)
	{
		for (int j = 1; j < columnas - 2; j+=2)
		{
			FVector Pos = FVector(i * 100, j * 100, 100); // Posición de los bloques
			//auto Bloque = Mundo->SpawnActor<ABloqueConcreto>(Pos, FRotator::ZeroRotator); // Crear el bloque concreto
			//BloquesCreados.Add(Bloque); // Añadir el bloque a la lista de bloques creados
			int tipo = FMath::RandRange(0, 2); // Generar un número aleatorio entre 0 y 50000

			AActor* Bloque = nullptr; // Inicializar el puntero del bloque concreto
			switch (tipo)
			{
				case 0: // Bloque de tipo 0
				Bloque = Mundo->SpawnActor<ABloqueAcero>(Pos, FRotator::ZeroRotator); // Crear el bloque concreto
				break;
				case 1: // Bloque de tipo 1
				Bloque = Mundo->SpawnActor<ABloqueLadrillo>(Pos, FRotator::ZeroRotator); // Crear el bloque concreto
				case 2: // Bloque de tipo 2
				Bloque = Mundo->SpawnActor<ABloqueBurbuja>(Pos, FRotator::ZeroRotator); // Crear el bloque concreto
				break;
			}
			if (Bloque) BloquesCreados.Add(Bloque); // Añadir el bloque a la lista de bloques creados	
		}
	}
}
void ABuilderConcreto::CrearPasillos(FString TipoBloque)
{
	for (int i = 1; i < filas; i ++)
	{
		for (int j = 1; j < columnas - 1; j ++)
		{
			if ((i % 2 == 1 || j % 2 == 1) && FMath::RandRange(0, 100) < 40) //PROB CREACION
			{
				FVector Pos = FVector(i * 100, j * 100, 100); // Posición de los bloques
				auto Bloque = Mundo->SpawnActor<ABloqueMadera>(Pos, FRotator::ZeroRotator); // Crear el bloque concreto
				if (Bloque) BloquesCreados.Add(Bloque); // Añadir el bloque a la lista de bloques creados
			}
	
		}
	}
}
void ABuilderConcreto::Resetear()
{
	for (AActor* bloque : BloquesCreados)
	{
		if (bloque && !bloque->IsPendingKill())
			bloque->Destroy(); // Destruir los bloques creados
	}
	BloquesCreados.Empty(); // Limpiar la lista de bloques creados
}
/*
// Called when the game starts or when spawned
void ABuilderConcreto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABuilderConcreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
*/

