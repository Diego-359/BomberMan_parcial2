// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BuilderLaberinto.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBuilderLaberinto : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN_API IBuilderLaberinto
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void CrearBordes(FString TipoBloque) = 0;
	virtual void CrearMuros(FString TipoBloque) = 0;
	virtual void CrearPasillos(FString TipoBloque) = 0;
	virtual void Resetear() = 0;
};
