// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUPSSettings;
#ifdef PATROLACTIONSYSTEM_UPSSettings_generated_h
#error "UPSSettings.generated.h already included, missing '#pragma once' in UPSSettings.h"
#endif
#define PATROLACTIONSYSTEM_UPSSettings_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_SPARSE_DATA
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSSettings**)Z_Param__Result=UUPSSettings::Get(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSSettings**)Z_Param__Result=UUPSSettings::Get(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPSSettings(); \
	friend struct Z_Construct_UClass_UUPSSettings_Statics; \
public: \
	DECLARE_CLASS(UUPSSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("UPSSettings");} \



#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUUPSSettings(); \
	friend struct Z_Construct_UClass_UUPSSettings_Statics; \
public: \
	DECLARE_CLASS(UUPSSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("UPSSettings");} \



#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSSettings(UUPSSettings&&); \
	NO_API UUPSSettings(const UUPSSettings&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSSettings(UUPSSettings&&); \
	NO_API UUPSSettings(const UUPSSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSSettings)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_17_PROLOG
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class UUPSSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
