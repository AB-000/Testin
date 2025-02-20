// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AMyActor::PrintMessage_Implementation()
{
	FActorSpawnParameters spawnParameters;

	if (HasAuthority())
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Emerald, "Server");
		
		GetWorld()->SpawnActor<AActor>(MyActorClass, GetActorLocation() + FVector(5, 0, 0), GetActorRotation(), spawnParameters);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Emerald, "Client");

		GetWorld()->SpawnActor<AActor>(MyActorClass, GetActorLocation() + FVector(5, 0, 0), GetActorRotation(), spawnParameters);
	}
}

