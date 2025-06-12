// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBloqueComponente.h"
#include "BloqueIndividual.generated.h"

UCLASS()
class BOMBERMAN_API ABloqueIndividual : public AActor, public IIBloqueComponente
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloqueIndividual();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	//virtual void Operacion() override;
	virtual void MostrarInformacion() override;
private:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> TipoBloque;

};
