// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBloqueComponente.h"
#include "GrupoBloques.generated.h"

UCLASS()
class BOMBERMAN_API AGrupoBloques : public AActor, public IIBloqueComponente
{
	GENERATED_BODY()
	
public:	
	AGrupoBloques();

	//virtual void Operacion() override;
	virtual void MostrarInformacion() override;

	void Agregar(IIBloqueComponente* Componente);

 

private:
	TArray<IIBloqueComponente*> Componentes;

};
