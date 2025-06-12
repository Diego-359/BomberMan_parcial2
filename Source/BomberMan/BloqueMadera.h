// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "IBloqueComponente.h"
#include "BloqueMadera.generated.h"


UCLASS()
class BOMBERMAN_API ABloqueMadera : public ABloque, public IIBloqueComponente
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloqueMadera();

	virtual void ComportamientoIndividual() override;
	virtual void ComportamientoGrupal() override;

public:
	virtual void MostrarInformacion() override;
};
