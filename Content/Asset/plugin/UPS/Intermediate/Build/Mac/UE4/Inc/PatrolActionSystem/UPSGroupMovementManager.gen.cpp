// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/GroupMovement/UPSGroupMovementManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSGroupMovementManager() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSGroupMovementManager_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSGroupMovementManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSGroupMovementManager_GetGroupMovementManager();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroup();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSMovementGroup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroupLeaderFromMember();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroups();
// End Cross Module References
	void UUPSGroupMovementManager::StaticRegisterNativesUUPSGroupMovementManager()
	{
		UClass* Class = UUPSGroupMovementManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGroupMovementManager", &UUPSGroupMovementManager::execGetGroupMovementManager },
			{ "GetMovementGroup", &UUPSGroupMovementManager::execGetMovementGroup },
			{ "GetMovementGroupLeaderFromMember", &UUPSGroupMovementManager::execGetMovementGroupLeaderFromMember },
			{ "GetMovementGroups", &UUPSGroupMovementManager::execGetMovementGroups },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUPSGroupMovementManager_GetGroupMovementManager_Statics
	{
		struct UPSGroupMovementManager_eventGetGroupMovementManager_Parms
		{
			UUPSGroupMovementManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSGroupMovementManager_GetGroupMovementManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSGroupMovementManager_eventGetGroupMovementManager_Parms, ReturnValue), Z_Construct_UClass_UUPSGroupMovementManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSGroupMovementManager_GetGroupMovementManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSGroupMovementManager_GetGroupMovementManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSGroupMovementManager_GetGroupMovementManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSGroupMovement" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSGroupMovementManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSGroupMovementManager_GetGroupMovementManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSGroupMovementManager, nullptr, "GetGroupMovementManager", nullptr, nullptr, sizeof(UPSGroupMovementManager_eventGetGroupMovementManager_Parms), Z_Construct_UFunction_UUPSGroupMovementManager_GetGroupMovementManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSGroupMovementManager_GetGroupMovementManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSGroupMovementManager_GetGroupMovementManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSGroupMovementManager_GetGroupMovementManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSGroupMovementManager_GetGroupMovementManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSGroupMovementManager_GetGroupMovementManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroup_Statics
	{
		struct UPSGroupMovementManager_eventGetMovementGroup_Parms
		{
			ACharacter* MovementGroupLeaderCharacter;
			AUPSMovementGroup* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementGroupLeaderCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSGroupMovementManager_eventGetMovementGroup_Parms, ReturnValue), Z_Construct_UClass_AUPSMovementGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroup_Statics::NewProp_MovementGroupLeaderCharacter = { "MovementGroupLeaderCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSGroupMovementManager_eventGetMovementGroup_Parms, MovementGroupLeaderCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroup_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroup_Statics::NewProp_MovementGroupLeaderCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSGroupMovement" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSGroupMovementManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSGroupMovementManager, nullptr, "GetMovementGroup", nullptr, nullptr, sizeof(UPSGroupMovementManager_eventGetMovementGroup_Parms), Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroupLeaderFromMember_Statics
	{
		struct UPSGroupMovementManager_eventGetMovementGroupLeaderFromMember_Parms
		{
			ACharacter* GroupMember;
			ACharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GroupMember;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroupLeaderFromMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSGroupMovementManager_eventGetMovementGroupLeaderFromMember_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroupLeaderFromMember_Statics::NewProp_GroupMember = { "GroupMember", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSGroupMovementManager_eventGetMovementGroupLeaderFromMember_Parms, GroupMember), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroupLeaderFromMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroupLeaderFromMember_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroupLeaderFromMember_Statics::NewProp_GroupMember,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroupLeaderFromMember_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSGroupMovement" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSGroupMovementManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroupLeaderFromMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSGroupMovementManager, nullptr, "GetMovementGroupLeaderFromMember", nullptr, nullptr, sizeof(UPSGroupMovementManager_eventGetMovementGroupLeaderFromMember_Parms), Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroupLeaderFromMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroupLeaderFromMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroupLeaderFromMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroupLeaderFromMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroupLeaderFromMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroupLeaderFromMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroups_Statics
	{
		struct UPSGroupMovementManager_eventGetMovementGroups_Parms
		{
			TArray<AUPSMovementGroup*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSGroupMovementManager_eventGetMovementGroups_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroups_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AUPSMovementGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroups_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroups_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroups_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSGroupMovement" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSGroupMovementManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUPSGroupMovementManager, nullptr, "GetMovementGroups", nullptr, nullptr, sizeof(UPSGroupMovementManager_eventGetMovementGroups_Parms), Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUPSGroupMovementManager_NoRegister()
	{
		return UUPSGroupMovementManager::StaticClass();
	}
	struct Z_Construct_UClass_UUPSGroupMovementManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSGroupMovementManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUPSGroupMovementManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPSGroupMovementManager_GetGroupMovementManager, "GetGroupMovementManager" }, // 2097201962
		{ &Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroup, "GetMovementGroup" }, // 2386630620
		{ &Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroupLeaderFromMember, "GetMovementGroupLeaderFromMember" }, // 421158993
		{ &Z_Construct_UFunction_UUPSGroupMovementManager_GetMovementGroups, "GetMovementGroups" }, // 3847057563
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSGroupMovementManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nAllow get movement group from leader or get all movement groups on level\n*/" },
		{ "IncludePath", "GroupMovement/UPSGroupMovementManager.h" },
		{ "ModuleRelativePath", "Public/GroupMovement/UPSGroupMovementManager.h" },
		{ "ToolTip", "Allow get movement group from leader or get all movement groups on level" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSGroupMovementManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSGroupMovementManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSGroupMovementManager_Statics::ClassParams = {
		&UUPSGroupMovementManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSGroupMovementManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSGroupMovementManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSGroupMovementManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSGroupMovementManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSGroupMovementManager, 2272057736);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSGroupMovementManager>()
	{
		return UUPSGroupMovementManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSGroupMovementManager(Z_Construct_UClass_UUPSGroupMovementManager, &UUPSGroupMovementManager::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSGroupMovementManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSGroupMovementManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
