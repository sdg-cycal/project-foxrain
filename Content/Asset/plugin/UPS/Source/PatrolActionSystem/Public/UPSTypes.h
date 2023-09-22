// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UPSTypes.generated.h"

class UUPSEnemyAction;
class UUPSPatrolPointScript;
class AUPSPatrolRoute;
class AUPSPatrolPoint;
class UUPSEnemyActionsPreset;

UENUM(BlueprintType)
enum class EEnemyActionsExecutionType : uint8
{
	RandomAction,
	AllInTurn
};

USTRUCT(BlueprintType)
struct PATROLACTIONSYSTEM_API FPatrolPointScript
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Instanced, Category = "UPSPatrolPointScript")
	UUPSPatrolPointScript* PatrolPointScript;
};

USTRUCT(BlueprintType)
struct PATROLACTIONSYSTEM_API FEnemyActionSelector
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UPSEnemyActionSelector")
	bool bUseInstancedEnemyActions = true;

	UPROPERTY(EditAnywhere, Instanced, meta = (EditCondition = "bUseInstancedEnemyActions"), Category = "UPSEnemyActionSelector")
	UUPSEnemyAction* InstancedEnemyAction = nullptr;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "!bUseInstancedEnemyActions"), Category = "UPSEnemyActionSelector")
	UUPSEnemyAction* DAEnemyAction = nullptr;
};

USTRUCT(BlueprintType)
struct PATROLACTIONSYSTEM_API FPatrolPointSettings
{
	GENERATED_BODY()

public:
	//Called start and stop functions in each action before AI start movement to point and after stop. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UPSPatrolPointSettings")
	TArray<FPatrolPointScript> PatrolPointScripts;

	//One of the action executed after ai reach patrol point. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "!bUseEnemyActionsPreset"), Category = "UPSPatrolPointSettings")
	TArray<FEnemyActionSelector> PatrolPointActions;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UPSPatrolPointSettings")
	bool bUseEnemyActionsPreset = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "bUseEnemyActionsPreset"), Category = "UPSPatrolPointSettings")
	UUPSEnemyActionsPreset* EnemyActionsPreset;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UPSPatrolPointSettings")
	EEnemyActionsExecutionType EnemyActionsExecutionType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UPSPatrolPointSettings")
	bool bRotateOnPointAfterReach = false;
};

UENUM(BlueprintType)
enum class EPatrolMovementType : uint8
{
	Clockwise,
	CounterClockwise
};

USTRUCT(BlueprintType)
struct PATROLACTIONSYSTEM_API FPatrolPointLink
{
	GENERATED_BODY()

public:
	FPatrolPointLink();
	
	FPatrolPointLink(AUPSPatrolPoint* Point, FGameplayTag Tag);

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "UPSPatrolPointLink")
	AUPSPatrolPoint* PatrolPoint = nullptr;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "UPSPatrolPointLink")
	FGameplayTag LinkTag;

	bool IsValid() { return PatrolPoint != nullptr; }

	FORCEINLINE bool operator==(const FPatrolPointLink &Other) const
	{
		return PatrolPoint == Other.PatrolPoint;
	}
};