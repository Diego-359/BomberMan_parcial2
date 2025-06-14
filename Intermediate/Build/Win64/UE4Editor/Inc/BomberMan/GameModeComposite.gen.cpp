// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan/GameModeComposite.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameModeComposite() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_AGameModeComposite_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_AGameModeComposite();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BomberMan();
// End Cross Module References
	void AGameModeComposite::StaticRegisterNativesAGameModeComposite()
	{
	}
	UClass* Z_Construct_UClass_AGameModeComposite_NoRegister()
	{
		return AGameModeComposite::StaticClass();
	}
	struct Z_Construct_UClass_AGameModeComposite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameModeComposite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeComposite_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameModeComposite.h" },
		{ "ModuleRelativePath", "GameModeComposite.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameModeComposite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameModeComposite>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameModeComposite_Statics::ClassParams = {
		&AGameModeComposite::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGameModeComposite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeComposite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameModeComposite()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameModeComposite_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameModeComposite, 1940573232);
	template<> BOMBERMAN_API UClass* StaticClass<AGameModeComposite>()
	{
		return AGameModeComposite::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameModeComposite(Z_Construct_UClass_AGameModeComposite, &AGameModeComposite::StaticClass, TEXT("/Script/BomberMan"), TEXT("AGameModeComposite"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameModeComposite);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
