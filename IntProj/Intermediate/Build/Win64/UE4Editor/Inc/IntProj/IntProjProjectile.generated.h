// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef INTPROJ_IntProjProjectile_generated_h
#error "IntProjProjectile.generated.h already included, missing '#pragma once' in IntProjProjectile.h"
#endif
#define INTPROJ_IntProjProjectile_generated_h

#define IntProj_Source_IntProj_IntProjProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define IntProj_Source_IntProj_IntProjProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define IntProj_Source_IntProj_IntProjProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIntProjProjectile(); \
	friend struct Z_Construct_UClass_AIntProjProjectile_Statics; \
public: \
	DECLARE_CLASS(AIntProjProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntProj"), NO_API) \
	DECLARE_SERIALIZER(AIntProjProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define IntProj_Source_IntProj_IntProjProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAIntProjProjectile(); \
	friend struct Z_Construct_UClass_AIntProjProjectile_Statics; \
public: \
	DECLARE_CLASS(AIntProjProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntProj"), NO_API) \
	DECLARE_SERIALIZER(AIntProjProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define IntProj_Source_IntProj_IntProjProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIntProjProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIntProjProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntProjProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntProjProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIntProjProjectile(AIntProjProjectile&&); \
	NO_API AIntProjProjectile(const AIntProjProjectile&); \
public:


#define IntProj_Source_IntProj_IntProjProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIntProjProjectile(AIntProjProjectile&&); \
	NO_API AIntProjProjectile(const AIntProjProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntProjProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntProjProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIntProjProjectile)


#define IntProj_Source_IntProj_IntProjProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AIntProjProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AIntProjProjectile, ProjectileMovement); }


#define IntProj_Source_IntProj_IntProjProjectile_h_9_PROLOG
#define IntProj_Source_IntProj_IntProjProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntProj_Source_IntProj_IntProjProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	IntProj_Source_IntProj_IntProjProjectile_h_12_RPC_WRAPPERS \
	IntProj_Source_IntProj_IntProjProjectile_h_12_INCLASS \
	IntProj_Source_IntProj_IntProjProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IntProj_Source_IntProj_IntProjProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntProj_Source_IntProj_IntProjProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	IntProj_Source_IntProj_IntProjProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	IntProj_Source_IntProj_IntProjProjectile_h_12_INCLASS_NO_PURE_DECLS \
	IntProj_Source_IntProj_IntProjProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTPROJ_API UClass* StaticClass<class AIntProjProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IntProj_Source_IntProj_IntProjProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
