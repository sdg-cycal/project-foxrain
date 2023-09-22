// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class UAnimMontage;
struct FPatrolPointScript;
class UUPSPatrolPointScript;
struct FEnemyActionSelector;
class UUPSEnemyAction;
#ifdef PATROLACTIONSYSTEM_UPSFunctionLIbrary_generated_h
#error "UPSFunctionLIbrary.generated.h already included, missing '#pragma once' in UPSFunctionLIbrary.h"
#endif
#define PATROLACTIONSYSTEM_UPSFunctionLIbrary_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_SPARSE_DATA
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJumpToMontageSectionByIndex) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UUPSFunctionLIbrary::JumpToMontageSectionByIndex(Z_Param_Character,Z_Param_Montage,Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatePatrolScriptIntance) \
	{ \
		P_GET_STRUCT(FPatrolPointScript,Z_Param_Script); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSPatrolPointScript**)Z_Param__Result=UUPSFunctionLIbrary::CreatePatrolScriptIntance(Z_Param_Script); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnemyActionFromSelector) \
	{ \
		P_GET_STRUCT(FEnemyActionSelector,Z_Param_EnemyActionSelector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSEnemyAction**)Z_Param__Result=UUPSFunctionLIbrary::GetEnemyActionFromSelector(Z_Param_EnemyActionSelector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMontageSectionIndexLength) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UUPSFunctionLIbrary::GetMontageSectionIndexLength(Z_Param_Montage,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMontageSectionLength) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UUPSFunctionLIbrary::GetMontageSectionLength(Z_Param_Montage,Z_Param_SectionName); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJumpToMontageSectionByIndex) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_Character); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UUPSFunctionLIbrary::JumpToMontageSectionByIndex(Z_Param_Character,Z_Param_Montage,Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatePatrolScriptIntance) \
	{ \
		P_GET_STRUCT(FPatrolPointScript,Z_Param_Script); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSPatrolPointScript**)Z_Param__Result=UUPSFunctionLIbrary::CreatePatrolScriptIntance(Z_Param_Script); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnemyActionFromSelector) \
	{ \
		P_GET_STRUCT(FEnemyActionSelector,Z_Param_EnemyActionSelector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUPSEnemyAction**)Z_Param__Result=UUPSFunctionLIbrary::GetEnemyActionFromSelector(Z_Param_EnemyActionSelector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMontageSectionIndexLength) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UUPSFunctionLIbrary::GetMontageSectionIndexLength(Z_Param_Montage,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMontageSectionLength) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UUPSFunctionLIbrary::GetMontageSectionLength(Z_Param_Montage,Z_Param_SectionName); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPSFunctionLIbrary(); \
	friend struct Z_Construct_UClass_UUPSFunctionLIbrary_Statics; \
public: \
	DECLARE_CLASS(UUPSFunctionLIbrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSFunctionLIbrary)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUUPSFunctionLIbrary(); \
	friend struct Z_Construct_UClass_UUPSFunctionLIbrary_Statics; \
public: \
	DECLARE_CLASS(UUPSFunctionLIbrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PatrolActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UUPSFunctionLIbrary)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSFunctionLIbrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSFunctionLIbrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSFunctionLIbrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSFunctionLIbrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSFunctionLIbrary(UUPSFunctionLIbrary&&); \
	NO_API UUPSFunctionLIbrary(const UUPSFunctionLIbrary&); \
public:


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPSFunctionLIbrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUPSFunctionLIbrary(UUPSFunctionLIbrary&&); \
	NO_API UUPSFunctionLIbrary(const UUPSFunctionLIbrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPSFunctionLIbrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPSFunctionLIbrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPSFunctionLIbrary)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_19_PROLOG
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_SPARSE_DATA \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATROLACTIONSYSTEM_API UClass* StaticClass<class UUPSFunctionLIbrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UPS_Source_PatrolActionSystem_Public_Utils_UPSFunctionLIbrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
