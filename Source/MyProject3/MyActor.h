// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "MyActor.generated.h"

UCLASS()
class MYPROJECT3_API AMyActor : public ACharacter
{
	GENERATED_BODY()
	
public:	

	AMyActor();




	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void PrintMessage();

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> MyActorClass;
};
