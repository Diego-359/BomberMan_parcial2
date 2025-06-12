// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan/GameModePrototype.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameModePrototype() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_AGameModePrototype_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_AGameModePrototype();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BomberMan();
// End Cross Module References
	void AGameModePrototype::StaticRegisterNativesAGameModePrototype()
	{
	}
	UClass* Z_Construct_UClass_AGameModePrototype_NoRegister()
	{
		return AGameModePrototype::StaticClass();
	}
	struct Z_Construct_UClass_AGameModePrototype_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameModePrototype_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModePrototype_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameModePrototype.h" },
		{ "ModuleRelativePath", "GameModePrototype.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameModePrototype_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameModePrototype>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameModePrototype_Statics::ClassParams = {
		&AGameModePrototype::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameModePrototype_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModePrototype_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameModePrototype()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameModePrototype_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameModePrototype, 1064444416);
	template<> BOMBERMAN_API UClass* StaticClass<AGameModePrototype>()
	{
		return AGameModePrototype::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameModePrototype(Z_Construct_UClass_AGameModePrototype, &AGameModePrototype::StaticClass, TEXT("/Script/BomberMan"), TEXT("AGameModePrototype"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameModePrototype);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
