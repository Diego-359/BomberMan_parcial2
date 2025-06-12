// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TiposBloque.h"

class ABloque;
/**
 * 
 */
class BOMBERMAN_API FactoryBloques
{
public:
	static ABloque* CrearBloque(UWorld* Mundo, ETipoBloque Tipo, FVector Posicion, int ID);
};
