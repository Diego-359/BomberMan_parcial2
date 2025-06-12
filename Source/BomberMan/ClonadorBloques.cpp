// Fill out your copyright notice in the Description page of Project Settings.


#include "ClonadorBloques.h"
#include "Bloque.h"
#include "Engine/World.h"
#include "EngineUtils.h" 

// Sets default values
AClonadorBloques::AClonadorBloques()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AClonadorBloques::BeginPlay()
{
	Super::BeginPlay();
	
	UWorld* mundo = GetWorld();

	if (!mundo) return;
	for (TActorIterator<ABloque> it(mundo); it; ++it)
	{
		ABloque* original = *it;
		FVector nuevaPos = original->GetActorLocation() + FVector(500, 0, 100); // Adjust the Z offset as needed
		original->Clonar(nuevaPos, mundo);
	}
}

// Called every frame
/*void AClonadorBloques::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}*/

