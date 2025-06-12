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

	int limite = 0;
	if (!mundo) return;
	for (TActorIterator<ABloque> it(mundo); it; ++it)
	{
		ABloque* original = *it;
		if (original->GetActorScale3D().X < 2.0f)  // Solo clonar si no es el gigante
		{
			original->Clonar(original->GetActorLocation() + FVector(500, 0, 100), mundo);
			limite++;
		}
	 
	}
}

// Called every frame
/*void AClonadorBloques::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}*/

