// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueConcreto.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_API ABloqueConcreto : public ABloque
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABloqueConcreto();

	virtual void ComportamientoIndividual() override;
	virtual void ComportamientoGrupal() override;
};
