// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA__USFX_L01/InterfaceBuilderNodrizaCompleja.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterfaceBuilderNodrizaCompleja() {}
// Cross Module References
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_UInterfaceBuilderNodrizaCompleja_NoRegister();
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_UInterfaceBuilderNodrizaCompleja();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GALAGA__USFX_L01();
// End Cross Module References
	void UInterfaceBuilderNodrizaCompleja::StaticRegisterNativesUInterfaceBuilderNodrizaCompleja()
	{
	}
	UClass* Z_Construct_UClass_UInterfaceBuilderNodrizaCompleja_NoRegister()
	{
		return UInterfaceBuilderNodrizaCompleja::StaticClass();
	}
	struct Z_Construct_UClass_UInterfaceBuilderNodrizaCompleja_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterfaceBuilderNodrizaCompleja_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA__USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterfaceBuilderNodrizaCompleja_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InterfaceBuilderNodrizaCompleja.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterfaceBuilderNodrizaCompleja_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterfaceBuilderNodrizaCompleja>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterfaceBuilderNodrizaCompleja_Statics::ClassParams = {
		&UInterfaceBuilderNodrizaCompleja::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterfaceBuilderNodrizaCompleja_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterfaceBuilderNodrizaCompleja_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterfaceBuilderNodrizaCompleja()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterfaceBuilderNodrizaCompleja_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterfaceBuilderNodrizaCompleja, 3816445359);
	template<> GALAGA__USFX_L01_API UClass* StaticClass<UInterfaceBuilderNodrizaCompleja>()
	{
		return UInterfaceBuilderNodrizaCompleja::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterfaceBuilderNodrizaCompleja(Z_Construct_UClass_UInterfaceBuilderNodrizaCompleja, &UInterfaceBuilderNodrizaCompleja::StaticClass, TEXT("/Script/GALAGA__USFX_L01"), TEXT("UInterfaceBuilderNodrizaCompleja"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterfaceBuilderNodrizaCompleja);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
