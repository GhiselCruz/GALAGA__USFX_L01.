// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA__USFX_L01/MyActorArmas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorArmas() {}
// Cross Module References
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_AMyActorArmas_NoRegister();
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_AMyActorArmas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA__USFX_L01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMyActorArmas::StaticRegisterNativesAMyActorArmas()
	{
	}
	UClass* Z_Construct_UClass_AMyActorArmas_NoRegister()
	{
		return AMyActorArmas::StaticClass();
	}
	struct Z_Construct_UClass_AMyActorArmas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaArmas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaArmas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActorArmas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA__USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorArmas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorArmas.h" },
		{ "ModuleRelativePath", "MyActorArmas.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorArmas_Statics::NewProp_mallaArmas_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyActorArmas.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActorArmas_Statics::NewProp_mallaArmas = { "mallaArmas", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorArmas, mallaArmas), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActorArmas_Statics::NewProp_mallaArmas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorArmas_Statics::NewProp_mallaArmas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActorArmas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorArmas_Statics::NewProp_mallaArmas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActorArmas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorArmas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActorArmas_Statics::ClassParams = {
		&AMyActorArmas::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyActorArmas_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorArmas_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyActorArmas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorArmas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActorArmas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActorArmas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActorArmas, 156268744);
	template<> GALAGA__USFX_L01_API UClass* StaticClass<AMyActorArmas>()
	{
		return AMyActorArmas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActorArmas(Z_Construct_UClass_AMyActorArmas, &AMyActorArmas::StaticClass, TEXT("/Script/GALAGA__USFX_L01"), TEXT("AMyActorArmas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorArmas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
