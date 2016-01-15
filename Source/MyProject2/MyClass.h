// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */
class MYPROJECT2_API MyClass
{
public:
	UFUNCTION(BlueprintPure, meta = (FriendlyName = "Hello World", CompactNodeTitle = "HelloWorld", Keywords = "String Hello World"), Category = Game)
		static FText HelloWorld();
	MyClass();
	~MyClass();
};
