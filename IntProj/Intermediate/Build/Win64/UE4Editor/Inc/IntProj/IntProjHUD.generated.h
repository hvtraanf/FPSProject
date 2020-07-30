// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTPROJ_IntProjHUD_generated_h
#error "IntProjHUD.generated.h already included, missing '#pragma once' in IntProjHUD.h"
#endif
#define INTPROJ_IntProjHUD_generated_h

#define IntProj_Source_IntProj_IntProjHUD_h_12_RPC_WRAPPERS
#define IntProj_Source_IntProj_IntProjHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define IntProj_Source_IntProj_IntProjHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIntProjHUD(); \
	friend struct Z_Construct_UClass_AIntProjHUD_Statics; \
public: \
	DECLARE_CLASS(AIntProjHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntProj"), NO_API) \
	DECLARE_SERIALIZER(AIntProjHUD)


#define IntProj_Source_IntProj_IntProjHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAIntProjHUD(); \
	friend struct Z_Construct_UClass_AIntProjHUD_Statics; \
public: \
	DECLARE_CLASS(AIntProjHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntProj"), NO_API) \
	DECLARE_SERIALIZER(AIntProjHUD)


#define IntProj_Source_IntProj_IntProjHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIntProjHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIntProjHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntProjHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntProjHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIntProjHUD(AIntProjHUD&&); \
	NO_API AIntProjHUD(const AIntProjHUD&); \
public:


#define IntProj_Source_IntProj_IntProjHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIntProjHUD(AIntProjHUD&&); \
	NO_API AIntProjHUD(const AIntProjHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntProjHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntProjHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIntProjHUD)


#define IntProj_Source_IntProj_IntProjHUD_h_12_PRIVATE_PROPERTY_OFFSET
#define IntProj_Source_IntProj_IntProjHUD_h_9_PROLOG
#define IntProj_Source_IntProj_IntProjHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntProj_Source_IntProj_IntProjHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	IntProj_Source_IntProj_IntProjHUD_h_12_RPC_WRAPPERS \
	IntProj_Source_IntProj_IntProjHUD_h_12_INCLASS \
	IntProj_Source_IntProj_IntProjHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IntProj_Source_IntProj_IntProjHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntProj_Source_IntProj_IntProjHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	IntProj_Source_IntProj_IntProjHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	IntProj_Source_IntProj_IntProjHUD_h_12_INCLASS_NO_PURE_DECLS \
	IntProj_Source_IntProj_IntProjHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTPROJ_API UClass* StaticClass<class AIntProjHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IntProj_Source_IntProj_IntProjHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
