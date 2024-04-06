// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject12GameMode.h"
#include "MyProject12Character.h"
#include "UObject/ConstructorHelpers.h"

AMyProject12GameMode::AMyProject12GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
