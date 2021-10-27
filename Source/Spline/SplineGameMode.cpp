// Copyright Epic Games, Inc. All Rights Reserved.

#include "SplineGameMode.h"
#include "SplineCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASplineGameMode::ASplineGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
