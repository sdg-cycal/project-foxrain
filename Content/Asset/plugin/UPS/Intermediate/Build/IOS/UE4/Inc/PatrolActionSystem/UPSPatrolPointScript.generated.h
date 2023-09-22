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
#ifdef PATROLACTIONSYSTEM_UPSPatrolPointScript_generated_h
#error "UPSPatrolPointScript.generated.h already included, missing '#pragma once' in UPSPatrolPointScript.h"
#endif
#define PATROLACTIONSYSTEM_UPSPatrolPointScript_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_SPARSE_DATA
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReachPoint) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_GET_OBJECT(AUPSPatrolPoint,Z_Param_Point); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReachPoint(Z_Param_Character,Z_Param_Point); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbortMovementToPoint) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_GET_OBJECT(AUPSPatrolPoint,Z_Param_Point); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbortMovementToPoint(Z_Param_Character,Z_Param_Point); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartMovementToPoint) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_GET_OBJECT(AUPSPatrolPoint,Z_Param_Point); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartMovementToPoint(Z_Param_Character,Z_Param_Point); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReachPoint) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_GET_OBJECT(AUPSPatrolPoint,Z_Param_Point); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReachPoint(Z_Param_Character,Z_Param_Point); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbortMovementToPoint) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_GET_OBJECT(AUPSPatrolPoint,Z_Param_Point); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbortMovementToPoint(Z_Param_Character,Z_Param_Point); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartMovementToPoint) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_GET_OBJECT(AUPSPatrolPoint,Z_Param_Point); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartMovementToPoint(Z_Param_Character,Z_Param_Point); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_EVENT_PARMS \
	struct UPSPatrolPointScript_eventK2_AbortMovementToPoint_Parms \
	{ \
		ACharacter* Character; \
		AUPSPatrolPoint* Point; \
	}; \
	struct UPSPatrolPointScript_eventK2_ReachPoint_Parms \
	{ \
		ACharacter* Character; \
		AUPSPatrolPoint* Point; \
	}; \
	struct UPSPatrolPointScript_eventK2_StartMovementToPoint_Parms \
	{ \
		ACharacter* Character; \
		AUPSPatrolPoint* Point; \
	};


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_CALLBACK_WRAPPERS
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPSPatrolPointScript(); \
	friend struct Z_Construct_UClass_UUPSPatrolPointScript_Statics; \
public: \
	DECLARE_CLASS(UUPSPatrolPointScript, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSPatrolPointScript)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUUPSPatrolPointScript(); \
	friend struct Z_Construct_UClass_UUPSPatrolPointScript_Statics; \
public: \
	DECLARE_CLASS(UUPSPatrolPointScript, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSPatrolPointScript)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSPatrolPointScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSPatrolPointScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSPatrolPointScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSPatrolPointScript); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSPatrolPointScript(UUPSPatrolPointScript&&); \
	NO_API UUPSPatrolPointScript(const UUPSPatrolPointScript&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSPatrolPointScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSPatrolPointScript(UUPSPatrolPointScript&&); \
	NO_API UUPSPatrolPointScript(const UUPSPatrolPointScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSPatrolPointScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSPatrolPointScript); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSPatrolPointScript)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_18_PROLOG \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_EVENT_PARMS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class UUPSPatrolPointScript>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointScripts_UPSPatrolPointScript_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
