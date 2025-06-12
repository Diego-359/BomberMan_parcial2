#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IBloqueComponente.generated.h"

// P1 - Declaración de la interfaz para Unreal
UINTERFACE(MinimalAPI)
class UIBloqueComponente : public UInterface
{
	GENERATED_BODY()
};

// P2 - Tu clase interfaz real
class IIBloqueComponente
{
	GENERATED_BODY()

public:
	virtual void MostrarInformacion() = 0;

	//virtual void Operacion() = 0;  
};