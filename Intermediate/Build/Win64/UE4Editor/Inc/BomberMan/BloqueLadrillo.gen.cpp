// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan/BloqueLadrillo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueLadrillo() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_ABloqueLadrillo_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABloqueLadrillo();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABloque();
	UPackage* Z_Construct_UPackage__Script_BomberMan();
	BOMBERMAN_API UClass* Z_Construct_UClass_UIBloqueComponente_NoRegister();
// End Cross Module References
	void ABloqueLadrillo::StaticRegisterNativesABloqueLadrillo()
	{
	}
	UClass* Z_Construct_UClass_ABloqueLadrillo_NoRegister()
	{
		return ABloqueLadrillo::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueLadrillo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueLadrillo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABloque,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueLadrillo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BloqueLadrillo.h" },
		{ "ModuleRelativePath", "BloqueLadrillo.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloqueLadrillo_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIBloqueComponente_NoRegister, (int32)VTABLE_OFFSET(ABloqueLadrillo, IIBloqueComponente), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueLadrillo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueLadrillo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueLadrillo_Statics::ClassParams = {
		&ABloqueLadrillo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABloqueLadrillo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrillo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueLadrillo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueLadrillo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueLadrillo, 3583833102);
	template<> BOMBERMAN_API UClass* StaticClass<ABloqueLadrillo>()
	{
		return ABloqueLadrillo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueLadrillo(Z_Construct_UClass_ABloqueLadrillo, &ABloqueLadrillo::StaticClass, TEXT("/Script/BomberMan"), TEXT("ABloqueLadrillo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueLadrillo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
