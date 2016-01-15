// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPLib.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API UBPLib : public UBlueprintFunctionLibrary
{
public:
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, meta = (FriendlyName = "md5", CompactNodeTitle = "md5", Keywords = "md5"), Category = Crypto)
		static FString md5(FString s);
	
	
	
};
