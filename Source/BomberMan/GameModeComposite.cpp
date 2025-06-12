// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModeComposite.h"
#include "GrupoBloques.h"
#include "BloqueIndividual.h"
#include "BloqueMadera.h"
#include "BloqueLadrillo.h"
#include "Engine/World.h"

void AGameModeComposite::BeginPlay()
{
    Super::BeginPlay();
    UWorld* World = GetWorld();

	AGrupoBloques* GrupoPrincipal = World->SpawnActor<AGrupoBloques>(FVector(0, 0, 100), FRotator::ZeroRotator);

	// Crear primer grupo
	AGrupoBloques* SubGrupo1 = World->SpawnActor<AGrupoBloques>(FVector(0, 0, 100), FRotator::ZeroRotator);
	for (int i = 0; i < 3; i++)
	{
		ABloqueMadera* Bloque = World->SpawnActor<ABloqueMadera>(FVector(100 * i, 0, 100), FRotator::ZeroRotator);
		SubGrupo1->Agregar(Bloque);
	}

	// Crear segundo grupo
	AGrupoBloques* SubGrupo2 = World->SpawnActor<AGrupoBloques>(FVector(0, 200, 100), FRotator::ZeroRotator);
	for (int i = 0; i < 2; i++)
	{
		ABloqueLadrillo* Bloque = World->SpawnActor<ABloqueLadrillo>(FVector(100 * i, 200, 100), FRotator::ZeroRotator);
		SubGrupo2->Agregar(Bloque);
	}

	// Agregar los subgrupos al grupo principal
	GrupoPrincipal->Agregar(SubGrupo1);
	GrupoPrincipal->Agregar(SubGrupo2);

	// Mostrar toda la estructura (esto clona o muestra info)
	GrupoPrincipal->MostrarInformacion();

	/*AGrupoBloques* GrupoPrincipal = Mundo->SpawnActor<AGrupoBloques>(FVector(0, 0, 100), FRotator::ZeroRotator);

	// Crear primer grupo
	AGrupoBloques* SubGrupo1 = Mundo->SpawnActor<AGrupoBloques>(FVector(0, 0, 100), FRotator::ZeroRotator);
	for (int i = 0; i < 3; i++)
	{
		ABloqueMadera* Bloque = Mundo->SpawnActor<ABloqueMadera>(FVector(100 * i, 0, 100), FRotator::ZeroRotator);
		SubGrupo1->Agregar(Bloque);
	}

	// Crear segundo grupo
	AGrupoBloques* SubGrupo2 = Mundo->SpawnActor<AGrupoBloques>(FVector(0, 200, 100), FRotator::ZeroRotator);
	for (int i = 0; i < 2; i++)
	{
		ABloqueLadrillo* Bloque = Mundo->SpawnActor<ABloqueLadrillo>(FVector(100 * i, 200, 100), FRotator::ZeroRotator);
		SubGrupo2->Agregar(Bloque);
	}

	// Agregar los subgrupos al grupo principal
	GrupoPrincipal->Agregar(SubGrupo1);
	GrupoPrincipal->Agregar(SubGrupo2);

	// Mostrar toda la estructura (esto clona o muestra info)
	GrupoPrincipal->MostrarInformacion();*/
  

	// Crear grupo
	/*AGrupoBloques* Grupo = World->SpawnActor<AGrupoBloques>();
	
	// Crear algunos bloques individuales
	FVector Pos = FVector(0, 0, 100);
	ABloqueMadera* Bloque1 = World->SpawnActor<ABloqueMadera>(Pos, FRotator::ZeroRotator);
	ABloqueLadrillo* Bloque2 = World->SpawnActor<ABloqueLadrillo>(Pos + FVector(200, 0, 0), FRotator::ZeroRotator);

	// Agregar al grupo
	Grupo->Agregar(Bloque1);
	Grupo->Agregar(Bloque2);

	// Ejecutar comportamiento grupal
	Grupo->Operacion();*/
}