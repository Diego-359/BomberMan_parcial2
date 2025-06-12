// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan/ClonadorBloques.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClonadorBloques() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_AClonadorBloques_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_AClonadorBloques();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BomberMan();
// End Cross Module References
	void AClonadorBloques::StaticRegisterNativesAClonadorBloques()
	{
	}
	UClass* Z_Construct_UClass_AClonadorBloques_NoRegister()
	{
		return AClonadorBloques::StaticClass();
	}
	struct Z_Construct_UClass_AClonadorBloques_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClonadorBloques_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClonadorBloques_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClonadorBloques.h" },
		{ "ModuleRelativePath", "ClonadorBloques.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClonadorBloques_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClonadorBloques>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AClonadorBloques_Statics::ClassParams = {
		&AClonadorBloques::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AClonadorBloques_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AClonadorBloques_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClonadorBloques()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AClonadorBloques_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AClonadorBloques, 3377490296);
	template<> BOMBERMAN_API UClass* StaticClass<AClonadorBloques>()
	{
		return AClonadorBloques::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AClonadorBloques(Z_Construct_UClass_AClonadorBloques, &AClonadorBloques::StaticClass, TEXT("/Script/BomberMan"), TEXT("AClonadorBloques"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClonadorBloques);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
