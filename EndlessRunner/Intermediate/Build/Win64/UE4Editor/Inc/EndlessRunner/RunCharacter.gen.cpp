// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/RunCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunCharacter() {}
// Cross Module References
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_ARunCharacter_NoRegister();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_ARunCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_AEndlessRunnerGameModeBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARunCharacter::execMoveDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunCharacter::execMoveRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunCharacter::execMoveLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunCharacter::execChangeLandFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeLandFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunCharacter::execChangeLaneUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeLaneUpdate(Z_Param_Value);
		P_NATIVE_END;
	}
	static FName NAME_ARunCharacter_ChangeLane = FName(TEXT("ChangeLane"));
	void ARunCharacter::ChangeLane()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARunCharacter_ChangeLane),NULL);
	}
	void ARunCharacter::StaticRegisterNativesARunCharacter()
	{
		UClass* Class = ARunCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeLandFinished", &ARunCharacter::execChangeLandFinished },
			{ "ChangeLaneUpdate", &ARunCharacter::execChangeLaneUpdate },
			{ "MoveDown", &ARunCharacter::execMoveDown },
			{ "MoveLeft", &ARunCharacter::execMoveLeft },
			{ "MoveRight", &ARunCharacter::execMoveRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARunCharacter_ChangeLandFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunCharacter_ChangeLandFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lane" },
		{ "ModuleRelativePath", "RunCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunCharacter_ChangeLandFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunCharacter, nullptr, "ChangeLandFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunCharacter_ChangeLandFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_ChangeLandFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunCharacter_ChangeLandFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunCharacter_ChangeLandFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunCharacter_ChangeLane_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunCharacter_ChangeLane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lane" },
		{ "ModuleRelativePath", "RunCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunCharacter_ChangeLane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunCharacter, nullptr, "ChangeLane", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunCharacter_ChangeLane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_ChangeLane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunCharacter_ChangeLane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunCharacter_ChangeLane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunCharacter_ChangeLaneUpdate_Statics
	{
		struct RunCharacter_eventChangeLaneUpdate_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARunCharacter_ChangeLaneUpdate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunCharacter_eventChangeLaneUpdate_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARunCharacter_ChangeLaneUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunCharacter_ChangeLaneUpdate_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunCharacter_ChangeLaneUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lane" },
		{ "ModuleRelativePath", "RunCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunCharacter_ChangeLaneUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunCharacter, nullptr, "ChangeLaneUpdate", nullptr, nullptr, sizeof(RunCharacter_eventChangeLaneUpdate_Parms), Z_Construct_UFunction_ARunCharacter_ChangeLaneUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_ChangeLaneUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunCharacter_ChangeLaneUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_ChangeLaneUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunCharacter_ChangeLaneUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunCharacter_ChangeLaneUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunCharacter_MoveDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunCharacter_MoveDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RunCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunCharacter_MoveDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunCharacter, nullptr, "MoveDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunCharacter_MoveDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_MoveDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunCharacter_MoveDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunCharacter_MoveDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunCharacter_MoveLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunCharacter_MoveLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RunCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunCharacter_MoveLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunCharacter, nullptr, "MoveLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunCharacter_MoveLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_MoveLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunCharacter_MoveLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunCharacter_MoveLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunCharacter_MoveRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunCharacter_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RunCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunCharacter, nullptr, "MoveRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunCharacter_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunCharacter_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunCharacter_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARunCharacter_NoRegister()
	{
		return ARunCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ARunCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunGameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLane_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentLane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextLane_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextLane;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARunCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARunCharacter_ChangeLandFinished, "ChangeLandFinished" }, // 797528731
		{ &Z_Construct_UFunction_ARunCharacter_ChangeLane, "ChangeLane" }, // 1074049814
		{ &Z_Construct_UFunction_ARunCharacter_ChangeLaneUpdate, "ChangeLaneUpdate" }, // 3670349253
		{ &Z_Construct_UFunction_ARunCharacter_MoveDown, "MoveDown" }, // 2389385540
		{ &Z_Construct_UFunction_ARunCharacter_MoveLeft, "MoveLeft" }, // 1965295991
		{ &Z_Construct_UFunction_ARunCharacter_MoveRight, "MoveRight" }, // 4029800975
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RunCharacter.h" },
		{ "ModuleRelativePath", "RunCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_CameraArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RunCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_CameraArm = { "CameraArm", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, CameraArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_CameraArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_CameraArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RunCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_RunGameMode_MetaData[] = {
		{ "Category", "RunCharacter" },
		{ "ModuleRelativePath", "RunCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_RunGameMode = { "RunGameMode", nullptr, (EPropertyFlags)0x0040000000020801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, RunGameMode), Z_Construct_UClass_AEndlessRunnerGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_RunGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_RunGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_CurrentLane_MetaData[] = {
		{ "Category", "RunCharacter" },
		{ "ModuleRelativePath", "RunCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_CurrentLane = { "CurrentLane", nullptr, (EPropertyFlags)0x0010000000020805, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, CurrentLane), METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_CurrentLane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_CurrentLane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_NextLane_MetaData[] = {
		{ "Category", "RunCharacter" },
		{ "ModuleRelativePath", "RunCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_NextLane = { "NextLane", nullptr, (EPropertyFlags)0x0010000000020805, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunCharacter, NextLane), METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::NewProp_NextLane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_NextLane_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARunCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_CameraArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_RunGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_CurrentLane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_NextLane,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARunCharacter_Statics::ClassParams = {
		&ARunCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARunCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARunCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARunCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARunCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARunCharacter, 3000071137);
	template<> ENDLESSRUNNER_API UClass* StaticClass<ARunCharacter>()
	{
		return ARunCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARunCharacter(Z_Construct_UClass_ARunCharacter, &ARunCharacter::StaticClass, TEXT("/Script/EndlessRunner"), TEXT("ARunCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
