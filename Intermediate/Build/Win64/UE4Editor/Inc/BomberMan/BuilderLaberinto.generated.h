// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_BuilderLaberinto_generated_h
#error "BuilderLaberinto.generated.h already included, missing '#pragma once' in BuilderLaberinto.h"
#endif
#define BOMBERMAN_BuilderLaberinto_generated_h

#define BomberMan_Source_BomberMan_BuilderLaberinto_h_13_SPARSE_DATA
#define BomberMan_Source_BomberMan_BuilderLaberinto_h_13_RPC_WRAPPERS
#define BomberMan_Source_BomberMan_BuilderLaberinto_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BomberMan_Source_BomberMan_BuilderLaberinto_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BOMBERMAN_API UBuilderLaberinto(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuilderLaberinto) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOMBERMAN_API, UBuilderLaberinto); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuilderLaberinto); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BOMBERMAN_API UBuilderLaberinto(UBuilderLaberinto&&); \
	BOMBERMAN_API UBuilderLaberinto(const UBuilderLaberinto&); \
public:


#define BomberMan_Source_BomberMan_BuilderLaberinto_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BOMBERMAN_API UBuilderLaberinto(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BOMBERMAN_API UBuilderLaberinto(UBuilderLaberinto&&); \
	BOMBERMAN_API UBuilderLaberinto(const UBuilderLaberinto&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOMBERMAN_API, UBuilderLaberinto); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuilderLaberinto); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuilderLaberinto)


#define BomberMan_Source_BomberMan_BuilderLaberinto_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBuilderLaberinto(); \
	friend struct Z_Construct_UClass_UBuilderLaberinto_Statics; \
public: \
	DECLARE_CLASS(UBuilderLaberinto, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BomberMan"), BOMBERMAN_API) \
	DECLARE_SERIALIZER(UBuilderLaberinto)


#define BomberMan_Source_BomberMan_BuilderLaberinto_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BomberMan_Source_BomberMan_BuilderLaberinto_h_13_GENERATED_UINTERFACE_BODY() \
	BomberMan_Source_BomberMan_BuilderLaberinto_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BomberMan_Source_BomberMan_BuilderLaberinto_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BomberMan_Source_BomberMan_BuilderLaberinto_h_13_GENERATED_UINTERFACE_BODY() \
	BomberMan_Source_BomberMan_BuilderLaberinto_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BomberMan_Source_BomberMan_BuilderLaberinto_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBuilderLaberinto() {} \
public: \
	typedef UBuilderLaberinto UClassType; \
	typedef IBuilderLaberinto ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BomberMan_Source_BomberMan_BuilderLaberinto_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IBuilderLaberinto() {} \
public: \
	typedef UBuilderLaberinto UClassType; \
	typedef IBuilderLaberinto ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BomberMan_Source_BomberMan_BuilderLaberinto_h_10_PROLOG
#define BomberMan_Source_BomberMan_BuilderLaberinto_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BomberMan_Source_BomberMan_BuilderLaberinto_h_13_SPARSE_DATA \
	BomberMan_Source_BomberMan_BuilderLaberinto_h_13_RPC_WRAPPERS \
	BomberMan_Source_BomberMan_BuilderLaberinto_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BomberMan_Source_BomberMan_BuilderLaberinto_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BomberMan_Source_BomberMan_BuilderLaberinto_h_13_SPARSE_DATA \
	BomberMan_Source_BomberMan_BuilderLaberinto_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BomberMan_Source_BomberMan_BuilderLaberinto_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_API UClass* StaticClass<class UBuilderLaberinto>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BomberMan_Source_BomberMan_BuilderLaberinto_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
