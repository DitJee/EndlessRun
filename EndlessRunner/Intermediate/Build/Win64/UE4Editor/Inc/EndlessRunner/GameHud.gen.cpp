// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/GameHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHud() {}
// Cross Module References
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_UGameHud_NoRegister();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_UGameHud();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_AEndlessRunnerGameModeBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGameHud::execSetCoinsCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCoinsCount(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameHud::execInitializeHUD)
	{
		P_GET_OBJECT(AEndlessRunnerGameModeBase,Z_Param_RunGameMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeHUD(Z_Param_RunGameMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameHud::execOnPauseClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPauseClick();
		P_NATIVE_END;
	}
	void UGameHud::StaticRegisterNativesUGameHud()
	{
		UClass* Class = UGameHud::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeHUD", &UGameHud::execInitializeHUD },
			{ "OnPauseClick", &UGameHud::execOnPauseClick },
			{ "SetCoinsCount", &UGameHud::execSetCoinsCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameHud_InitializeHUD_Statics
	{
		struct GameHud_eventInitializeHUD_Parms
		{
			AEndlessRunnerGameModeBase* RunGameMode;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunGameMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::NewProp_RunGameMode = { "RunGameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameHud_eventInitializeHUD_Parms, RunGameMode), Z_Construct_UClass_AEndlessRunnerGameModeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::NewProp_RunGameMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHud, nullptr, "InitializeHUD", nullptr, nullptr, sizeof(GameHud_eventInitializeHUD_Parms), Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHud_InitializeHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHud_InitializeHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameHud_OnPauseClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHud_OnPauseClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHud_OnPauseClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHud, nullptr, "OnPauseClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHud_OnPauseClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHud_OnPauseClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHud_OnPauseClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHud_OnPauseClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics
	{
		struct GameHud_eventSetCoinsCount_Parms
		{
			int32 Count;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameHud_eventSetCoinsCount_Parms, Count), METADATA_PARAMS(Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::NewProp_Count_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHud, nullptr, "SetCoinsCount", nullptr, nullptr, sizeof(GameHud_eventSetCoinsCount_Parms), Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHud_SetCoinsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHud_SetCoinsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameHud_NoRegister()
	{
		return UGameHud::StaticClass();
	}
	struct Z_Construct_UClass_UGameHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseMenuWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PauseMenuWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PauseBtn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameHud_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameHud_InitializeHUD, "InitializeHUD" }, // 2113478054
		{ &Z_Construct_UFunction_UGameHud_OnPauseClick, "OnPauseClick" }, // 3546495211
		{ &Z_Construct_UFunction_UGameHud_SetCoinsCount, "SetCoinsCount" }, // 2193826179
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHud_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameHud.h" },
		{ "ModuleRelativePath", "GameHud.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHud_Statics::NewProp_PauseMenuWidgetClass_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "GameHud.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameHud_Statics::NewProp_PauseMenuWidgetClass = { "PauseMenuWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHud, PauseMenuWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGameHud_Statics::NewProp_PauseMenuWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHud_Statics::NewProp_PauseMenuWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHud_Statics::NewProp_CoinCount_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameHud_Statics::NewProp_CoinCount = { "CoinCount", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHud, CoinCount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameHud_Statics::NewProp_CoinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHud_Statics::NewProp_CoinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHud_Statics::NewProp_PauseBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameHud" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameHud_Statics::NewProp_PauseBtn = { "PauseBtn", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHud, PauseBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameHud_Statics::NewProp_PauseBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHud_Statics::NewProp_PauseBtn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameHud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHud_Statics::NewProp_PauseMenuWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHud_Statics::NewProp_CoinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHud_Statics::NewProp_PauseBtn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameHud_Statics::ClassParams = {
		&UGameHud::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameHud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameHud_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameHud, 3895556066);
	template<> ENDLESSRUNNER_API UClass* StaticClass<UGameHud>()
	{
		return UGameHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameHud(Z_Construct_UClass_UGameHud, &UGameHud::StaticClass, TEXT("/Script/EndlessRunner"), TEXT("UGameHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
