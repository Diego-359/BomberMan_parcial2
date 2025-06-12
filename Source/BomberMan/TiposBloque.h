#pragma once

#include "UObject/ObjectMacros.h"
#include "TiposBloque.generated.h"

UENUM(BlueprintType)
enum class ETipoBloque : uint8
{
	Madera     UMETA(DisplayName = "Madera"),
	Ladrillo   UMETA(DisplayName = "Ladrillo"),
	Burbuja    UMETA(DisplayName = "Burbuja"),
	Acero      UMETA(DisplayName = "Acero"),
	Concreto   UMETA(DisplayName = "Concreto")
};
