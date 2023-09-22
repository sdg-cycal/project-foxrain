// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AUPSPatrolPoint;
enum class EPatrolMovementType : uint8;
#ifdef PATROLACTIONSYSTEM_UPSPatrolComponent_generated_h
#error "UPSPatrolComponent.generated.h already included, missing '#pragma once' in UPSPatrolComponent.h"
#endif
#define PATROLACTIONSYSTEM_UPSPatrolComponent_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentPatrolPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AUPSPatrolPoint**)Z_Param__Result=P_THIS->GetCurrentPatrolPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPatrolMovementType) \
	{ \
		P_GET_ENUM(EPatrolMovementType,Z_Param_MovementType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPatrolMovementType(EPatrolMovementType(Z_Param_MovementType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMovementPatrolPoint) \
	{ \
		P_GET_OBJECT(AUPSPatrolPoint,Z_Param_PatrolPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMovementPatrolPoint(Z_Param_PatrolPoint); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentPatrolPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AUPSPatrolPoint**)Z_Param__Result=P_THIS->GetCurrentPatrolPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPatrolMovementType) \
	{ \
		P_GET_ENUM(EPatrolMovementType,Z_Param_MovementType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPatrolMovementType(EPatrolMovementType(Z_Param_MovementType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMovementPatrolPoint) \
	{ \
		P_GET_OBJECT(AUPSPatrolPoint,Z_Param_PatrolPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMovementPatrolPoint(Z_Param_PatrolPoint); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPSPatrolComponent(); \
	friend struct Z_Construct_UClass_UUPSPatrolComponent_Statics; \
public: \
	DECLARE_CLASS(UUPSPatrolComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSPatrolComponent)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUUPSPatrolComponent(); \
	friend struct Z_Construct_UClass_UUPSPatrolComponent_Statics; \
public: \
	DECLARE_CLASS(UUPSPatrolComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSPatrolComponent)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSPatrolComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSPatrolComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSPatrolComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSPatrolComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSPatrolComponent(UUPSPatrolComponent&&); \
	NO_API UUPSPatrolComponent(const UUPSPatrolComponent&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSPatrolComponent(UUPSPatrolComponent&&); \
	NO_API UUPSPatrolComponent(const UUPSPatrolComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSPatrolComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSPatrolComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUPSPatrolComponent)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentPatrolPoint() { return STRUCT_OFFSET(UUPSPatrolComponent, CurrentPatrolPoint); }


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_28_PROLOG
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class UUPSPatrolComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Components_UPSPatrolComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
