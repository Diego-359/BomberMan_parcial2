// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderLaberinto.h"
#include "BuilderConcreto.generated.h"

UCLASS()
class BOMBERMAN_API ABuilderConcreto : public AActor, public IBuilderLaberinto
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilderConcreto();

	virtual void CrearBordes(FString TipoBloque) override;
	virtual void CrearMuros(FString TipoBloque) override;
	virtual void CrearPasillos(FString TipoBloque) override;
	virtual void Resetear() override;

	int filas = 15;
	int columnas = 15;

private:
	UWorld* Mundo;
	TArray<AActor*> BloquesCreados;
	/*
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	*/
};
