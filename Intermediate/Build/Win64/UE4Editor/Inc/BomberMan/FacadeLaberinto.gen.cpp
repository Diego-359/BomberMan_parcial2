// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan/FacadeLaberinto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacadeLaberinto() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_AFacadeLaberinto_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_AFacadeLaberinto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BomberMan();
// End Cross Module References
	void AFacadeLaberinto::StaticRegisterNativesAFacadeLaberinto()
	{
	}
	UClass* Z_Construct_UClass_AFacadeLaberinto_NoRegister()
	{
		return AFacadeLaberinto::StaticClass();
	}
	struct Z_Construct_UClass_AFacadeLaberinto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFacadeLaberinto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacadeLaberinto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FacadeLaberinto.h" },
		{ "ModuleRelativePath", "FacadeLaberinto.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFacadeLaberinto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacadeLaberinto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFacadeLaberinto_Statics::ClassParams = {
		&AFacadeLaberinto::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFacadeLaberinto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeLaberinto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFacadeLaberinto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFacadeLaberinto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFacadeLaberinto, 2648929267);
	template<> BOMBERMAN_API UClass* StaticClass<AFacadeLaberinto>()
	{
		return AFacadeLaberinto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFacadeLaberinto(Z_Construct_UClass_AFacadeLaberinto, &AFacadeLaberinto::StaticClass, TEXT("/Script/BomberMan"), TEXT("AFacadeLaberinto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFacadeLaberinto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
