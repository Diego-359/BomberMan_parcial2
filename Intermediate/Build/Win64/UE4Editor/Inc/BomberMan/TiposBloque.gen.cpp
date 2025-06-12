// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan/TiposBloque.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTiposBloque() {}
// Cross Module References
	BOMBERMAN_API UEnum* Z_Construct_UEnum_BomberMan_ETipoBloque();
	UPackage* Z_Construct_UPackage__Script_BomberMan();
// End Cross Module References
	static UEnum* ETipoBloque_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BomberMan_ETipoBloque, Z_Construct_UPackage__Script_BomberMan(), TEXT("ETipoBloque"));
		}
		return Singleton;
	}
	template<> BOMBERMAN_API UEnum* StaticEnum<ETipoBloque>()
	{
		return ETipoBloque_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETipoBloque(ETipoBloque_StaticEnum, TEXT("/Script/BomberMan"), TEXT("ETipoBloque"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BomberMan_ETipoBloque_Hash() { return 223728306U; }
	UEnum* Z_Construct_UEnum_BomberMan_ETipoBloque()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BomberMan();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETipoBloque"), 0, Get_Z_Construct_UEnum_BomberMan_ETipoBloque_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETipoBloque::Madera", (int64)ETipoBloque::Madera },
				{ "ETipoBloque::Ladrillo", (int64)ETipoBloque::Ladrillo },
				{ "ETipoBloque::Burbuja", (int64)ETipoBloque::Burbuja },
				{ "ETipoBloque::Acero", (int64)ETipoBloque::Acero },
				{ "ETipoBloque::Concreto", (int64)ETipoBloque::Concreto },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Acero.DisplayName", "Acero" },
				{ "Acero.Name", "ETipoBloque::Acero" },
				{ "BlueprintType", "true" },
				{ "Burbuja.DisplayName", "Burbuja" },
				{ "Burbuja.Name", "ETipoBloque::Burbuja" },
				{ "Concreto.DisplayName", "Concreto" },
				{ "Concreto.Name", "ETipoBloque::Concreto" },
				{ "Ladrillo.DisplayName", "Ladrillo" },
				{ "Ladrillo.Name", "ETipoBloque::Ladrillo" },
				{ "Madera.DisplayName", "Madera" },
				{ "Madera.Name", "ETipoBloque::Madera" },
				{ "ModuleRelativePath", "TiposBloque.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BomberMan,
				nullptr,
				"ETipoBloque",
				"ETipoBloque",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
