// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryBloques.h"
#include "BloqueMadera.h"
#include "BloqueLadrillo.h"
#include "BloqueBurbuja.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "Engine/World.h"

ABloque* FactoryBloques::CrearBloque(UWorld* Mundo, ETipoBloque Tipo, FVector Posicion, int ID)
{
	FActorSpawnParameters Params;
	Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;	
	ABloque* NuevoBloque = nullptr;
	switch (Tipo)
	{
	case ETipoBloque::Madera:
		NuevoBloque = Mundo->SpawnActor<ABloqueMadera>(Posicion, FRotator::ZeroRotator, Params);
		break;
	case ETipoBloque::Ladrillo:
		NuevoBloque = Mundo->SpawnActor<ABloqueLadrillo>(Posicion, FRotator::ZeroRotator, Params);
		break;
	case ETipoBloque::Burbuja:
		NuevoBloque = Mundo->SpawnActor<ABloqueBurbuja>(Posicion, FRotator::ZeroRotator, Params);
		break;
	case ETipoBloque::Acero:
		NuevoBloque = Mundo->SpawnActor<ABloqueAcero>(Posicion, FRotator::ZeroRotator, Params);
		break;
	case ETipoBloque::Concreto:
		NuevoBloque = Mundo->SpawnActor<ABloqueConcreto>(Posicion, FRotator::ZeroRotator, Params);
		break;
	default:
		break;
	}

	if (NuevoBloque)
	{
		NuevoBloque->IDBloque = ID; // Asignar el ID al bloque creado
	}
	return NuevoBloque;
}
/*FactoryBloques::FactoryBloques()
{
}

FactoryBloques::~FactoryBloques()
{
}*/
