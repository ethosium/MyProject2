// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject2.h"
#include "BPLib.h"

FString UBPLib::md5(FString s)
{

	//FString text = FString::SanitizeFloat(f);
	FString text = FMD5::HashAnsiString(TEXT("someStuff"));
	return text;
}


