// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan/BuilderConcreto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderConcreto() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_ABuilderConcreto_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABuilderConcreto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BomberMan();
	BOMBERMAN_API UClass* Z_Construct_UClass_UBuilderLaberinto_NoRegister();
// End Cross Module References
	void ABuilderConcreto::StaticRegisterNativesABuilderConcreto()
	{
	}
	UClass* Z_Construct_UClass_ABuilderConcreto_NoRegister()
	{
		return ABuilderConcreto::StaticClass();
	}
	struct Z_Construct_UClass_ABuilderConcreto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilderConcreto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderConcreto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuilderConcreto.h" },
		{ "ModuleRelativePath", "BuilderConcreto.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuilderConcreto_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderLaberinto_NoRegister, (int32)VTABLE_OFFSET(ABuilderConcreto, IBuilderLaberinto), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilderConcreto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilderConcreto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuilderConcreto_Statics::ClassParams = {
		&ABuilderConcreto::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABuilderConcreto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderConcreto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilderConcreto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuilderConcreto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilderConcreto, 219968555);
	template<> BOMBERMAN_API UClass* StaticClass<ABuilderConcreto>()
	{
		return ABuilderConcreto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilderConcreto(Z_Construct_UClass_ABuilderConcreto, &ABuilderConcreto::StaticClass, TEXT("/Script/BomberMan"), TEXT("ABuilderConcreto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilderConcreto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
