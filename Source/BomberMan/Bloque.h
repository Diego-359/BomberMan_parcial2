// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TiposBloque.h"
#include "Bloque.generated.h"

UCLASS()
class BOMBERMAN_API ABloque : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloque();

	UPROPERTY(EditAnywhere)
	ETipoBloque Tipo; // Type of the block

	int IDBloque; // Unique identifier for the block

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh; // Mesh component for the block

public: 

	virtual void ComportamientoIndividual();
	virtual void ComportamientoGrupal();
	/*
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
*/
};
