// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UPSBasePatrolObject.h"
#include "UPSTypes.h"
#include "UPSPatrolPoint.generated.h"

class UBillboardComponent;
class UArrowComponent;
class UUPSPatrolPointSolver;


/*
	Contains links to the following points, and the points included in the current, as well as the settings for the point:

		 - PatrolPointScripts - actions that are performed when a point begins to move

		 - PatrolPointActions - actions that are performed after arrival at the point.

		 - EnemyActionsExecutionType - type of execution of actions, one of random or all from the list

		 - bRotateOnPointAfterReach - whether to turn to a point after arrival
*/

UCLASS(ClassGroup = PatrolSystem)
class PATROLACTIONSYSTEM_API AUPSPatrolPoint : public AUPSBasePatrolObject
{
	GENERATED_BODY()
	
public:	
	AUPSPatrolPoint();

public:
	/*AActor start*/
	virtual void Destroyed() override;
	virtual void OnConstruction(const FTransform& Transform) override;
		 
	virtual void PostDuplicate(bool bDuplicateForPIE) override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	virtual void PostEditChangeChainProperty(struct FPropertyChangedChainEvent& PropertyChangedEvent) override;

#endif
	/*AActor end*/

	UFUNCTION(BlueprintPure, Category = "UPSPatrolSystem")
	FPatrolPointSettings& GetPatrolPointSettings();

	UBillboardComponent* GetBillboardComponent() const;

	UFUNCTION(BlueprintPure, Category = "UPSPatrolSystem")
	TArray<FPatrolPointLink>& GetNextPatrolPointLinks();

	UFUNCTION(BlueprintPure, Category = "UPSPatrolSystem")
	TArray<FPatrolPointLink>& GetBackwardPatrolPointLinks();

	virtual void AddNextLink(FPatrolPointLink Link);
	virtual void AddBackwardLink(FPatrolPointLink Link);
	virtual void RemoveBackwardLink(AUPSPatrolPoint* Point);

	UFUNCTION(BlueprintPure, Category = "UPSPatrolSystem")
	AUPSPatrolPoint* GetNextPatrolPoint(ACharacter* Character);

protected:
	virtual void RefreshLinks();

protected:
	UPROPERTY()
	UBillboardComponent* BillboardComponent;

	UPROPERTY(EditAnywhere, Category = "UPSPatrolSystem")
	FPatrolPointSettings PatrolPointSettings;

	UPROPERTY(VisibleInstanceOnly, Category = "UPSPatrolSystem")
	UArrowComponent* ArrowComponent;

	UPROPERTY(EditInstanceOnly, Category = "UPSPatrolSystem")
	TArray<FPatrolPointLink> PatrolPointLinks;

	UPROPERTY(EditInstanceOnly, Instanced, Category = "UPSPatrolSystem")
	UUPSPatrolPointSolver* NextPatrolPointSolver;

	UPROPERTY(VisibleInstanceOnly, Category = "UPSPatrolSystem")
	TArray<FPatrolPointLink> BackwardPatrolPointLinks;

	UPROPERTY()
	TArray<FPatrolPointLink> CachedPatrolPointLinks;
};
