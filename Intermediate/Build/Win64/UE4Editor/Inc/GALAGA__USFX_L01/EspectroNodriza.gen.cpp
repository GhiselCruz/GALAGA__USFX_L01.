// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA__USFX_L01/EspectroNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEspectroNodriza() {}
// Cross Module References
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_AEspectroNodriza_NoRegister();
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_AEspectroNodriza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA__USFX_L01();
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_UInterfaceBuilderNodriza_NoRegister();
// End Cross Module References
	void AEspectroNodriza::StaticRegisterNativesAEspectroNodriza()
	{
	}
	UClass* Z_Construct_UClass_AEspectroNodriza_NoRegister()
	{
		return AEspectroNodriza::StaticClass();
	}
	struct Z_Construct_UClass_AEspectroNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEspectroNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA__USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEspectroNodriza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EspectroNodriza.h" },
		{ "ModuleRelativePath", "EspectroNodriza.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEspectroNodriza_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterfaceBuilderNodriza_NoRegister, (int32)VTABLE_OFFSET(AEspectroNodriza, IInterfaceBuilderNodriza), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEspectroNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEspectroNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEspectroNodriza_Statics::ClassParams = {
		&AEspectroNodriza::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEspectroNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEspectroNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEspectroNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEspectroNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEspectroNodriza, 208356609);
	template<> GALAGA__USFX_L01_API UClass* StaticClass<AEspectroNodriza>()
	{
		return AEspectroNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEspectroNodriza(Z_Construct_UClass_AEspectroNodriza, &AEspectroNodriza::StaticClass, TEXT("/Script/GALAGA__USFX_L01"), TEXT("AEspectroNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEspectroNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
