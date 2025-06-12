// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan/GameModeBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameModeBuilder() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_AGameModeBuilder_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_AGameModeBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BomberMan();
// End Cross Module References
	void AGameModeBuilder::StaticRegisterNativesAGameModeBuilder()
	{
	}
	UClass* Z_Construct_UClass_AGameModeBuilder_NoRegister()
	{
		return AGameModeBuilder::StaticClass();
	}
	struct Z_Construct_UClass_AGameModeBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameModeBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameModeBuilder.h" },
		{ "ModuleRelativePath", "GameModeBuilder.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameModeBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameModeBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameModeBuilder_Statics::ClassParams = {
		&AGameModeBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGameModeBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameModeBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameModeBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameModeBuilder, 3261489531);
	template<> BOMBERMAN_API UClass* StaticClass<AGameModeBuilder>()
	{
		return AGameModeBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameModeBuilder(Z_Construct_UClass_AGameModeBuilder, &AGameModeBuilder::StaticClass, TEXT("/Script/BomberMan"), TEXT("AGameModeBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameModeBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
