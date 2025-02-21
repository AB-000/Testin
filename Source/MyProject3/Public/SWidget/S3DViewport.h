// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class MYPROJECT3_API S3DViewport: public SCompoundWidget
{
	SLATE_BEGIN_ARGS(S3DViewport) {}
		
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

	TObjectPtr<FSceneViewport> SceneViewport;
	TObjectPtr<SViewport> Viewport;
};
