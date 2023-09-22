// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/Utils/UPSPatrolVisualizer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSPatrolVisualizer() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVisitedPoint();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSPatrolPoint_NoRegister();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FUPSPatrolComponentPathData();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FUPSPathData();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSPatrolComponent_NoRegister();
	PATROLACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FUPSPatrolPointPathData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSPatrolVisualizer_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSPatrolVisualizer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FVisitedPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATROLACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVisitedPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVisitedPoint, Z_Construct_UPackage__Script_PatrolActionSystem(), TEXT("VisitedPoint"), sizeof(FVisitedPoint), Get_Z_Construct_UScriptStruct_FVisitedPoint_Hash());
	}
	return Singleton;
}
template<> PATROLACTIONSYSTEM_API UScriptStruct* StaticStruct<FVisitedPoint>()
{
	return FVisitedPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVisitedPoint(FVisitedPoint::StaticStruct, TEXT("/Script/PatrolActionSystem"), TEXT("VisitedPoint"), false, nullptr, nullptr);
static struct FScriptStruct_PatrolActionSystem_StaticRegisterNativesFVisitedPoint
{
	FScriptStruct_PatrolActionSystem_StaticRegisterNativesFVisitedPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VisitedPoint")),new UScriptStruct::TCppStructOps<FVisitedPoint>);
	}
} ScriptStruct_PatrolActionSystem_StaticRegisterNativesFVisitedPoint;
	struct Z_Construct_UScriptStruct_FVisitedPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_SecondPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_FirstPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisitedPoint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolVisualizer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVisitedPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVisitedPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisitedPoint_Statics::NewProp_SecondPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolVisualizer.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FVisitedPoint_Statics::NewProp_SecondPoint = { "SecondPoint", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVisitedPoint, SecondPoint), Z_Construct_UClass_AUPSPatrolPoint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVisitedPoint_Statics::NewProp_SecondPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisitedPoint_Statics::NewProp_SecondPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisitedPoint_Statics::NewProp_FirstPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolVisualizer.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FVisitedPoint_Statics::NewProp_FirstPoint = { "FirstPoint", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVisitedPoint, FirstPoint), Z_Construct_UClass_AUPSPatrolPoint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVisitedPoint_Statics::NewProp_FirstPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisitedPoint_Statics::NewProp_FirstPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVisitedPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisitedPoint_Statics::NewProp_SecondPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisitedPoint_Statics::NewProp_FirstPoint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVisitedPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
		nullptr,
		&NewStructOps,
		"VisitedPoint",
		sizeof(FVisitedPoint),
		alignof(FVisitedPoint),
		Z_Construct_UScriptStruct_FVisitedPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisitedPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVisitedPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisitedPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVisitedPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVisitedPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PatrolActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VisitedPoint"), sizeof(FVisitedPoint), Get_Z_Construct_UScriptStruct_FVisitedPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVisitedPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVisitedPoint_Hash() { return 2126859595U; }
class UScriptStruct* FUPSPatrolComponentPathData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATROLACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUPSPatrolComponentPathData, Z_Construct_UPackage__Script_PatrolActionSystem(), TEXT("UPSPatrolComponentPathData"), sizeof(FUPSPatrolComponentPathData), Get_Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Hash());
	}
	return Singleton;
}
template<> PATROLACTIONSYSTEM_API UScriptStruct* StaticStruct<FUPSPatrolComponentPathData>()
{
	return FUPSPatrolComponentPathData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUPSPatrolComponentPathData(FUPSPatrolComponentPathData::StaticStruct, TEXT("/Script/PatrolActionSystem"), TEXT("UPSPatrolComponentPathData"), false, nullptr, nullptr);
static struct FScriptStruct_PatrolActionSystem_StaticRegisterNativesFUPSPatrolComponentPathData
{
	FScriptStruct_PatrolActionSystem_StaticRegisterNativesFUPSPatrolComponentPathData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UPSPatrolComponentPathData")),new UScriptStruct::TCppStructOps<FUPSPatrolComponentPathData>);
	}
} ScriptStruct_PatrolActionSystem_StaticRegisterNativesFUPSPatrolComponentPathData;
	struct Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PatrolComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolVisualizer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUPSPatrolComponentPathData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Statics::NewProp_PatrolComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolVisualizer.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Statics::NewProp_PatrolComponent = { "PatrolComponent", nullptr, (EPropertyFlags)0x0014000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUPSPatrolComponentPathData, PatrolComponent), Z_Construct_UClass_UUPSPatrolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Statics::NewProp_PatrolComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Statics::NewProp_PatrolComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Statics::NewProp_PatrolComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
		Z_Construct_UScriptStruct_FUPSPathData,
		&NewStructOps,
		"UPSPatrolComponentPathData",
		sizeof(FUPSPatrolComponentPathData),
		alignof(FUPSPatrolComponentPathData),
		Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUPSPatrolComponentPathData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PatrolActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UPSPatrolComponentPathData"), sizeof(FUPSPatrolComponentPathData), Get_Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUPSPatrolComponentPathData_Hash() { return 2764767606U; }
