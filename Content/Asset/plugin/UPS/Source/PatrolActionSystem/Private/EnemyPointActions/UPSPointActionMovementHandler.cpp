// Copyright 2020 DmVergasov All Rights Reserved.

#include "EnemyPointActions/UPSPointActionMovementHandler.h"
#include "EnemyPointActions/UPSEnemyPointActionComponent.h"

AUPSPointActionMovementHandler::AUPSPointActionMovementHandler()
{
	PrimaryActorTick.bCanEverTick = true;
	SetActorTickEnabled(false);
}

void AUPSPointActionMovementHandler::CharacterStartMovement(ACharacter* Character, UUPSEnemyPointActionComponent* Point)
{
	MovementCharacter = Character;
	PointActionComponent = Point;
	K2_CharacterStartMovement(Character, Point);
}

void AUPSPointActionMovementHandler::CharacterAbortMovement(ACharacter* Character, UUPSEnemyPointActionComponent* Point)
{
	K2_CharacterAbortMovement(Character, Point);
}

void AUPSPointActionMovementHandler::FinishMovement(bool bSuccess)
{
	K2_FinishMovement(bSuccess);
	
	OnCharacterReachPointDelegate.Broadcast(MovementCharacter, bSuccess);
}

