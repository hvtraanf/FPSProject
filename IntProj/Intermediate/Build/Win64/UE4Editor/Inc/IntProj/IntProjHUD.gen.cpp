// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntProj/IntProjHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntProjHUD() {}
// Cross Module References
	INTPROJ_API UClass* Z_Construct_UClass_AIntProjHUD_NoRegister();
	INTPROJ_API UClass* Z_Construct_UClass_AIntProjHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_IntProj();
// End Cross Module References
	void AIntProjHUD::StaticRegisterNativesAIntProjHUD()
	{
	}
	UClass* Z_Construct_UClass_AIntProjHUD_NoRegister()
	{
		return AIntProjHUD::StaticClass();
	}
	struct Z_Construct_UClass_AIntProjHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIntProjHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_IntProj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntProjHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "IntProjHUD.h" },
		{ "ModuleRelativePath", "IntProjHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIntProjHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntProjHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIntProjHUD_Statics::ClassParams = {
		&AIntProjHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AIntProjHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIntProjHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIntProjHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIntProjHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIntProjHUD, 2051782698);
	template<> INTPROJ_API UClass* StaticClass<AIntProjHUD>()
	{
		return AIntProjHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIntProjHUD(Z_Construct_UClass_AIntProjHUD, &AIntProjHUD::StaticClass, TEXT("/Script/IntProj"), TEXT("AIntProjHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIntProjHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
