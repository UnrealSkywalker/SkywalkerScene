// Fill out your copyright notice in the Description page of Project Settings.

#include "SkywalkerSceneSubsystem.h"

#include "Kismet/GameplayStatics.h"

bool USkywalkerSceneSubsystem::LoadLevel(const FName &InLevelName)
{
	UGameplayStatics::LoadStreamLevel(this, InLevelName, true, true, FLatentActionInfo());

	return true;
}

bool USkywalkerSceneSubsystem::UnLoadLevel(const FName &InLevelName)
{
	UGameplayStatics::UnloadStreamLevel(this, InLevelName, FLatentActionInfo(), true);

	return true;
}
