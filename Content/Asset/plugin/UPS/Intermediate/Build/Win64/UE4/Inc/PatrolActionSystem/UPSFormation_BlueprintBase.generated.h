// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
struct FVector;
class AActor;
#ifdef PATROLACTIONSYSTEM_UPSFormation_BlueprintBase_generated_h
#error "UPSFormation_BlueprintBase.generated.h already included, missing '#pragma once' in UPSFormation_BlueprintBase.h"
#endif
#define PATROLACTIONSYSTEM_UPSFormation_BlueprintBase_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_RPC_WRAPPERS
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_EVENT_PARMS \
	struct UPSFormation_BlueprintBase_eventK2_GetLocationInFormationForCharacter_Parms \
	{ \
		ACharacter* Character; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UPSFormation_BlueprintBase_eventK2_GetLocationInFormationForCharacter_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct UPSFormation_BlueprintBase_eventK2_InitFormation_Parms \
	{ \
		ACharacter* InLeaderCharacter; \
	}; \
	struct UPSFormation_BlueprintBase_eventK2_OnAddCharacterInGroup_Parms \
	{ \
		ACharacter* Character; \
	}; \
	struct UPSFormation_BlueprintBase_eventK2_OnLeaderCompleteMovement_Parms \
	{ \
		TEnumAsByte<EPathFollowingResult::Type> Result; \
	}; \
	struct UPSFormation_BlueprintBase_eventK2_OnLeaderStartMovementToNewActor_Parms \
	{ \
		AActor* NewActor; \
	}; \
	struct UPSFormation_BlueprintBase_eventK2_OnLeaderStartMovementToNewLocation_Parms \
	{ \
		FVector NewLocation; \
	}; \
	struct UPSFormation_BlueprintBase_eventK2_OnRemoveCharacterFromGroup_Parms \
	{ \
		ACharacter* Character; \
	};


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_CALLBACK_WRAPPERS
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUPSFormation_BlueprintBase(); \
	friend struct Z_Construct_UClass_AUPSFormation_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(AUPSFormation_BlueprintBase, AUPSGroupMovementFormation, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AUPSFormation_BlueprintBase)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAUPSFormation_BlueprintBase(); \
	friend struct Z_Construct_UClass_AUPSFormation_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(AUPSFormation_BlueprintBase, AUPSGroupMovementFormation, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AUPSFormation_BlueprintBase)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUPSFormation_BlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUPSFormation_BlueprintBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUPSFormation_BlueprintBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUPSFormation_BlueprintBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUPSFormation_BlueprintBase(AUPSFormation_BlueprintBase&&); \
	NO_API AUPSFormation_BlueprintBase(const AUPSFormation_BlueprintBase&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUPSFormation_BlueprintBase() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUPSFormation_BlueprintBase(AUPSFormation_BlueprintBase&&); \
	NO_API AUPSFormation_BlueprintBase(const AUPSFormation_BlueprintBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUPSFormation_BlueprintBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUPSFormation_BlueprintBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUPSFormation_BlueprintBase)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_16_PROLOG \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_EVENT_PARMS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_CALLBACK_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_CALLBACK_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class AUPSFormation_BlueprintBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_GroupMovement_Formations_UPSFormation_BlueprintBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
