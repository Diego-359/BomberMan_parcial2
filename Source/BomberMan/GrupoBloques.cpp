// Fill out your copyright notice in the Description page of Project Settings.


#include "GrupoBloques.h"

// Sets default values
AGrupoBloques::AGrupoBloques()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

/*void AGrupoBloques::Operacion()
{
	UE_LOG(LogTemp, Warning, TEXT("Grupo ejecutando operación compuesta"));

	for (IIBloqueComponente* comp : Componentes)
	{
		if (comp)
			comp->Operacion();
	}
}*/

void AGrupoBloques::Agregar(IIBloqueComponente* Componente)
{
	Componentes.Add(Componente);
}

void AGrupoBloques::MostrarInformacion()
{
	for (IIBloqueComponente* Bloque : Componentes)
	{
		if (Bloque)
		{
			Bloque->MostrarInformacion();
		}
		
	}
}