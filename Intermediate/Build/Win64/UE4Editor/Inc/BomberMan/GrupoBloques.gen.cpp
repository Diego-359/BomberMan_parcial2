// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan/GrupoBloques.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrupoBloques() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_AGrupoBloques_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_AGrupoBloques();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BomberMan();
	BOMBERMAN_API UClass* Z_Construct_UClass_UIBloqueComponente_NoRegister();
// End Cross Module References
	void AGrupoBloques::StaticRegisterNativesAGrupoBloques()
	{
	}
	UClass* Z_Construct_UClass_AGrupoBloques_NoRegister()
	{
		return AGrupoBloques::StaticClass();
	}
	struct Z_Construct_UClass_AGrupoBloques_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrupoBloques_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrupoBloques_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GrupoBloques.h" },
		{ "ModuleRelativePath", "GrupoBloques.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGrupoBloques_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIBloqueComponente_NoRegister, (int32)VTABLE_OFFSET(AGrupoBloques, IIBloqueComponente), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrupoBloques_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrupoBloques>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrupoBloques_Statics::ClassParams = {
		&AGrupoBloques::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrupoBloques_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrupoBloques_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrupoBloques()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrupoBloques_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrupoBloques, 2263608413);
	template<> BOMBERMAN_API UClass* StaticClass<AGrupoBloques>()
	{
		return AGrupoBloques::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrupoBloques(Z_Construct_UClass_AGrupoBloques, &AGrupoBloques::StaticClass, TEXT("/Script/BomberMan"), TEXT("AGrupoBloques"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrupoBloques);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
