// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA__USFX_L01/DirectorNaveNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectorNaveNodriza() {}
// Cross Module References
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_ADirectorNaveNodriza_NoRegister();
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_ADirectorNaveNodriza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA__USFX_L01();
// End Cross Module References
	void ADirectorNaveNodriza::StaticRegisterNativesADirectorNaveNodriza()
	{
	}
	UClass* Z_Construct_UClass_ADirectorNaveNodriza_NoRegister()
	{
		return ADirectorNaveNodriza::StaticClass();
	}
	struct Z_Construct_UClass_ADirectorNaveNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADirectorNaveNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA__USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectorNaveNodriza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DirectorNaveNodriza.h" },
		{ "ModuleRelativePath", "DirectorNaveNodriza.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADirectorNaveNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirectorNaveNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADirectorNaveNodriza_Statics::ClassParams = {
		&ADirectorNaveNodriza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADirectorNaveNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorNaveNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADirectorNaveNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADirectorNaveNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADirectorNaveNodriza, 2554744688);
	template<> GALAGA__USFX_L01_API UClass* StaticClass<ADirectorNaveNodriza>()
	{
		return ADirectorNaveNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADirectorNaveNodriza(Z_Construct_UClass_ADirectorNaveNodriza, &ADirectorNaveNodriza::StaticClass, TEXT("/Script/GALAGA__USFX_L01"), TEXT("ADirectorNaveNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADirectorNaveNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
