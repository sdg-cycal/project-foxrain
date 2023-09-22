// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class UUPSEnemyPointActionComponent;
#ifdef PATROLACTIONSYSTEM_UPSPointActionMovementHandler_generated_h
#error "UPSPointActionMovementHandler.generated.h already included, missing '#pragma once' in UPSPointActionMovementHandler.h"
#endif
#define PATROLACTIONSYSTEM_UPSPointActionMovementHandler_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinishMovement) \
	{ \
		P_GET_UBOOL(Z_Param_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishMovement(Z_Param_bSuccess); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishMovement) \
	{ \
		P_GET_UBOOL(Z_Param_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishMovement(Z_Param_bSuccess); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_EVENT_PARMS \
	struct UPSPointActionMovementHandler_eventK2_CharacterAbortMovement_Parms \
	{ \
		ACharacter* Character; \
		UUPSEnemyPointActionComponent* Point; \
	}; \
	struct UPSPointActionMovementHandler_eventK2_CharacterStartMovement_Parms \
	{ \
		ACharacter* Character; \
		UUPSEnemyPointActionComponent* Point; \
	}; \
	struct UPSPointActionMovementHandler_eventK2_FinishMovement_Parms \
	{ \
		bool bSuccess; \
	};


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_CALLBACK_WRAPPERS
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUPSPointActionMovementHandler(); \
	friend struct Z_Construct_UClass_AUPSPointActionMovementHandler_Statics; \
public: \
	DECLARE_CLASS(AUPSPointActionMovementHandler, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AUPSPointActionMovementHandler)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAUPSPointActionMovementHandler(); \
	friend struct Z_Construct_UClass_AUPSPointActionMovementHandler_Statics; \
public: \
	DECLARE_CLASS(AUPSPointActionMovementHandler, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AUPSPointActionMovementHandler)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUPSPointActionMovementHandler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUPSPointActionMovementHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUPSPointActionMovementHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUPSPointActionMovementHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUPSPointActionMovementHandler(AUPSPointActionMovementHandler&&); \
	NO_API AUPSPointActionMovementHandler(const AUPSPointActionMovementHandler&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUPSPointActionMovementHandler(AUPSPointActionMovementHandler&&); \
	NO_API AUPSPointActionMovementHandler(const AUPSPointActionMovementHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUPSPointActionMovementHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUPSPointActionMovementHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUPSPointActionMovementHandler)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MovementCharacter() { return STRUCT_OFFSET(AUPSPointActionMovementHandler, MovementCharacter); } \
	FORCEINLINE static uint32 __PPO__PointActionComponent() { return STRUCT_OFFSET(AUPSPointActionMovementHandler, PointActionComponent); }


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_20_PROLOG \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_EVENT_PARMS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_CALLBACK_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_CALLBACK_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class AUPSPointActionMovementHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_EnemyPointActions_UPSPointActionMovementHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
