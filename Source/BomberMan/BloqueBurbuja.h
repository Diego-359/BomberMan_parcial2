// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueBurbuja.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_API ABloqueBurbuja : public ABloque
{
	GENERATED_BODY()

public: 
	ABloqueBurbuja();

	virtual void ComportamientoIndividual() override;
	virtual void ComportamientoGrupal() override;
};
