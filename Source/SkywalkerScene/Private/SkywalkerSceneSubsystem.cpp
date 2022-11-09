// Fill out your copyright notice in the Description page of Project Settings.


#include "SkywalkerSceneSubsystem.h"

bool USkywalkerSceneSubsystem::LevelTravel(const FString& InURL, bool bAbsolute, bool bShouldSkipGameNotify)
{
	return GetWorld()->ServerTravel(InURL, bAbsolute, bShouldSkipGameNotify);
}
