// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberManGameMode.h"
#include "BomberManCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "FactoryBloques.h"

ABomberManGameMode::ABomberManGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomberManGameMode::BeginPlay()
{
	Super::BeginPlay();
	
	UWorld* Mundo = GetWorld();
	if (!Mundo) return;

	for (int i = 0; i < 5; i++)
	{
		ETipoBloque Tipo = static_cast<ETipoBloque>(i); //0 a 4
		FVector Pos = FVector(i* 200.f, 0.0f, 100.f);
		ABloque* Bloque = FactoryBloques::CrearBloque(Mundo, Tipo, Pos, i);

		if (Bloque)
		{
			MapaBloques.Add(i, Bloque);
			Bloque->ComportamientoGrupal();
		}
	}
	/*FVector Pos(0.0f, 0.0f, 100.f);
	FRotator Rot = FRotator::ZeroRotator;
	FActorSpawnParameters Params;
	*/
	//Mundo->SpawnActor<ABloque>(Pos, Rot, Params);
	
	
	for (auto& Elem : MapaBloques)
	{
		if (Elem.Value)
		{
			Elem.Value->ComportamientoGrupal();
		}
	}
}
