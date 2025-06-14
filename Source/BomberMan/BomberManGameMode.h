// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Bloque.h" 
#include "BomberManGameMode.generated.h"


UCLASS(minimalapi)
class ABomberManGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberManGameMode();

protected:
		// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	TMap<int, ABloque*> MapaBloques; // Map to hold player names and their scores

};



