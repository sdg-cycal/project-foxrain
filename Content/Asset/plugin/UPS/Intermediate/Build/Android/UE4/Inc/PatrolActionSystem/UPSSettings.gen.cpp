// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/Utils/UPSSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSSettings() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSSettings_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSSettings_Get();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
	void UUPSSettings::StaticRegisterNativesUUPSSettings()
	{
		UClass* Class = UUPSSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &UUPSSettings::execGet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUPSSettings_Get_Statics
	{
		struct UPSSettings_eventGet_Parms
		{
			UUPSSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSSettings_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSSettings_eventGet_Parms, ReturnValue), Z_Construct_UClass_UUPSSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSSettings_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSSettings_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSSettings_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSSettings" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSSettings_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSSettings, nullptr, "Get", nullptr, nullptr, sizeof(UPSSettings_eventGet_Parms), Z_Construct_UFunction_UUPSSettings_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSSettings_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSSettings_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSSettings_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSSettings_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSSettings_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUPSSettings_NoRegister()
	{
		return UUPSSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUPSSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPatrolPointBBName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurrentPatrolPointBBName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugPointActionLineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugPointActionLineThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugPointActionArrowSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugPointActionArrowSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugPointActionColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugPointActionColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugPointActionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugPointActionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyActionPointComponentBillboardSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EnemyActionPointComponentBillboardSprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyActionPointComponentMeshMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EnemyActionPointComponentMeshMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyActionPointComponentMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EnemyActionPointComponentMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckDistanceBetweenPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CheckDistanceBetweenPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolBuilderTraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PatrolBuilderTraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyToAddNewPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyToAddNewPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceBetweenArrows_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceBetweenArrows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArrowMovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPointSmallArrowSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PatrolPointSmallArrowSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPointArrowSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PatrolPointArrowSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPointArrowOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PatrolPointArrowOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorLinesThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ErrorLinesThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLinesThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultLinesThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorLineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorLineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineFromPatrolComponentOwnerColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineFromPatrolComponentOwnerColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinesBetweenPointsColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinesBetweenPointsColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathPointsColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathPointsColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUPSSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPSSettings_Get, "Get" }, // 2455396669
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Utils/UPSSettings.h" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_CurrentPatrolPointBBName_MetaData[] = {
		{ "Category", "BT Settings" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_CurrentPatrolPointBBName = { "CurrentPatrolPointBBName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, CurrentPatrolPointBBName), METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_CurrentPatrolPointBBName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_CurrentPatrolPointBBName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionLineThickness_MetaData[] = {
		{ "Category", "Enemy Point Action Component" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionLineThickness = { "DebugPointActionLineThickness", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, DebugPointActionLineThickness), METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionLineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionLineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionArrowSize_MetaData[] = {
		{ "Category", "Enemy Point Action Component" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionArrowSize = { "DebugPointActionArrowSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, DebugPointActionArrowSize), METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionArrowSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionArrowSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionColor_MetaData[] = {
		{ "Category", "Enemy Point Action Component" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionColor = { "DebugPointActionColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, DebugPointActionColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionOffset_MetaData[] = {
		{ "Category", "Enemy Point Action Component" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionOffset = { "DebugPointActionOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, DebugPointActionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_EnemyActionPointComponentBillboardSprite_MetaData[] = {
		{ "Category", "Enemy Point Action Component" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_EnemyActionPointComponentBillboardSprite = { "EnemyActionPointComponentBillboardSprite", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, EnemyActionPointComponentBillboardSprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_EnemyActionPointComponentBillboardSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_EnemyActionPointComponentBillboardSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_EnemyActionPointComponentMeshMaterial_MetaData[] = {
		{ "Category", "Enemy Point Action Component" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_EnemyActionPointComponentMeshMaterial = { "EnemyActionPointComponentMeshMaterial", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, EnemyActionPointComponentMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_EnemyActionPointComponentMeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_EnemyActionPointComponentMeshMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_EnemyActionPointComponentMesh_MetaData[] = {
		{ "Category", "Enemy Point Action Component" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_EnemyActionPointComponentMesh = { "EnemyActionPointComponentMesh", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, EnemyActionPointComponentMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_EnemyActionPointComponentMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_EnemyActionPointComponentMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_CheckDistanceBetweenPoints_MetaData[] = {
		{ "Category", "Patrol Builder" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_CheckDistanceBetweenPoints = { "CheckDistanceBetweenPoints", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, CheckDistanceBetweenPoints), METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_CheckDistanceBetweenPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_CheckDistanceBetweenPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolBuilderTraceChannel_MetaData[] = {
		{ "Category", "Patrol Builder" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolBuilderTraceChannel = { "PatrolBuilderTraceChannel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, PatrolBuilderTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolBuilderTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolBuilderTraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_KeyToAddNewPoint_MetaData[] = {
		{ "Category", "Patrol Builder" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_KeyToAddNewPoint = { "KeyToAddNewPoint", nullptr, (EPropertyFlags)0x0010000000004015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, KeyToAddNewPoint), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_KeyToAddNewPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_KeyToAddNewPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_DistanceBetweenArrows_MetaData[] = {
		{ "Category", "Patrol Point" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_DistanceBetweenArrows = { "DistanceBetweenArrows", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, DistanceBetweenArrows), METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_DistanceBetweenArrows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_DistanceBetweenArrows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_ArrowMovementSpeed_MetaData[] = {
		{ "Category", "Patrol Point" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_ArrowMovementSpeed = { "ArrowMovementSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, ArrowMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_ArrowMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_ArrowMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolPointSmallArrowSize_MetaData[] = {
		{ "Category", "Patrol Point" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolPointSmallArrowSize = { "PatrolPointSmallArrowSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, PatrolPointSmallArrowSize), METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolPointSmallArrowSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolPointSmallArrowSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolPointArrowSize_MetaData[] = {
		{ "Category", "Patrol Point" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolPointArrowSize = { "PatrolPointArrowSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, PatrolPointArrowSize), METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolPointArrowSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolPointArrowSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolPointArrowOffset_MetaData[] = {
		{ "Category", "Patrol Point" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolPointArrowOffset = { "PatrolPointArrowOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, PatrolPointArrowOffset), METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolPointArrowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolPointArrowOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_ErrorLinesThickness_MetaData[] = {
		{ "Category", "Patrol Point" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_ErrorLinesThickness = { "ErrorLinesThickness", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, ErrorLinesThickness), METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_ErrorLinesThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_ErrorLinesThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_DefaultLinesThickness_MetaData[] = {
		{ "Category", "Patrol Point" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_DefaultLinesThickness = { "DefaultLinesThickness", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, DefaultLinesThickness), METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_DefaultLinesThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_DefaultLinesThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_ErrorLineColor_MetaData[] = {
		{ "Category", "Patrol Point" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_ErrorLineColor = { "ErrorLineColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, ErrorLineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_ErrorLineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_ErrorLineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_LineFromPatrolComponentOwnerColor_MetaData[] = {
		{ "Category", "Patrol Point" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_LineFromPatrolComponentOwnerColor = { "LineFromPatrolComponentOwnerColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, LineFromPatrolComponentOwnerColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_LineFromPatrolComponentOwnerColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_LineFromPatrolComponentOwnerColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_LinesBetweenPointsColor_MetaData[] = {
		{ "Category", "Patrol Point" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_LinesBetweenPointsColor = { "LinesBetweenPointsColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, LinesBetweenPointsColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_LinesBetweenPointsColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_LinesBetweenPointsColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSSettings_Statics::NewProp_PathPointsColor_MetaData[] = {
		{ "Category", "Patrol Point" },
		{ "ModuleRelativePath", "Public/Utils/UPSSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPSSettings_Statics::NewProp_PathPointsColor = { "PathPointsColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSSettings, PathPointsColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::NewProp_PathPointsColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::NewProp_PathPointsColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPSSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_CurrentPatrolPointBBName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionLineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionArrowSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_DebugPointActionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_EnemyActionPointComponentBillboardSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_EnemyActionPointComponentMeshMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_EnemyActionPointComponentMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_CheckDistanceBetweenPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolBuilderTraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_KeyToAddNewPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_DistanceBetweenArrows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_ArrowMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolPointSmallArrowSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolPointArrowSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_PatrolPointArrowOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_ErrorLinesThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_DefaultLinesThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_ErrorLineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_LineFromPatrolComponentOwnerColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_LinesBetweenPointsColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSSettings_Statics::NewProp_PathPointsColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSSettings_Statics::ClassParams = {
		&UUPSSettings::StaticClass,
		"UPSSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUPSSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSSettings, 2704040615);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSSettings>()
	{
		return UUPSSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSSettings(Z_Construct_UClass_UUPSSettings, &UUPSSettings::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
