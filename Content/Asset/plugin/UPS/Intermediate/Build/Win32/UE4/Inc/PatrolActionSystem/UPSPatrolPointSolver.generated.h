// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AUPSPatrolPoint;
struct FPatrolPointLink;
class ACharacter;
#ifdef PATROLACTIONSYSTEM_UPSPatrolPointSolver_generated_h
#error "UPSPatrolPointSolver.generated.h already included, missing '#pragma once' in UPSPatrolPointSolver.h"
#endif
#define PATROLACTIONSYSTEM_UPSPatrolPointSolver_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_RPC_WRAPPERS \
	virtual AUPSPatrolPoint* SelectPatrolPoint_Implementation(TArray<FPatrolPointLink>& PatrolPointLinks, AUPSPatrolPoint* ThisPatrolPoint, ACharacter* Character); \
 \
	DECLARE_FUNCTION(execSelectPatrolPoint) \
	{ \
		P_GET_TARRAY_REF(FPatrolPointLink,Z_Param_Out_PatrolPointLinks); \
		P_GET_OBJECT(AUPSPatrolPoint,Z_Param_ThisPatrolPoint); \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AUPSPatrolPoint**)Z_Param__Result=P_THIS->SelectPatrolPoint_Implementation(Z_Param_Out_PatrolPointLinks,Z_Param_ThisPatrolPoint,Z_Param_Character); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual AUPSPatrolPoint* SelectPatrolPoint_Implementation(TArray<FPatrolPointLink>& PatrolPointLinks, AUPSPatrolPoint* ThisPatrolPoint, ACharacter* Character); \
 \
	DECLARE_FUNCTION(execSelectPatrolPoint) \
	{ \
		P_GET_TARRAY_REF(FPatrolPointLink,Z_Param_Out_PatrolPointLinks); \
		P_GET_OBJECT(AUPSPatrolPoint,Z_Param_ThisPatrolPoint); \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AUPSPatrolPoint**)Z_Param__Result=P_THIS->SelectPatrolPoint_Implementation(Z_Param_Out_PatrolPointLinks,Z_Param_ThisPatrolPoint,Z_Param_Character); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_EVENT_PARMS \
	struct UPSPatrolPointSolver_eventSelectPatrolPoint_Parms \
	{ \
		TArray<FPatrolPointLink> PatrolPointLinks; \
		AUPSPatrolPoint* ThisPatrolPoint; \
		ACharacter* Character; \
		AUPSPatrolPoint* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UPSPatrolPointSolver_eventSelectPatrolPoint_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_CALLBACK_WRAPPERS
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPSPatrolPointSolver(); \
	friend struct Z_Construct_UClass_UUPSPatrolPointSolver_Statics; \
public: \
	DECLARE_CLASS(UUPSPatrolPointSolver, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSPatrolPointSolver)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUUPSPatrolPointSolver(); \
	friend struct Z_Construct_UClass_UUPSPatrolPointSolver_Statics; \
public: \
	DECLARE_CLASS(UUPSPatrolPointSolver, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSPatrolPointSolver)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSPatrolPointSolver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSPatrolPointSolver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSPatrolPointSolver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSPatrolPointSolver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSPatrolPointSolver(UUPSPatrolPointSolver&&); \
	NO_API UUPSPatrolPointSolver(const UUPSPatrolPointSolver&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSPatrolPointSolver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSPatrolPointSolver(UUPSPatrolPointSolver&&); \
	NO_API UUPSPatrolPointSolver(const UUPSPatrolPointSolver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSPatrolPointSolver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSPatrolPointSolver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSPatrolPointSolver)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_18_PROLOG \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_EVENT_PARMS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_CALLBACK_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_CALLBACK_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class UUPSPatrolPointSolver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_PatrolPointSolver_UPSPatrolPointSolver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
