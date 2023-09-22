// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef PATROLACTIONSYSTEM_UPSActionCondition_generated_h
#error "UPSActionCondition.generated.h already included, missing '#pragma once' in UPSActionCondition.h"
#endif
#define PATROLACTIONSYSTEM_UPSActionCondition_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_RPC_WRAPPERS \
	virtual bool InternalCheckCondition_Implementation(ACharacter* Character); \
 \
	DECLARE_FUNCTION(execInternalCheckCondition) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->InternalCheckCondition_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool InternalCheckCondition_Implementation(ACharacter* Character); \
 \
	DECLARE_FUNCTION(execInternalCheckCondition) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->InternalCheckCondition_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_EVENT_PARMS \
	struct UPSActionCondition_eventInternalCheckCondition_Parms \
	{ \
		ACharacter* Character; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UPSActionCondition_eventInternalCheckCondition_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_CALLBACK_WRAPPERS
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPSActionCondition(); \
	friend struct Z_Construct_UClass_UUPSActionCondition_Statics; \
public: \
	DECLARE_CLASS(UUPSActionCondition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSActionCondition)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUUPSActionCondition(); \
	friend struct Z_Construct_UClass_UUPSActionCondition_Statics; \
public: \
	DECLARE_CLASS(UUPSActionCondition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSActionCondition)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSActionCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSActionCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSActionCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSActionCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSActionCondition(UUPSActionCondition&&); \
	NO_API UUPSActionCondition(const UUPSActionCondition&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSActionCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSActionCondition(UUPSActionCondition&&); \
	NO_API UUPSActionCondition(const UUPSActionCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSActionCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSActionCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSActionCondition)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_16_PROLOG \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_EVENT_PARMS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_CALLBACK_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_CALLBACK_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class UUPSActionCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyActionConditions_UPSActionCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
