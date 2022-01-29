// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/EndlessRunnerGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndlessRunnerGameModeBase() {}
// Cross Module References
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_AEndlessRunnerGameModeBase_NoRegister();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_AEndlessRunnerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_AFloorTile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(AEndlessRunnerGameModeBase::execAddFloorTile)
	{
		P_GET_UBOOL(Z_Param_bSpawnItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AFloorTile**)Z_Param__Result=P_THIS->AddFloorTile(Z_Param_bSpawnItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEndlessRunnerGameModeBase::execCreateinitialFloorTiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateinitialFloorTiles();
		P_NATIVE_END;
	}
	void AEndlessRunnerGameModeBase::StaticRegisterNativesAEndlessRunnerGameModeBase()
	{
		UClass* Class = AEndlessRunnerGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFloorTile", &AEndlessRunnerGameModeBase::execAddFloorTile },
			{ "CreateinitialFloorTiles", &AEndlessRunnerGameModeBase::execCreateinitialFloorTiles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile_Statics
	{
		struct EndlessRunnerGameModeBase_eventAddFloorTile_Parms
		{
			bool bSpawnItems;
			AFloorTile* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnItems_MetaData[];
#endif
		static void NewProp_bSpawnItems_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnItems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile_Statics::NewProp_bSpawnItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile_Statics::NewProp_bSpawnItems_SetBit(void* Obj)
	{
		((EndlessRunnerGameModeBase_eventAddFloorTile_Parms*)Obj)->bSpawnItems = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile_Statics::NewProp_bSpawnItems = { "bSpawnItems", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EndlessRunnerGameModeBase_eventAddFloorTile_Parms), &Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile_Statics::NewProp_bSpawnItems_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile_Statics::NewProp_bSpawnItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile_Statics::NewProp_bSpawnItems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EndlessRunnerGameModeBase_eventAddFloorTile_Parms, ReturnValue), Z_Construct_UClass_AFloorTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile_Statics::NewProp_bSpawnItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndlessRunnerGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEndlessRunnerGameModeBase, nullptr, "AddFloorTile", nullptr, nullptr, sizeof(EndlessRunnerGameModeBase_eventAddFloorTile_Parms), Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEndlessRunnerGameModeBase_CreateinitialFloorTiles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEndlessRunnerGameModeBase_CreateinitialFloorTiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndlessRunnerGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEndlessRunnerGameModeBase_CreateinitialFloorTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEndlessRunnerGameModeBase, nullptr, "CreateinitialFloorTiles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEndlessRunnerGameModeBase_CreateinitialFloorTiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEndlessRunnerGameModeBase_CreateinitialFloorTiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEndlessRunnerGameModeBase_CreateinitialFloorTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEndlessRunnerGameModeBase_CreateinitialFloorTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEndlessRunnerGameModeBase_NoRegister()
	{
		return AEndlessRunnerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorTileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FloorTileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInitialFloorTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumInitialFloorTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextSpawnPoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaneSwitchValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaneSwitchValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LaneSwitchValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEndlessRunnerGameModeBase_AddFloorTile, "AddFloorTile" }, // 2878764507
		{ &Z_Construct_UFunction_AEndlessRunnerGameModeBase_CreateinitialFloorTiles, "CreateinitialFloorTiles" }, // 2270079296
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EndlessRunnerGameModeBase.h" },
		{ "ModuleRelativePath", "EndlessRunnerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_FloorTileClass_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "EndlessRunnerGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_FloorTileClass = { "FloorTileClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEndlessRunnerGameModeBase, FloorTileClass), Z_Construct_UClass_AFloorTile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_FloorTileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_FloorTileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_NumInitialFloorTiles_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "EndlessRunnerGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_NumInitialFloorTiles = { "NumInitialFloorTiles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEndlessRunnerGameModeBase, NumInitialFloorTiles), METADATA_PARAMS(Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_NumInitialFloorTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_NumInitialFloorTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_NextSpawnPoint_MetaData[] = {
		{ "Category", "RunTime" },
		{ "ModuleRelativePath", "EndlessRunnerGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_NextSpawnPoint = { "NextSpawnPoint", nullptr, (EPropertyFlags)0x0010000000020801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEndlessRunnerGameModeBase, NextSpawnPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_NextSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_NextSpawnPoint_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_LaneSwitchValues_Inner = { "LaneSwitchValues", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_LaneSwitchValues_MetaData[] = {
		{ "Category", "RunTime" },
		{ "ModuleRelativePath", "EndlessRunnerGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_LaneSwitchValues = { "LaneSwitchValues", nullptr, (EPropertyFlags)0x0010000000020801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEndlessRunnerGameModeBase, LaneSwitchValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_LaneSwitchValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_LaneSwitchValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_FloorTileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_NumInitialFloorTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_NextSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_LaneSwitchValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::NewProp_LaneSwitchValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEndlessRunnerGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::ClassParams = {
		&AEndlessRunnerGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEndlessRunnerGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEndlessRunnerGameModeBase, 2668015684);
	template<> ENDLESSRUNNER_API UClass* StaticClass<AEndlessRunnerGameModeBase>()
	{
		return AEndlessRunnerGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEndlessRunnerGameModeBase(Z_Construct_UClass_AEndlessRunnerGameModeBase, &AEndlessRunnerGameModeBase::StaticClass, TEXT("/Script/EndlessRunner"), TEXT("AEndlessRunnerGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEndlessRunnerGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
