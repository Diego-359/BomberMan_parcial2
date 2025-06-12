// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_TiposBloque_generated_h
#error "TiposBloque.generated.h already included, missing '#pragma once' in TiposBloque.h"
#endif
#define BOMBERMAN_TiposBloque_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BomberMan_Source_BomberMan_TiposBloque_h


#define FOREACH_ENUM_ETIPOBLOQUE(op) \
	op(ETipoBloque::Madera) \
	op(ETipoBloque::Ladrillo) \
	op(ETipoBloque::Burbuja) \
	op(ETipoBloque::Acero) \
	op(ETipoBloque::Concreto) 

enum class ETipoBloque : uint8;
template<> BOMBERMAN_API UEnum* StaticEnum<ETipoBloque>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
