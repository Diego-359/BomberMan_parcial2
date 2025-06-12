// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberManGameMode.h"
#include "BomberManCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"

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

	FVector Pos(0.0f, 0.0f, 100.f);
	FRotator Rot = FRotator::ZeroRotator;
	FActorSpawnParameters Params;

	Mundo->SpawnActor<ABloque>(Pos, Rot, Params);
}
