// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/FloorTile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorTile() {}
// Cross Module References
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_AFloorTile_NoRegister();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_AFloorTile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_AObstacle_NoRegister();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_ACoinItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_AEndlessRunnerGameModeBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(AFloorTile::execDestroyFloorTile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyFloorTile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloorTile::execSpawnLaneItem)
	{
		P_GET_OBJECT(UArrowComponent,Z_Param_Lane);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumBigs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnLaneItem(Z_Param_Lane,Z_Param_Out_NumBigs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloorTile::execOnTriggerBoxOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerBoxOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloorTile::execSpawnItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnItems();
		P_NATIVE_END;
	}
	void AFloorTile::StaticRegisterNativesAFloorTile()
	{
		UClass* Class = AFloorTile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyFloorTile", &AFloorTile::execDestroyFloorTile },
			{ "OnTriggerBoxOverlap", &AFloorTile::execOnTriggerBoxOverlap },
			{ "SpawnItems", &AFloorTile::execSpawnItems },
			{ "SpawnLaneItem", &AFloorTile::execSpawnLaneItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFloorTile_DestroyFloorTile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorTile_DestroyFloorTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorTile_DestroyFloorTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorTile, nullptr, "DestroyFloorTile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorTile_DestroyFloorTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorTile_DestroyFloorTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorTile_DestroyFloorTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorTile_DestroyFloorTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics
	{
		struct FloorTile_eventOnTriggerBoxOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorTile_eventOnTriggerBoxOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorTile_eventOnTriggerBoxOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorTile_eventOnTriggerBoxOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorTile_eventOnTriggerBoxOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FloorTile_eventOnTriggerBoxOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FloorTile_eventOnTriggerBoxOverlap_Parms), &Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorTile_eventOnTriggerBoxOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorTile, nullptr, "OnTriggerBoxOverlap", nullptr, nullptr, sizeof(FloorTile_eventOnTriggerBoxOverlap_Parms), Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorTile_SpawnItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorTile_SpawnItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorTile_SpawnItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorTile, nullptr, "SpawnItems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorTile_SpawnItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorTile_SpawnItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorTile_SpawnItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorTile_SpawnItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorTile_SpawnLaneItem_Statics
	{
		struct FloorTile_eventSpawnLaneItem_Parms
		{
			UArrowComponent* Lane;
			int32 NumBigs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lane_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Lane;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBigs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorTile_SpawnLaneItem_Statics::NewProp_Lane_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorTile_SpawnLaneItem_Statics::NewProp_Lane = { "Lane", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorTile_eventSpawnLaneItem_Parms, Lane), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFloorTile_SpawnLaneItem_Statics::NewProp_Lane_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorTile_SpawnLaneItem_Statics::NewProp_Lane_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFloorTile_SpawnLaneItem_Statics::NewProp_NumBigs = { "NumBigs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorTile_eventSpawnLaneItem_Parms, NumBigs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorTile_SpawnLaneItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorTile_SpawnLaneItem_Statics::NewProp_Lane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorTile_SpawnLaneItem_Statics::NewProp_NumBigs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorTile_SpawnLaneItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorTile_SpawnLaneItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorTile, nullptr, "SpawnLaneItem", nullptr, nullptr, sizeof(FloorTile_eventSpawnLaneItem_Parms), Z_Construct_UFunction_AFloorTile_SpawnLaneItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorTile_SpawnLaneItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorTile_SpawnLaneItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorTile_SpawnLaneItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorTile_SpawnLaneItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorTile_SpawnLaneItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFloorTile_NoRegister()
	{
		return AFloorTile::StaticClass();
	}
	struct Z_Construct_UClass_AFloorTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallObstacleClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SmallObstacleClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BigObstacleClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BigObstacleClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoinItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CoinItemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloorMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterLane_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CenterLane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightLane_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightLane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftLane_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftLane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorTriggerBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloorTriggerBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPercent1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnPercent1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPercent2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnPercent2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPercent3_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnPercent3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunGameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestroyHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFloorTile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFloorTile_DestroyFloorTile, "DestroyFloorTile" }, // 1404425768
		{ &Z_Construct_UFunction_AFloorTile_OnTriggerBoxOverlap, "OnTriggerBoxOverlap" }, // 1290821723
		{ &Z_Construct_UFunction_AFloorTile_SpawnItems, "SpawnItems" }, // 837771864
		{ &Z_Construct_UFunction_AFloorTile_SpawnLaneItem, "SpawnLaneItem" }, // 4271854047
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloorTile.h" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_SmallObstacleClass_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_SmallObstacleClass = { "SmallObstacleClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, SmallObstacleClass), Z_Construct_UClass_AObstacle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_SmallObstacleClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_SmallObstacleClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_BigObstacleClass_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_BigObstacleClass = { "BigObstacleClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, BigObstacleClass), Z_Construct_UClass_AObstacle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_BigObstacleClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_BigObstacleClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_CoinItemClass_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_CoinItemClass = { "CoinItemClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, CoinItemClass), Z_Construct_UClass_ACoinItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_CoinItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_CoinItemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorMesh = { "FloorMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, FloorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_AttachPoint_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_AttachPoint = { "AttachPoint", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, AttachPoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_AttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_AttachPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_CenterLane_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_CenterLane = { "CenterLane", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, CenterLane), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_CenterLane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_CenterLane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_RightLane_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_RightLane = { "RightLane", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, RightLane), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_RightLane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_RightLane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_LeftLane_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_LeftLane = { "LeftLane", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, LeftLane), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_LeftLane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_LeftLane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorTriggerBox_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorTriggerBox = { "FloorTriggerBox", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, FloorTriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorTriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorTriggerBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnPercent1_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnPercent1 = { "SpawnPercent1", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, SpawnPercent1), METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnPercent1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnPercent1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnPercent2_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnPercent2 = { "SpawnPercent2", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, SpawnPercent2), METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnPercent2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnPercent2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnPercent3_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnPercent3 = { "SpawnPercent3", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, SpawnPercent3), METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnPercent3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnPercent3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_RunGameMode_MetaData[] = {
		{ "Category", "FloorTile" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_RunGameMode = { "RunGameMode", nullptr, (EPropertyFlags)0x0020080000020801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, RunGameMode), Z_Construct_UClass_AEndlessRunnerGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_RunGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_RunGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_DestroyHandle_MetaData[] = {
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_DestroyHandle = { "DestroyHandle", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, DestroyHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_DestroyHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_DestroyHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_SmallObstacleClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_BigObstacleClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_CoinItemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_AttachPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_CenterLane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_RightLane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_LeftLane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorTriggerBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnPercent1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnPercent2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnPercent3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_RunGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_DestroyHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorTile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloorTile_Statics::ClassParams = {
		&AFloorTile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFloorTile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloorTile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloorTile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloorTile, 3088102774);
	template<> ENDLESSRUNNER_API UClass* StaticClass<AFloorTile>()
	{
		return AFloorTile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloorTile(Z_Construct_UClass_AFloorTile, &AFloorTile::StaticClass, TEXT("/Script/EndlessRunner"), TEXT("AFloorTile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorTile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
