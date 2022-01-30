// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndlessRunner_init() {}
	ENDLESSRUNNER_API UFunction* Z_Construct_UDelegateFunction_EndlessRunner_OnCoinsCountChanged__DelegateSignature();
	ENDLESSRUNNER_API UFunction* Z_Construct_UDelegateFunction_EndlessRunner_OnLivesCountChanged__DelegateSignature();
	ENDLESSRUNNER_API UFunction* Z_Construct_UDelegateFunction_EndlessRunner_OnLevelReset__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_EndlessRunner_OnCoinsCountChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EndlessRunner_OnLivesCountChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EndlessRunner_OnLevelReset__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/EndlessRunner",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x898BBC6B,
				0x17054CB6,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
