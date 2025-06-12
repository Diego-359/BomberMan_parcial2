// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueAcero.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_API ABloqueAcero : public ABloque
{
	GENERATED_BODY()
public:
		// Sets default values for this actor's properties
	ABloqueAcero();

	virtual void ComportamientoIndividual() override;
	virtual void ComportamientoGrupal() override;
};
