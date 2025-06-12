// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan/BloqueIndividual.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueIndividual() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_ABloqueIndividual_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABloqueIndividual();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BomberMan();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_UIBloqueComponente_NoRegister();
// End Cross Module References
	void ABloqueIndividual::StaticRegisterNativesABloqueIndividual()
	{
	}
	UClass* Z_Construct_UClass_ABloqueIndividual_NoRegister()
	{
		return ABloqueIndividual::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueIndividual_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipoBloque_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TipoBloque;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueIndividual_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueIndividual_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueIndividual.h" },
		{ "ModuleRelativePath", "BloqueIndividual.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueIndividual_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "BloqueIndividual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BloqueIndividual.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueIndividual_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloqueIndividual, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABloqueIndividual_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueIndividual_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueIndividual_Statics::NewProp_TipoBloque_MetaData[] = {
		{ "Category", "BloqueIndividual" },
		{ "ModuleRelativePath", "BloqueIndividual.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABloqueIndividual_Statics::NewProp_TipoBloque = { "TipoBloque", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloqueIndividual, TipoBloque), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABloqueIndividual_Statics::NewProp_TipoBloque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueIndividual_Statics::NewProp_TipoBloque_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueIndividual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueIndividual_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueIndividual_Statics::NewProp_TipoBloque,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloqueIndividual_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIBloqueComponente_NoRegister, (int32)VTABLE_OFFSET(ABloqueIndividual, IIBloqueComponente), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueIndividual_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueIndividual>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueIndividual_Statics::ClassParams = {
		&ABloqueIndividual::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABloqueIndividual_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueIndividual_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABloqueIndividual_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueIndividual_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueIndividual()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueIndividual_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueIndividual, 3307378037);
	template<> BOMBERMAN_API UClass* StaticClass<ABloqueIndividual>()
	{
		return ABloqueIndividual::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueIndividual(Z_Construct_UClass_ABloqueIndividual, &ABloqueIndividual::StaticClass, TEXT("/Script/BomberMan"), TEXT("ABloqueIndividual"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueIndividual);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
