// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatrolActionSystem/Public/EnemyPointActions/UPSPointActionMovementHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPSPointActionMovementHandler() {}
// Cross Module References
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSPointActionMovementHandler_NoRegister();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_AUPSPointActionMovementHandler();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PatrolActionSystem();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSPointActionMovementHandler_FinishMovement();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterAbortMovement();
	PATROLACTIONSYSTEM_API UClass* Z_Construct_UClass_UUPSEnemyPointActionComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterStartMovement();
	PATROLACTIONSYSTEM_API UFunction* Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_FinishMovement();
// End Cross Module References
	static FName NAME_AUPSPointActionMovementHandler_K2_CharacterAbortMovement = FName(TEXT("K2_CharacterAbortMovement"));
	void AUPSPointActionMovementHandler::K2_CharacterAbortMovement(ACharacter* Character, UUPSEnemyPointActionComponent* Point)
	{
		UPSPointActionMovementHandler_eventK2_CharacterAbortMovement_Parms Parms;
		Parms.Character=Character;
		Parms.Point=Point;
		ProcessEvent(FindFunctionChecked(NAME_AUPSPointActionMovementHandler_K2_CharacterAbortMovement),&Parms);
	}
	static FName NAME_AUPSPointActionMovementHandler_K2_CharacterStartMovement = FName(TEXT("K2_CharacterStartMovement"));
	void AUPSPointActionMovementHandler::K2_CharacterStartMovement(ACharacter* Character, UUPSEnemyPointActionComponent* Point)
	{
		UPSPointActionMovementHandler_eventK2_CharacterStartMovement_Parms Parms;
		Parms.Character=Character;
		Parms.Point=Point;
		ProcessEvent(FindFunctionChecked(NAME_AUPSPointActionMovementHandler_K2_CharacterStartMovement),&Parms);
	}
	static FName NAME_AUPSPointActionMovementHandler_K2_FinishMovement = FName(TEXT("K2_FinishMovement"));
	void AUPSPointActionMovementHandler::K2_FinishMovement(bool bSuccess)
	{
		UPSPointActionMovementHandler_eventK2_FinishMovement_Parms Parms;
		Parms.bSuccess=bSuccess ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AUPSPointActionMovementHandler_K2_FinishMovement),&Parms);
	}
	void AUPSPointActionMovementHandler::StaticRegisterNativesAUPSPointActionMovementHandler()
	{
		UClass* Class = AUPSPointActionMovementHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishMovement", &AUPSPointActionMovementHandler::execFinishMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUPSPointActionMovementHandler_FinishMovement_Statics
	{
		struct UPSPointActionMovementHandler_eventFinishMovement_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUPSPointActionMovementHandler_FinishMovement_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((UPSPointActionMovementHandler_eventFinishMovement_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUPSPointActionMovementHandler_FinishMovement_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPSPointActionMovementHandler_eventFinishMovement_Parms), &Z_Construct_UFunction_AUPSPointActionMovementHandler_FinishMovement_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSPointActionMovementHandler_FinishMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSPointActionMovementHandler_FinishMovement_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSPointActionMovementHandler_FinishMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPointActionMovementHandler" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSPointActionMovementHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSPointActionMovementHandler_FinishMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSPointActionMovementHandler, nullptr, "FinishMovement", nullptr, nullptr, sizeof(UPSPointActionMovementHandler_eventFinishMovement_Parms), Z_Construct_UFunction_AUPSPointActionMovementHandler_FinishMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSPointActionMovementHandler_FinishMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSPointActionMovementHandler_FinishMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSPointActionMovementHandler_FinishMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSPointActionMovementHandler_FinishMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSPointActionMovementHandler_FinishMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterAbortMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterAbortMovement_Statics::NewProp_Point_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterAbortMovement_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPointActionMovementHandler_eventK2_CharacterAbortMovement_Parms, Point), Z_Construct_UClass_UUPSEnemyPointActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterAbortMovement_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterAbortMovement_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterAbortMovement_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPointActionMovementHandler_eventK2_CharacterAbortMovement_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterAbortMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterAbortMovement_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterAbortMovement_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterAbortMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPointActionMovementHandler" },
		{ "DisplayName", "On Character Abort Movement" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSPointActionMovementHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterAbortMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSPointActionMovementHandler, nullptr, "K2_CharacterAbortMovement", nullptr, nullptr, sizeof(UPSPointActionMovementHandler_eventK2_CharacterAbortMovement_Parms), Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterAbortMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterAbortMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterAbortMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterAbortMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterAbortMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterAbortMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterStartMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterStartMovement_Statics::NewProp_Point_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterStartMovement_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPointActionMovementHandler_eventK2_CharacterStartMovement_Parms, Point), Z_Construct_UClass_UUPSEnemyPointActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterStartMovement_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterStartMovement_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterStartMovement_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPSPointActionMovementHandler_eventK2_CharacterStartMovement_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterStartMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterStartMovement_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterStartMovement_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterStartMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPointActionMovementHandler" },
		{ "DisplayName", "On Character Start Movement" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSPointActionMovementHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterStartMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSPointActionMovementHandler, nullptr, "K2_CharacterStartMovement", nullptr, nullptr, sizeof(UPSPointActionMovementHandler_eventK2_CharacterStartMovement_Parms), Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterStartMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterStartMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterStartMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterStartMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterStartMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterStartMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_FinishMovement_Statics
	{
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_FinishMovement_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((UPSPointActionMovementHandler_eventK2_FinishMovement_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_FinishMovement_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPSPointActionMovementHandler_eventK2_FinishMovement_Parms), &Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_FinishMovement_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_FinishMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_FinishMovement_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_FinishMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "UPSPointActionMovementHandler" },
		{ "DisplayName", "On Movement Finished" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSPointActionMovementHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_FinishMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPSPointActionMovementHandler, nullptr, "K2_FinishMovement", nullptr, nullptr, sizeof(UPSPointActionMovementHandler_eventK2_FinishMovement_Parms), Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_FinishMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_FinishMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_FinishMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_FinishMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_FinishMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_FinishMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUPSPointActionMovementHandler_NoRegister()
	{
		return AUPSPointActionMovementHandler::StaticClass();
	}
	struct Z_Construct_UClass_AUPSPointActionMovementHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointActionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointActionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PatrolActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUPSPointActionMovementHandler_FinishMovement, "FinishMovement" }, // 3365989865
		{ &Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterAbortMovement, "K2_CharacterAbortMovement" }, // 2871510294
		{ &Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_CharacterStartMovement, "K2_CharacterStartMovement" }, // 2954809045
		{ &Z_Construct_UFunction_AUPSPointActionMovementHandler_K2_FinishMovement, "K2_FinishMovement" }, // 3217583800
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n\x09This class requered to character can move to UUPSEnemyPointActionComponent.\n\n\x09""CharacterStartMovement() - called when character start movement to point\n\x09""CharacterAbortMovement() called when character abort point action\n\x09""FinishMovement() - call after character finish movement to point\n*/" },
		{ "IncludePath", "EnemyPointActions/UPSPointActionMovementHandler.h" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSPointActionMovementHandler.h" },
		{ "ToolTip", "This class requered to character can move to UUPSEnemyPointActionComponent.\n\nCharacterStartMovement() - called when character start movement to point\nCharacterAbortMovement() called when character abort point action\nFinishMovement() - call after character finish movement to point" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::NewProp_PointActionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSPointActionMovementHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::NewProp_PointActionComponent = { "PointActionComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSPointActionMovementHandler, PointActionComponent), Z_Construct_UClass_UUPSEnemyPointActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::NewProp_PointActionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::NewProp_PointActionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::NewProp_MovementCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyPointActions/UPSPointActionMovementHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::NewProp_MovementCharacter = { "MovementCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUPSPointActionMovementHandler, MovementCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::NewProp_MovementCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::NewProp_MovementCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::NewProp_PointActionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::NewProp_MovementCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPSPointActionMovementHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::ClassParams = {
		&AUPSPointActionMovementHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUPSPointActionMovementHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUPSPointActionMovementHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUPSPointActionMovementHandler, 1104608060);
	template<> PATROLACTIONSYSTEM_API UClass* StaticClass<AUPSPointActionMovementHandler>()
	{
		return AUPSPointActionMovementHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUPSPointActionMovementHandler(Z_Construct_UClass_AUPSPointActionMovementHandler, &AUPSPointActionMovementHandler::StaticClass, TEXT("/Script/PatrolActionSystem"), TEXT("AUPSPointActionMovementHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUPSPointActionMovementHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
