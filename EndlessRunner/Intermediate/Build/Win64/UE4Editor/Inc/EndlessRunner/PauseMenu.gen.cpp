// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/PauseMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePauseMenu() {}
// Cross Module References
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_UPauseMenu_NoRegister();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_UPauseMenu();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPauseMenu::execOnRestartClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPauseMenu::execOnContinueClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnContinueClick();
		P_NATIVE_END;
	}
	void UPauseMenu::StaticRegisterNativesUPauseMenu()
	{
		UClass* Class = UPauseMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnContinueClick", &UPauseMenu::execOnContinueClick },
			{ "OnRestartClick", &UPauseMenu::execOnRestartClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPauseMenu_OnContinueClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseMenu_OnContinueClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PauseMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenu_OnContinueClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenu, nullptr, "OnContinueClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseMenu_OnContinueClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenu_OnContinueClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseMenu_OnContinueClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPauseMenu_OnContinueClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPauseMenu_OnRestartClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseMenu_OnRestartClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PauseMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenu_OnRestartClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenu, nullptr, "OnRestartClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseMenu_OnRestartClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenu_OnRestartClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseMenu_OnRestartClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPauseMenu_OnRestartClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPauseMenu_NoRegister()
	{
		return UPauseMenu::StaticClass();
	}
	struct Z_Construct_UClass_UPauseMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContinueBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContinueBtn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RestartBtn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPauseMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPauseMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPauseMenu_OnContinueClick, "OnContinueClick" }, // 2926423153
		{ &Z_Construct_UFunction_UPauseMenu_OnRestartClick, "OnRestartClick" }, // 1692170179
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PauseMenu.h" },
		{ "ModuleRelativePath", "PauseMenu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseMenu_Statics::NewProp_ContinueBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PauseMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PauseMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenu_Statics::NewProp_ContinueBtn = { "ContinueBtn", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPauseMenu, ContinueBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPauseMenu_Statics::NewProp_ContinueBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenu_Statics::NewProp_ContinueBtn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseMenu_Statics::NewProp_RestartBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PauseMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PauseMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenu_Statics::NewProp_RestartBtn = { "RestartBtn", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPauseMenu, RestartBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPauseMenu_Statics::NewProp_RestartBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenu_Statics::NewProp_RestartBtn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPauseMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenu_Statics::NewProp_ContinueBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenu_Statics::NewProp_RestartBtn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPauseMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPauseMenu_Statics::ClassParams = {
		&UPauseMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPauseMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPauseMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPauseMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPauseMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPauseMenu, 3280054309);
	template<> ENDLESSRUNNER_API UClass* StaticClass<UPauseMenu>()
	{
		return UPauseMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPauseMenu(Z_Construct_UClass_UPauseMenu, &UPauseMenu::StaticClass, TEXT("/Script/EndlessRunner"), TEXT("UPauseMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPauseMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
