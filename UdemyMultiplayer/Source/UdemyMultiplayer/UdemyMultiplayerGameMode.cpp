// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UdemyMultiplayerGameMode.h"
#include "UdemyMultiplayerHUD.h"
#include "UdemyMultiplayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUdemyMultiplayerGameMode::AUdemyMultiplayerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUdemyMultiplayerHUD::StaticClass();
}
