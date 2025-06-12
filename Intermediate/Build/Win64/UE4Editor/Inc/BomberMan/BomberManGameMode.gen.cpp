// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan/BomberManGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberManGameMode() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_ABomberManGameMode_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABomberManGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BomberMan();
// End Cross Module References
	void ABomberManGameMode::StaticRegisterNativesABomberManGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABomberManGameMode_NoRegister()
	{
		return ABomberManGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABomberManGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABomberManGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberManGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BomberManGameMode.h" },
		{ "ModuleRelativePath", "BomberManGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABomberManGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberManGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABomberManGameMode_Statics::ClassParams = {
		&ABomberManGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABomberManGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberManGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABomberManGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABomberManGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomberManGameMode, 4002540177);
	template<> BOMBERMAN_API UClass* StaticClass<ABomberManGameMode>()
	{
		return ABomberManGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomberManGameMode(Z_Construct_UClass_ABomberManGameMode, &ABomberManGameMode::StaticClass, TEXT("/Script/BomberMan"), TEXT("ABomberManGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberManGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
