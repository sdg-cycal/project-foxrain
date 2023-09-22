// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/Components/UPSPatrolComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSPatrolComponent() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSPatrolComponent_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSPatrolComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSPatrolComponent_GetCurrentPatrolPoint();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSPatrolPoint_NoRegister();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSPatrolComponent_SetPatrolMovementType();
	PATROLACTIONSYSTEM_API UEnum* Z_Construct_UEnum_PatrolActionSystem_EPatrolMovementType();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSPatrolComponent_UpdateMovementPatrolPoint();
// End Cross Module References
	void UUPSPatrolComponent::StaticRegisterNativesUUPSPatrolComponent()
	{
		UClass* Class = UUPSPatrolComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentPatrolPoint", &UUPSPatrolComponent::execGetCurrentPatrolPoint },
			{ "SetPatrolMovementType", &UUPSPatrolComponent::execSetPatrolMovementType },
			{ "UpdateMovementPatrolPoint", &UUPSPatrolComponent::execUpdateMovementPatrolPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUPSPatrolComponent_GetCurrentPatrolPoint_Statics
	{
		struct UPSPatrolComponent_eventGetCurrentPatrolPoint_Parms
		{
			AUPSPatrolPoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPatrolComponent_GetCurrentPatrolPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolComponent_eventGetCurrentPatrolPoint_Parms, ReturnValue), Z_Construct_UClass_AUPSPatrolPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSPatrolComponent_GetCurrentPatrolPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolComponent_GetCurrentPatrolPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSPatrolComponent_GetCurrentPatrolPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/Components/UPSPatrolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSPatrolComponent_GetCurrentPatrolPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSPatrolComponent, nullptr, "GetCurrentPatrolPoint", nullptr, nullptr, sizeof(UPSPatrolComponent_eventGetCurrentPatrolPoint_Parms), Z_Construct_UFunction_UUPSPatrolComponent_GetCurrentPatrolPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolComponent_GetCurrentPatrolPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSPatrolComponent_GetCurrentPatrolPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolComponent_GetCurrentPatrolPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSPatrolComponent_GetCurrentPatrolPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSPatrolComponent_GetCurrentPatrolPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSPatrolComponent_SetPatrolMovementType_Statics
	{
		struct UPSPatrolComponent_eventSetPatrolMovementType_Parms
		{
			EPatrolMovementType MovementType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUPSPatrolComponent_SetPatrolMovementType_Statics::NewProp_MovementType = { "MovementType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolComponent_eventSetPatrolMovementType_Parms, MovementType), Z_Construct_UEnum_PatrolActionSystem_EPatrolMovementType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUPSPatrolComponent_SetPatrolMovementType_Statics::NewProp_MovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSPatrolComponent_SetPatrolMovementType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolComponent_SetPatrolMovementType_Statics::NewProp_MovementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolComponent_SetPatrolMovementType_Statics::NewProp_MovementType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSPatrolComponent_SetPatrolMovementType_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/Components/UPSPatrolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSPatrolComponent_SetPatrolMovementType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSPatrolComponent, nullptr, "SetPatrolMovementType", nullptr, nullptr, sizeof(UPSPatrolComponent_eventSetPatrolMovementType_Parms), Z_Construct_UFunction_UUPSPatrolComponent_SetPatrolMovementType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolComponent_SetPatrolMovementType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSPatrolComponent_SetPatrolMovementType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolComponent_SetPatrolMovementType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSPatrolComponent_SetPatrolMovementType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSPatrolComponent_SetPatrolMovementType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSPatrolComponent_UpdateMovementPatrolPoint_Statics
	{
		struct UPSPatrolComponent_eventUpdateMovementPatrolPoint_Parms
		{
			AUPSPatrolPoint* PatrolPoint;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatrolPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSPatrolComponent_UpdateMovementPatrolPoint_Statics::NewProp_PatrolPoint = { "PatrolPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPatrolComponent_eventUpdateMovementPatrolPoint_Parms, PatrolPoint), Z_Construct_UClass_AUPSPatrolPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSPatrolComponent_UpdateMovementPatrolPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSPatrolComponent_UpdateMovementPatrolPoint_Statics::NewProp_PatrolPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSPatrolComponent_UpdateMovementPatrolPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPatrolSystem" },
		{ "Comment", "/*UActorComponent End*/" },
		{ "ModuleRelativePath", "Public/Components/UPSPatrolComponent.h" },
		{ "ToolTip", "UActorComponent End" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSPatrolComponent_UpdateMovementPatrolPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSPatrolComponent, nullptr, "UpdateMovementPatrolPoint", nullptr, nullptr, sizeof(UPSPatrolComponent_eventUpdateMovementPatrolPoint_Parms), Z_Construct_UFunction_UUPSPatrolComponent_UpdateMovementPatrolPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolComponent_UpdateMovementPatrolPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSPatrolComponent_UpdateMovementPatrolPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSPatrolComponent_UpdateMovementPatrolPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSPatrolComponent_UpdateMovementPatrolPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSPatrolComponent_UpdateMovementPatrolPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUPSPatrolComponent_NoRegister()
	{
		return UUPSPatrolComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUPSPatrolComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPatrolPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentPatrolPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableVisualization_MetaData[];
#endif
		static void NewProp_bDisableVisualization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableVisualization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolMovementDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PatrolMovementDirection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PatrolMovementDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialMovementPatrolPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitialMovementPatrolPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSPatrolComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUPSPatrolComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPSPatrolComponent_GetCurrentPatrolPoint, "GetCurrentPatrolPoint" }, // 3886933009
		{ &Z_Construct_UFunction_UUPSPatrolComponent_SetPatrolMovementType, "SetPatrolMovementType" }, // 1665248733
		{ &Z_Construct_UFunction_UUPSPatrolComponent_UpdateMovementPatrolPoint, "UpdateMovementPatrolPoint" }, // 643492295
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSPatrolComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Collision", "" },
		{ "Comment", "/*\nContains settings for the patrol, sets the settings in blackboard.\n\n-InitialMovementPatrolPoint - the first patrol point for movement\n-PatrolMovementDirection - direction of movement, clockwise or counterclockwise\n\nThe direction of movement, or the next patrol point can be set using the functions:\nUUPSPatrolComponent :: UpdateMovementPatrolPoint\nUUPSPatrolComponent :: SetPatrolMovementType\n\nThe current patrol point is written to the blackboard by key\nUUPSSettings :: Get () -> PatrolComponentBBName\n\nThe key can be changed in ProjectSettings\n*/" },
		{ "DisplayName", "PatrolComponent" },
		{ "HideCategories", "Activation" },
		{ "IncludePath", "Components/UPSPatrolComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/UPSPatrolComponent.h" },
		{ "ToolTip", "Contains settings for the patrol, sets the settings in blackboard.\n\n-InitialMovementPatrolPoint - the first patrol point for movement\n-PatrolMovementDirection - direction of movement, clockwise or counterclockwise\n\nThe direction of movement, or the next patrol point can be set using the functions:\nUUPSPatrolComponent :: UpdateMovementPatrolPoint\nUUPSPatrolComponent :: SetPatrolMovementType\n\nThe current patrol point is written to the blackboard by key\nUUPSSettings :: Get () -> PatrolComponentBBName\n\nThe key can be changed in ProjectSettings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_CurrentPatrolPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/UPSPatrolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_CurrentPatrolPoint = { "CurrentPatrolPoint", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSPatrolComponent, CurrentPatrolPoint), Z_Construct_UClass_AUPSPatrolPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_CurrentPatrolPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_CurrentPatrolPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_bDisableVisualization_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UPSPatrolSystem" },
		{ "ModuleRelativePath", "Public/Components/UPSPatrolComponent.h" },
	};
#endif
	void Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_bDisableVisualization_SetBit(void* Obj)
	{
		((UUPSPatrolComponent*)Obj)->bDisableVisualization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_bDisableVisualization = { "bDisableVisualization", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUPSPatrolComponent), &Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_bDisableVisualization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_bDisableVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_bDisableVisualization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_PatrolMovementDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UPSPatrolSystem" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Components/UPSPatrolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_PatrolMovementDirection = { "PatrolMovementDirection", nullptr, (EPropertyFlags)0x0011000000000815, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSPatrolComponent, PatrolMovementDirection), Z_Construct_UEnum_PatrolActionSystem_EPatrolMovementType, METADATA_PARAMS(Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_PatrolMovementDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_PatrolMovementDirection_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_PatrolMovementDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_InitialMovementPatrolPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UPSPatrolSystem" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Components/UPSPatrolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_InitialMovementPatrolPoint = { "InitialMovementPatrolPoint", nullptr, (EPropertyFlags)0x0011000000000815, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSPatrolComponent, InitialMovementPatrolPoint), Z_Construct_UClass_AUPSPatrolPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_InitialMovementPatrolPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_InitialMovementPatrolPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPSPatrolComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_CurrentPatrolPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_bDisableVisualization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_PatrolMovementDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_PatrolMovementDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSPatrolComponent_Statics::NewProp_InitialMovementPatrolPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSPatrolComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSPatrolComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSPatrolComponent_Statics::ClassParams = {
		&UUPSPatrolComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUPSPatrolComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSPatrolComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSPatrolComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSPatrolComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSPatrolComponent, 707347683);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSPatrolComponent>()
	{
		return UUPSPatrolComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSPatrolComponent(Z_Construct_UClass_UUPSPatrolComponent, &UUPSPatrolComponent::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSPatrolComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSPatrolComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
