// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AUPSMovementGroup;
class ACharacter;
class UUPSGroupMovementManager;
#ifdef PATROLACTIONSYSTEM_UPSGroupMovementManager_generated_h
#error "UPSGroupMovementManager.generated.h already included, missing '#pragma once' in UPSGroupMovementManager.h"
#endif
#define PATROLACTIONSYSTEM_UPSGroupMovementManager_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMovementGroups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AUPSMovementGroup*>*)Z_Param__Result=P_THIS->GetMovementGroups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementGroupLeaderFromMember) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_GroupMember); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ACharacter**)Z_Param__Result=P_THIS->GetMovementGroupLeaderFromMember(Z_Param_GroupMember); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementGroup) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_MovementGroupLeaderCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AUPSMovementGroup**)Z_Param__Result=P_THIS->GetMovementGroup(Z_Param_MovementGroupLeaderCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGroupMovementManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSGroupMovementManager**)Z_Param__Result=UUPSGroupMovementManager::GetGroupMovementManager(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMovementGroups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AUPSMovementGroup*>*)Z_Param__Result=P_THIS->GetMovementGroups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementGroupLeaderFromMember) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_GroupMember); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ACharacter**)Z_Param__Result=P_THIS->GetMovementGroupLeaderFromMember(Z_Param_GroupMember); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementGroup) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_MovementGroupLeaderCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AUPSMovementGroup**)Z_Param__Result=P_THIS->GetMovementGroup(Z_Param_MovementGroupLeaderCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGroupMovementManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSGroupMovementManager**)Z_Param__Result=UUPSGroupMovementManager::GetGroupMovementManager(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPSGroupMovementManager(); \
	friend struct Z_Construct_UClass_UUPSGroupMovementManager_Statics; \
public: \
	DECLARE_CLASS(UUPSGroupMovementManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSGroupMovementManager)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUUPSGroupMovementManager(); \
	friend struct Z_Construct_UClass_UUPSGroupMovementManager_Statics; \
public: \
	DECLARE_CLASS(UUPSGroupMovementManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSGroupMovementManager)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSGroupMovementManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSGroupMovementManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSGroupMovementManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSGroupMovementManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSGroupMovementManager(UUPSGroupMovementManager&&); \
	NO_API UUPSGroupMovementManager(const UUPSGroupMovementManager&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSGroupMovementManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSGroupMovementManager(UUPSGroupMovementManager&&); \
	NO_API UUPSGroupMovementManager(const UUPSGroupMovementManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSGroupMovementManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSGroupMovementManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSGroupMovementManager)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_17_PROLOG
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class UUPSGroupMovementManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_UPSGroupMovementManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
