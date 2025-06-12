// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan/IBloqueComponente.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIBloqueComponente() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_UIBloqueComponente_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_UIBloqueComponente();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BomberMan();
// End Cross Module References
	void UIBloqueComponente::StaticRegisterNativesUIBloqueComponente()
	{
	}
	UClass* Z_Construct_UClass_UIBloqueComponente_NoRegister()
	{
		return UIBloqueComponente::StaticClass();
	}
	struct Z_Construct_UClass_UIBloqueComponente_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIBloqueComponente_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIBloqueComponente_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IBloqueComponente.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIBloqueComponente_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIBloqueComponente>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIBloqueComponente_Statics::ClassParams = {
		&UIBloqueComponente::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIBloqueComponente_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIBloqueComponente_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIBloqueComponente()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIBloqueComponente_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIBloqueComponente, 611228892);
	template<> BOMBERMAN_API UClass* StaticClass<UIBloqueComponente>()
	{
		return UIBloqueComponente::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIBloqueComponente(Z_Construct_UClass_UIBloqueComponente, &UIBloqueComponente::StaticClass, TEXT("/Script/BomberMan"), TEXT("UIBloqueComponente"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIBloqueComponente);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
