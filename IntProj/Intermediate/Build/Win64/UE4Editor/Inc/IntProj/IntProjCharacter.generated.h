// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTPROJ_IntProjCharacter_generated_h
#error "IntProjCharacter.generated.h already included, missing '#pragma once' in IntProjCharacter.h"
#endif
#define INTPROJ_IntProjCharacter_generated_h

#define IntProj_Source_IntProj_IntProjCharacter_h_14_RPC_WRAPPERS
#define IntProj_Source_IntProj_IntProjCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define IntProj_Source_IntProj_IntProjCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIntProjCharacter(); \
	friend struct Z_Construct_UClass_AIntProjCharacter_Statics; \
public: \
	DECLARE_CLASS(AIntProjCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntProj"), NO_API) \
	DECLARE_SERIALIZER(AIntProjCharacter)


#define IntProj_Source_IntProj_IntProjCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAIntProjCharacter(); \
	friend struct Z_Construct_UClass_AIntProjCharacter_Statics; \
public: \
	DECLARE_CLASS(AIntProjCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntProj"), NO_API) \
	DECLARE_SERIALIZER(AIntProjCharacter)


#define IntProj_Source_IntProj_IntProjCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIntProjCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIntProjCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntProjCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntProjCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIntProjCharacter(AIntProjCharacter&&); \
	NO_API AIntProjCharacter(const AIntProjCharacter&); \
public:


#define IntProj_Source_IntProj_IntProjCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIntProjCharacter(AIntProjCharacter&&); \
	NO_API AIntProjCharacter(const AIntProjCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntProjCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntProjCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIntProjCharacter)


#define IntProj_Source_IntProj_IntProjCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AIntProjCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AIntProjCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AIntProjCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AIntProjCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AIntProjCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AIntProjCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AIntProjCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AIntProjCharacter, L_MotionController); }


#define IntProj_Source_IntProj_IntProjCharacter_h_11_PROLOG
#define IntProj_Source_IntProj_IntProjCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntProj_Source_IntProj_IntProjCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	IntProj_Source_IntProj_IntProjCharacter_h_14_RPC_WRAPPERS \
	IntProj_Source_IntProj_IntProjCharacter_h_14_INCLASS \
	IntProj_Source_IntProj_IntProjCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IntProj_Source_IntProj_IntProjCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntProj_Source_IntProj_IntProjCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	IntProj_Source_IntProj_IntProjCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	IntProj_Source_IntProj_IntProjCharacter_h_14_INCLASS_NO_PURE_DECLS \
	IntProj_Source_IntProj_IntProjCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTPROJ_API UClass* StaticClass<class AIntProjCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IntProj_Source_IntProj_IntProjCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
