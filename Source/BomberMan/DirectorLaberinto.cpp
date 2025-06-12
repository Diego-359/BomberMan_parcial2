// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorLaberinto.h"

void DirectorLaberinto::SetBuilder(IBuilderLaberinto* NuevoBuilder)
{
	Builder = NuevoBuilder;
}

void DirectorLaberinto::ConstruirLaberintoBasico(FString TipoBloque)
{
	if (!Builder)
	{
		UE_LOG(LogTemp, Error, TEXT("Director: Builder no está definido"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("Director: Construyendo laberinto con tipo %s"), *TipoBloque);

	Builder->Resetear();
	Builder->CrearBordes(TipoBloque);
	Builder->CrearMuros(TipoBloque);
	Builder->CrearPasillos(TipoBloque);


}
