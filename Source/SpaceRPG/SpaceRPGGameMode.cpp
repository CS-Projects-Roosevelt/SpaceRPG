// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SpaceRPGGameMode.h"
#include "SpaceRPGCharacter.h"

ASpaceRPGGameMode::ASpaceRPGGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ASpaceRPGCharacter::StaticClass();	
}
