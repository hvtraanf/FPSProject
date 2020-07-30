// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntProj/IntProjGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntProjGameMode() {}
// Cross Module References
	INTPROJ_API UClass* Z_Construct_UClass_AIntProjGameMode_NoRegister();
	INTPROJ_API UClass* Z_Construct_UClass_AIntProjGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_IntProj();
// End Cross Module References
	void AIntProjGameMode::StaticRegisterNativesAIntProjGameMode()
	{
	}
	UClass* Z_Construct_UClass_AIntProjGameMode_NoRegister()
	{
		return AIntProjGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AIntProjGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIntProjGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_IntProj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntProjGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "IntProjGameMode.h" },
		{ "ModuleRelativePath", "IntProjGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIntProjGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntProjGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIntProjGameMode_Statics::ClassParams = {
		&AIntProjGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AIntProjGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIntProjGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIntProjGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIntProjGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIntProjGameMode, 2788349676);
	template<> INTPROJ_API UClass* StaticClass<AIntProjGameMode>()
	{
		return AIntProjGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIntProjGameMode(Z_Construct_UClass_AIntProjGameMode, &AIntProjGameMode::StaticClass, TEXT("/Script/IntProj"), TEXT("AIntProjGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIntProjGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
