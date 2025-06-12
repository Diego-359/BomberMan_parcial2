// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BuilderLaberinto.h"

/**
 * 
 */
class BOMBERMAN_API DirectorLaberinto
{
	private:
		IBuilderLaberinto* Builder;
public:
	void SetBuilder(IBuilderLaberinto* nuevoBuilder);
	void ConstruirLaberintoBasico(FString TipoBloque);
	
	/*DirectorLaberinto();
	~DirectorLaberinto();*/
};
