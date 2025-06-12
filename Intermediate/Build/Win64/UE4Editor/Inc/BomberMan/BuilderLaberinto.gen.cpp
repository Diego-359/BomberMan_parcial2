// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan/BuilderLaberinto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderLaberinto() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_UBuilderLaberinto_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_UBuilderLaberinto();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BomberMan();
// End Cross Module References
	void UBuilderLaberinto::StaticRegisterNativesUBuilderLaberinto()
	{
	}
	UClass* Z_Construct_UClass_UBuilderLaberinto_NoRegister()
	{
		return UBuilderLaberinto::StaticClass();
	}
	struct Z_Construct_UClass_UBuilderLaberinto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuilderLaberinto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuilderLaberinto_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BuilderLaberinto.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuilderLaberinto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBuilderLaberinto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBuilderLaberinto_Statics::ClassParams = {
		&UBuilderLaberinto::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBuilderLaberinto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuilderLaberinto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuilderLaberinto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBuilderLaberinto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuilderLaberinto, 3397236685);
	template<> BOMBERMAN_API UClass* StaticClass<UBuilderLaberinto>()
	{
		return UBuilderLaberinto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuilderLaberinto(Z_Construct_UClass_UBuilderLaberinto, &UBuilderLaberinto::StaticClass, TEXT("/Script/BomberMan"), TEXT("UBuilderLaberinto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuilderLaberinto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
