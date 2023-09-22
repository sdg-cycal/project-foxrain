// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef PATROLACTIONSYSTEM_UPSEnemyActionScript_generated_h
#error "UPSEnemyActionScript.generated.h already included, missing '#pragma once' in UPSEnemyActionScript.h"
#endif
#define PATROLACTIONSYSTEM_UPSEnemyActionScript_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_SPARSE_DATA
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_RPC_WRAPPERS \
	virtual void OnActionFinished_Implementation(ACharacter* Character); \
	virtual void OnActionAborted_Implementation(ACharacter* Character); \
	virtual void OnActionStarted_Implementation(ACharacter* Character); \
 \
	DECLARE_FUNCTION(execOnActionFinished) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActionFinished_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActionAborted) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActionAborted_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActionStarted) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActionStarted_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnActionFinished_Implementation(ACharacter* Character); \
	virtual void OnActionAborted_Implementation(ACharacter* Character); \
	virtual void OnActionStarted_Implementation(ACharacter* Character); \
 \
	DECLARE_FUNCTION(execOnActionFinished) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActionFinished_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActionAborted) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActionAborted_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActionStarted) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActionStarted_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_EVENT_PARMS \
	struct UPSEnemyActionScript_eventOnActionAborted_Parms \
	{ \
		ACharacter* Character; \
	}; \
	struct UPSEnemyActionScript_eventOnActionFinished_Parms \
	{ \
		ACharacter* Character; \
	}; \
	struct UPSEnemyActionScript_eventOnActionStarted_Parms \
	{ \
		ACharacter* Character; \
	};


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_CALLBACK_WRAPPERS
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPSEnemyActionScript(); \
	friend struct Z_Construct_UClass_UUPSEnemyActionScript_Statics; \
public: \
	DECLARE_CLASS(UUPSEnemyActionScript, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSEnemyActionScript)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUUPSEnemyActionScript(); \
	friend struct Z_Construct_UClass_UUPSEnemyActionScript_Statics; \
public: \
	DECLARE_CLASS(UUPSEnemyActionScript, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSEnemyActionScript)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSEnemyActionScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSEnemyActionScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSEnemyActionScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSEnemyActionScript); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSEnemyActionScript(UUPSEnemyActionScript&&); \
	NO_API UUPSEnemyActionScript(const UUPSEnemyActionScript&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSEnemyActionScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSEnemyActionScript(UUPSEnemyActionScript&&); \
	NO_API UUPSEnemyActionScript(const UUPSEnemyActionScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSEnemyActionScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSEnemyActionScript); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSEnemyActionScript)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_16_PROLOG \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_EVENT_PARMS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_CALLBACK_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class UUPSEnemyActionScript>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionScripts_UPSEnemyActionScript_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
