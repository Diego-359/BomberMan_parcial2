// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_BomberManCharacter_generated_h
#error "BomberManCharacter.generated.h already included, missing '#pragma once' in BomberManCharacter.h"
#endif
#define BOMBERMAN_BomberManCharacter_generated_h

#define BomberMan_Source_BomberMan_BomberManCharacter_h_12_SPARSE_DATA
#define BomberMan_Source_BomberMan_BomberManCharacter_h_12_RPC_WRAPPERS
#define BomberMan_Source_BomberMan_BomberManCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BomberMan_Source_BomberMan_BomberManCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABomberManCharacter(); \
	friend struct Z_Construct_UClass_ABomberManCharacter_Statics; \
public: \
	DECLARE_CLASS(ABomberManCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan"), NO_API) \
	DECLARE_SERIALIZER(ABomberManCharacter)


#define BomberMan_Source_BomberMan_BomberManCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABomberManCharacter(); \
	friend struct Z_Construct_UClass_ABomberManCharacter_Statics; \
public: \
	DECLARE_CLASS(ABomberManCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan"), NO_API) \
	DECLARE_SERIALIZER(ABomberManCharacter)


#define BomberMan_Source_BomberMan_BomberManCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABomberManCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABomberManCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomberManCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomberManCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomberManCharacter(ABomberManCharacter&&); \
	NO_API ABomberManCharacter(const ABomberManCharacter&); \
public:


#define BomberMan_Source_BomberMan_BomberManCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomberManCharacter(ABomberManCharacter&&); \
	NO_API ABomberManCharacter(const ABomberManCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomberManCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomberManCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABomberManCharacter)


#define BomberMan_Source_BomberMan_BomberManCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABomberManCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABomberManCharacter, FollowCamera); }


#define BomberMan_Source_BomberMan_BomberManCharacter_h_9_PROLOG
#define BomberMan_Source_BomberMan_BomberManCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BomberMan_Source_BomberMan_BomberManCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BomberMan_Source_BomberMan_BomberManCharacter_h_12_SPARSE_DATA \
	BomberMan_Source_BomberMan_BomberManCharacter_h_12_RPC_WRAPPERS \
	BomberMan_Source_BomberMan_BomberManCharacter_h_12_INCLASS \
	BomberMan_Source_BomberMan_BomberManCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BomberMan_Source_BomberMan_BomberManCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BomberMan_Source_BomberMan_BomberManCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BomberMan_Source_BomberMan_BomberManCharacter_h_12_SPARSE_DATA \
	BomberMan_Source_BomberMan_BomberManCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BomberMan_Source_BomberMan_BomberManCharacter_h_12_INCLASS_NO_PURE_DECLS \
	BomberMan_Source_BomberMan_BomberManCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_API UClass* StaticClass<class ABomberManCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BomberMan_Source_BomberMan_BomberManCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
