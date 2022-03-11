// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE427_VehicleGameMode.h"
#include "UE427_VehiclePawn.h"
#include "UE427_VehicleHud.h"

AUE427_VehicleGameMode::AUE427_VehicleGameMode()
{
	DefaultPawnClass = AUE427_VehiclePawn::StaticClass();
	HUDClass = AUE427_VehicleHud::StaticClass();
}
