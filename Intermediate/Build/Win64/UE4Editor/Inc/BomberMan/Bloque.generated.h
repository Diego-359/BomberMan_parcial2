// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_Bloque_generated_h
#error "Bloque.generated.h already included, missing '#pragma once' in Bloque.h"
#endif
#define BOMBERMAN_Bloque_generated_h

#define BomberMan_Source_BomberMan_Bloque_h_13_SPARSE_DATA
#define BomberMan_Source_BomberMan_Bloque_h_13_RPC_WRAPPERS
#define BomberMan_Source_BomberMan_Bloque_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BomberMan_Source_BomberMan_Bloque_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABloque(); \
	friend struct Z_Construct_UClass_ABloque_Statics; \
public: \
	DECLARE_CLASS(ABloque, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan"), NO_API) \
	DECLARE_SERIALIZER(ABloque)


#define BomberMan_Source_BomberMan_Bloque_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABloque(); \
	friend struct Z_Construct_UClass_ABloque_Statics; \
public: \
	DECLARE_CLASS(ABloque, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan"), NO_API) \
	DECLARE_SERIALIZER(ABloque)


#define BomberMan_Source_BomberMan_Bloque_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABloque(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABloque) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloque); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloque); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABloque(ABloque&&); \
	NO_API ABloque(const ABloque&); \
public:


#define BomberMan_Source_BomberMan_Bloque_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABloque(ABloque&&); \
	NO_API ABloque(const ABloque&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloque); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloque); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABloque)


#define BomberMan_Source_BomberMan_Bloque_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ABloque, Mesh); }


#define BomberMan_Source_BomberMan_Bloque_h_10_PROLOG
#define BomberMan_Source_BomberMan_Bloque_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BomberMan_Source_BomberMan_Bloque_h_13_PRIVATE_PROPERTY_OFFSET \
	BomberMan_Source_BomberMan_Bloque_h_13_SPARSE_DATA \
	BomberMan_Source_BomberMan_Bloque_h_13_RPC_WRAPPERS \
	BomberMan_Source_BomberMan_Bloque_h_13_INCLASS \
	BomberMan_Source_BomberMan_Bloque_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BomberMan_Source_BomberMan_Bloque_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BomberMan_Source_BomberMan_Bloque_h_13_PRIVATE_PROPERTY_OFFSET \
	BomberMan_Source_BomberMan_Bloque_h_13_SPARSE_DATA \
	BomberMan_Source_BomberMan_Bloque_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BomberMan_Source_BomberMan_Bloque_h_13_INCLASS_NO_PURE_DECLS \
	BomberMan_Source_BomberMan_Bloque_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_API UClass* StaticClass<class ABloque>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BomberMan_Source_BomberMan_Bloque_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