class UScriptStruct* FUPSPatrolPointPathData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATROLACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUPSPatrolPointPathData, Z_Construct_UPackage__Script_PatrolActionSystem(), TEXT("UPSPatrolPointPathData"), sizeof(FUPSPatrolPointPathData), Get_Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Hash());
	}
	return Singleton;
}
template<> PATROLACTIONSYSTEM_API UScriptStruct* StaticStruct<FUPSPatrolPointPathData>()
{
	return FUPSPatrolPointPathData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUPSPatrolPointPathData(FUPSPatrolPointPathData::StaticStruct, TEXT("/Script/PatrolActionSystem"), TEXT("UPSPatrolPointPathData"), false, nullptr, nullptr);
static struct FScriptStruct_PatrolActionSystem_StaticRegisterNativesFUPSPatrolPointPathData
{
	FScriptStruct_PatrolActionSystem_StaticRegisterNativesFUPSPatrolPointPathData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UPSPatrolPointPathData")),new UScriptStruct::TCppStructOps<FUPSPatrolPointPathData>);
	}
} ScriptStruct_PatrolActionSystem_StaticRegisterNativesFUPSPatrolPointPathData;
	struct Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_SecondPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_FirstPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolVisualizer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUPSPatrolPointPathData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics::NewProp_SecondPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolVisualizer.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics::NewProp_SecondPoint = { "SecondPoint", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUPSPatrolPointPathData, SecondPoint), Z_Construct_UClass_AUPSPatrolPoint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics::NewProp_SecondPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics::NewProp_SecondPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics::NewProp_FirstPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolVisualizer.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics::NewProp_FirstPoint = { "FirstPoint", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUPSPatrolPointPathData, FirstPoint), Z_Construct_UClass_AUPSPatrolPoint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics::NewProp_FirstPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics::NewProp_FirstPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics::NewProp_SecondPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics::NewProp_FirstPoint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
		Z_Construct_UScriptStruct_FUPSPathData,
		&NewStructOps,
		"UPSPatrolPointPathData",
		sizeof(FUPSPatrolPointPathData),
		alignof(FUPSPatrolPointPathData),
		Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUPSPatrolPointPathData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PatrolActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UPSPatrolPointPathData"), sizeof(FUPSPatrolPointPathData), Get_Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUPSPatrolPointPathData_Hash() { return 4089558378U; }
class UScriptStruct* FUPSPathData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PATROLACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FUPSPathData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUPSPathData, Z_Construct_UPackage__Script_PatrolActionSystem(), TEXT("UPSPathData"), sizeof(FUPSPathData), Get_Z_Construct_UScriptStruct_FUPSPathData_Hash());
	}
	return Singleton;
}
template<> PATROLACTIONSYSTEM_API UScriptStruct* StaticStruct<FUPSPathData>()
{
	return FUPSPathData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUPSPathData(FUPSPathData::StaticStruct, TEXT("/Script/PatrolActionSystem"), TEXT("UPSPathData"), false, nullptr, nullptr);
static struct FScriptStruct_PatrolActionSystem_StaticRegisterNativesFUPSPathData
{
	FScriptStruct_PatrolActionSystem_StaticRegisterNativesFUPSPathData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UPSPathData")),new UScriptStruct::TCppStructOps<FUPSPathData>);
	}
} ScriptStruct_PatrolActionSystem_StaticRegisterNativesFUPSPathData;
	struct Z_Construct_UScriptStruct_FUPSPathData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPathIsValid_MetaData[];
