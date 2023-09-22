// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class AUPSPatrolPoint;
struct FPatrolPointLink;
struct FPatrolPointSettings;
#ifdef PATROLACTIONSYSTEM_UPSPatrolPoint_generated_h
#error "UPSPatrolPoint.generated.h already included, missing '#pragma once' in UPSPatrolPoint.h"
#endif
#define PATROLACTIONSYSTEM_UPSPatrolPoint_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNextPatrolPoint) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AUPSPatrolPoint**)Z_Param__Result=P_THIS->GetNextPatrolPoint(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBackwardPatrolPointLinks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FPatrolPointLink>*)Z_Param__Result=P_THIS->GetBackwardPatrolPointLinks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextPatrolPointLinks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FPatrolPointLink>*)Z_Param__Result=P_THIS->GetNextPatrolPointLinks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPatrolPointSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPatrolPointSettings*)Z_Param__Result=P_THIS->GetPatrolPointSettings(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNextPatrolPoint) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AUPSPatrolPoint**)Z_Param__Result=P_THIS->GetNextPatrolPoint(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBackwardPatrolPointLinks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FPatrolPointLink>*)Z_Param__Result=P_THIS->GetBackwardPatrolPointLinks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextPatrolPointLinks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FPatrolPointLink>*)Z_Param__Result=P_THIS->GetNextPatrolPointLinks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPatrolPointSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPatrolPointSettings*)Z_Param__Result=P_THIS->GetPatrolPointSettings(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUPSPatrolPoint(); \
	friend struct Z_Construct_UClass_AUPSPatrolPoint_Statics; \
public: \
	DECLARE_CLASS(AUPSPatrolPoint, AUPSBasePatrolObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AUPSPatrolPoint)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_INCLASS \
private: \
	static void StaticRegisterNativesAUPSPatrolPoint(); \
	friend struct Z_Construct_UClass_AUPSPatrolPoint_Statics; \
public: \
	DECLARE_CLASS(AUPSPatrolPoint, AUPSBasePatrolObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AUPSPatrolPoint)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUPSPatrolPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUPSPatrolPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUPSPatrolPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUPSPatrolPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUPSPatrolPoint(AUPSPatrolPoint&&); \
	NO_API AUPSPatrolPoint(const AUPSPatrolPoint&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUPSPatrolPoint(AUPSPatrolPoint&&); \
	NO_API AUPSPatrolPoint(const AUPSPatrolPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUPSPatrolPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUPSPatrolPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUPSPatrolPoint)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BillboardComponent() { return STRUCT_OFFSET(AUPSPatrolPoint, BillboardComponent); } \
	FORCEINLINE static uint32 __PPO__PatrolPointSettings() { return STRUCT_OFFSET(AUPSPatrolPoint, PatrolPointSettings); } \
	FORCEINLINE static uint32 __PPO__ArrowComponent() { return STRUCT_OFFSET(AUPSPatrolPoint, ArrowComponent); } \
	FORCEINLINE static uint32 __PPO__PatrolPointLinks() { return STRUCT_OFFSET(AUPSPatrolPoint, PatrolPointLinks); } \
	FORCEINLINE static uint32 __PPO__NextPatrolPointSolver() { return STRUCT_OFFSET(AUPSPatrolPoint, NextPatrolPointSolver); } \
	FORCEINLINE static uint32 __PPO__BackwardPatrolPointLinks() { return STRUCT_OFFSET(AUPSPatrolPoint, BackwardPatrolPointLinks); } \
	FORCEINLINE static uint32 __PPO__CachedPatrolPointLinks() { return STRUCT_OFFSET(AUPSPatrolPoint, CachedPatrolPointLinks); }


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_28_PROLOG
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class AUPSPatrolPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Actors_UPSPatrolPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
