// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UPSTypes.h"
#include "UPSFunctionLIbrary.generated.h"

class UAnimMontage;
class UUPSEnemyAction;
class UUPSPatrolPointScript;
class AActor;
class AAIController;

/**
 * 
 */
UCLASS()
class PATROLACTIONSYSTEM_API UUPSFunctionLIbrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "UPSPatrolSystem")
	static float GetMontageSectionLength(UAnimMontage* Montage, FName SectionName = NAME_None);

	UFUNCTION(BlueprintPure, Category = "UPSPatrolSystem")
	static float GetMontageSectionIndexLength(UAnimMontage* Montage, int32 Index);

	UFUNCTION(BlueprintPure, Category = "UPSPatrolSystem")
	static UUPSEnemyAction* GetEnemyActionFromSelector(FEnemyActionSelector EnemyActionSelector);

	UFUNCTION(BlueprintCallable, Category = "UPSPatrolSystem")
	static UUPSPatrolPointScript* CreatePatrolScriptIntance(FPatrolPointScript Script);

	UFUNCTION(BlueprintCallable, Category = "UPSPatrolSystem")
	static void JumpToMontageSectionByIndex(ACharacter* Character, UAnimMontage* Montage, int32 SectionIndex);
};
