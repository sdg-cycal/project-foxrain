// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATROLACTIONSYSTEM_UPSCheatManager_generated_h
#error "UPSCheatManager.generated.h already included, missing '#pragma once' in UPSCheatManager.h"
#endif
#define PATROLACTIONSYSTEM_UPSCheatManager_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_SPARSE_DATA
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUPS_DisablePointActionsDebug) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UPS_DisablePointActionsDebug(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUPS_EnablePointActionsDebug) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UPS_EnablePointActionsDebug(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUPS_DisableGroupMovementDebug) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UPS_DisableGroupMovementDebug(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUPS_EnableGroupMovementDebug) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UPS_EnableGroupMovementDebug(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUPS_DisablePatrolVisualization) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UPS_DisablePatrolVisualization(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUPS_EnablePatrolVisualization) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UPS_EnablePatrolVisualization(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUPS_DisablePointActionsDebug) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UPS_DisablePointActionsDebug(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUPS_EnablePointActionsDebug) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UPS_EnablePointActionsDebug(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUPS_DisableGroupMovementDebug) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UPS_DisableGroupMovementDebug(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUPS_EnableGroupMovementDebug) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UPS_EnableGroupMovementDebug(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUPS_DisablePatrolVisualization) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UPS_DisablePatrolVisualization(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUPS_EnablePatrolVisualization) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UPS_EnablePatrolVisualization(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPSCheatManager(); \
	friend struct Z_Construct_UClass_UUPSCheatManager_Statics; \
public: \
	DECLARE_CLASS(UUPSCheatManager, UCheatManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSCheatManager)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUUPSCheatManager(); \
	friend struct Z_Construct_UClass_UUPSCheatManager_Statics; \
public: \
	DECLARE_CLASS(UUPSCheatManager, UCheatManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSCheatManager)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSCheatManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSCheatManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSCheatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSCheatManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSCheatManager(UUPSCheatManager&&); \
	NO_API UUPSCheatManager(const UUPSCheatManager&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSCheatManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSCheatManager(UUPSCheatManager&&); \
	NO_API UUPSCheatManager(const UUPSCheatManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSCheatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSCheatManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSCheatManager)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_13_PROLOG
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class UUPSCheatManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSCheatManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
