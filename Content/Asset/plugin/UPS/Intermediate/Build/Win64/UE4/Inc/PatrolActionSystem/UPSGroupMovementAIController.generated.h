// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
#ifdef PATROLACTIONSYSTEM_UPSGroupMovementAIController_generated_h
#error "UPSGroupMovementAIController.generated.h already included, missing '#pragma once' in UPSGroupMovementAIController.h"
#endif
#define PATROLACTIONSYSTEM_UPSGroupMovementAIController_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_15_DELEGATE \
struct _Script_PatrolActionSystem_eventOnAIStartMovementToActor_Parms \
{ \
	AActor* NewActor; \
}; \
static inline void FOnAIStartMovementToActor_DelegateWrapper(const FMulticastScriptDelegate& OnAIStartMovementToActor, AActor* NewActor) \
{ \
	_Script_PatrolActionSystem_eventOnAIStartMovementToActor_Parms Parms; \
	Parms.NewActor=NewActor; \
	OnAIStartMovementToActor.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_14_DELEGATE \
struct _Script_PatrolActionSystem_eventOnAIStartMovementToLocation_Parms \
{ \
	FVector NewLocation; \
}; \
static inline void FOnAIStartMovementToLocation_DelegateWrapper(const FMulticastScriptDelegate& OnAIStartMovementToLocation, FVector NewLocation) \
{ \
	_Script_PatrolActionSystem_eventOnAIStartMovementToLocation_Parms Parms; \
	Parms.NewLocation=NewLocation; \
	OnAIStartMovementToLocation.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_RPC_WRAPPERS
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUPSGroupMovementAIController(); \
	friend struct Z_Construct_UClass_AUPSGroupMovementAIController_Statics; \
public: \
	DECLARE_CLASS(AUPSGroupMovementAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AUPSGroupMovementAIController)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAUPSGroupMovementAIController(); \
	friend struct Z_Construct_UClass_AUPSGroupMovementAIController_Statics; \
public: \
	DECLARE_CLASS(AUPSGroupMovementAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AUPSGroupMovementAIController)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUPSGroupMovementAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUPSGroupMovementAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUPSGroupMovementAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUPSGroupMovementAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUPSGroupMovementAIController(AUPSGroupMovementAIController&&); \
	NO_API AUPSGroupMovementAIController(const AUPSGroupMovementAIController&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUPSGroupMovementAIController(AUPSGroupMovementAIController&&); \
	NO_API AUPSGroupMovementAIController(const AUPSGroupMovementAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUPSGroupMovementAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUPSGroupMovementAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUPSGroupMovementAIController)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_17_PROLOG
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class AUPSGroupMovementAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_AI_UPSGroupMovementAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
