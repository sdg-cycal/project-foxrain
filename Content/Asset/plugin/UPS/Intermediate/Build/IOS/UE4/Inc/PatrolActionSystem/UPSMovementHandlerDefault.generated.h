// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIController;
class UUPSAITask_AIRotateToTarget;
class ACharacter;
class UUPSMoveToEnemyPointAction;
#ifdef PATROLACTIONSYSTEM_UPSMovementHandlerDefault_generated_h
#error "UPSMovementHandlerDefault.generated.h already included, missing '#pragma once' in UPSMovementHandlerDefault.h"
#endif
#define PATROLACTIONSYSTEM_UPSMovementHandlerDefault_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_SPARSE_DATA
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCharacterRotatedToPoint) \
	{ \
		P_GET_OBJECT(AAIController,Z_Param_AIC); \
		P_GET_OBJECT(UUPSAITask_AIRotateToTarget,Z_Param_FinishedTask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCharacterRotatedToPoint(Z_Param_AIC,Z_Param_FinishedTask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCharacterReachPoint) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_GET_OBJECT(UUPSMoveToEnemyPointAction,Z_Param_MoveTask); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCharacterReachPoint(Z_Param_Character,Z_Param_MoveTask,EPathFollowingResult::Type(Z_Param_Result)); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCharacterRotatedToPoint) \
	{ \
		P_GET_OBJECT(AAIController,Z_Param_AIC); \
		P_GET_OBJECT(UUPSAITask_AIRotateToTarget,Z_Param_FinishedTask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCharacterRotatedToPoint(Z_Param_AIC,Z_Param_FinishedTask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCharacterReachPoint) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_GET_OBJECT(UUPSMoveToEnemyPointAction,Z_Param_MoveTask); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCharacterReachPoint(Z_Param_Character,Z_Param_MoveTask,EPathFollowingResult::Type(Z_Param_Result)); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUPSMovementHandlerDefault(); \
	friend struct Z_Construct_UClass_AUPSMovementHandlerDefault_Statics; \
public: \
	DECLARE_CLASS(AUPSMovementHandlerDefault, AUPSPointActionMovementHandler, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AUPSMovementHandlerDefault)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAUPSMovementHandlerDefault(); \
	friend struct Z_Construct_UClass_AUPSMovementHandlerDefault_Statics; \
public: \
	DECLARE_CLASS(AUPSMovementHandlerDefault, AUPSPointActionMovementHandler, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AUPSMovementHandlerDefault)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUPSMovementHandlerDefault(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUPSMovementHandlerDefault) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUPSMovementHandlerDefault); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUPSMovementHandlerDefault); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUPSMovementHandlerDefault(AUPSMovementHandlerDefault&&); \
	NO_API AUPSMovementHandlerDefault(const AUPSMovementHandlerDefault&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUPSMovementHandlerDefault() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUPSMovementHandlerDefault(AUPSMovementHandlerDefault&&); \
	NO_API AUPSMovementHandlerDefault(const AUPSMovementHandlerDefault&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUPSMovementHandlerDefault); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUPSMovementHandlerDefault); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUPSMovementHandlerDefault)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActiveGameplayTask() { return STRUCT_OFFSET(AUPSMovementHandlerDefault, ActiveGameplayTask); }


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_21_PROLOG
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class AUPSMovementHandlerDefault>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSMovementHandlerDefault_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