#endif
		static void NewProp_bPathIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPathIsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUPSPathData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\nClass contains functions to check patrol route selection and visualization in editor\n*/" },
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolVisualizer.h" },
		{ "ToolTip", "Class contains functions to check patrol route selection and visualization in editor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUPSPathData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUPSPathData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUPSPathData_Statics::NewProp_bPathIsValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolVisualizer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUPSPathData_Statics::NewProp_bPathIsValid_SetBit(void* Obj)
	{
		((FUPSPathData*)Obj)->bPathIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUPSPathData_Statics::NewProp_bPathIsValid = { "bPathIsValid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUPSPathData), &Z_Construct_UScriptStruct_FUPSPathData_Statics::NewProp_bPathIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUPSPathData_Statics::NewProp_bPathIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSPathData_Statics::NewProp_bPathIsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUPSPathData_Statics::NewProp_PathPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolVisualizer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUPSPathData_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUPSPathData, PathPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FUPSPathData_Statics::NewProp_PathPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSPathData_Statics::NewProp_PathPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUPSPathData_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUPSPathData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPSPathData_Statics::NewProp_bPathIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPSPathData_Statics::NewProp_PathPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPSPathData_Statics::NewProp_PathPoints_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUPSPathData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
		nullptr,
		&NewStructOps,
		"UPSPathData",
		sizeof(FUPSPathData),
		alignof(FUPSPathData),
		Z_Construct_UScriptStruct_FUPSPathData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSPathData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUPSPathData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPSPathData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUPSPathData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUPSPathData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PatrolActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UPSPathData"), sizeof(FUPSPathData), Get_Z_Construct_UScriptStruct_FUPSPathData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUPSPathData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUPSPathData_Hash() { return 3750054031U; }
	void UUPSPatrolVisualizer::StaticRegisterNativesUUPSPatrolVisualizer()
	{
	}
	UClass* Z_Construct_UClass_UUPSPatrolVisualizer_NoRegister()
	{
		return UUPSPatrolVisualizer::StaticClass();
	}
	struct Z_Construct_UClass_UUPSPatrolVisualizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisitedPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VisitedPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisitedPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolComponentsPathData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PatrolComponentsPathData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PatrolComponentsPathData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPointsPathData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PatrolPointsPathData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PatrolPointsPathData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPSPatrolVisualizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSPatrolVisualizer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/UPSPatrolVisualizer.h" },
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolVisualizer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_VisitedPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolVisualizer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_VisitedPoints = { "VisitedPoints", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSPatrolVisualizer, VisitedPoints), METADATA_PARAMS(Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_VisitedPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_VisitedPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_VisitedPoints_Inner = { "VisitedPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVisitedPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_PatrolComponentsPathData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolVisualizer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_PatrolComponentsPathData = { "PatrolComponentsPathData", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSPatrolVisualizer, PatrolComponentsPathData), METADATA_PARAMS(Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_PatrolComponentsPathData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_PatrolComponentsPathData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_PatrolComponentsPathData_Inner = { "PatrolComponentsPathData", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUPSPatrolComponentPathData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_PatrolPointsPathData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/UPSPatrolVisualizer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_PatrolPointsPathData = { "PatrolPointsPathData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUPSPatrolVisualizer, PatrolPointsPathData), METADATA_PARAMS(Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_PatrolPointsPathData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_PatrolPointsPathData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_PatrolPointsPathData_Inner = { "PatrolPointsPathData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUPSPatrolPointPathData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPSPatrolVisualizer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_VisitedPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_VisitedPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_PatrolComponentsPathData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_PatrolComponentsPathData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_PatrolPointsPathData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPSPatrolVisualizer_Statics::NewProp_PatrolPointsPathData_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPSPatrolVisualizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPSPatrolVisualizer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUPSPatrolVisualizer_Statics::ClassParams = {
		&UUPSPatrolVisualizer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUPSPatrolVisualizer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolVisualizer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUPSPatrolVisualizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPSPatrolVisualizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPSPatrolVisualizer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUPSPatrolVisualizer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUPSPatrolVisualizer, 1451484709);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<UUPSPatrolVisualizer>()
	{
		return UUPSPatrolVisualizer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUPSPatrolVisualizer(Z_Construct_UClass_UUPSPatrolVisualizer, &UUPSPatrolVisualizer::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("UUPSPatrolVisualizer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPSPatrolVisualizer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
