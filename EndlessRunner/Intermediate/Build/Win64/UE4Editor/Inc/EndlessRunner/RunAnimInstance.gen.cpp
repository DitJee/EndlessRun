// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/RunAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunAnimInstance() {}
// Cross Module References
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_URunAnimInstance_NoRegister();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_URunAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
// End Cross Module References
	void URunAnimInstance::StaticRegisterNativesURunAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_URunAnimInstance_NoRegister()
	{
		return URunAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_URunAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URunAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URunAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "RunAnimInstance.h" },
		{ "ModuleRelativePath", "RunAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URunAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RunAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URunAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000020815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URunAnimInstance, Speed), METADATA_PARAMS(Z_Construct_UClass_URunAnimInstance_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URunAnimInstance_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URunAnimInstance_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RunAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_URunAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((URunAnimInstance*)Obj)->bIsInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URunAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0010000000020815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URunAnimInstance), &Z_Construct_UClass_URunAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_URunAnimInstance_Statics::NewProp_bIsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URunAnimInstance_Statics::NewProp_bIsInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URunAnimInstance_Statics::NewProp_Pawn_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RunAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URunAnimInstance_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000020815, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URunAnimInstance, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URunAnimInstance_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URunAnimInstance_Statics::NewProp_Pawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URunAnimInstance_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RunAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URunAnimInstance_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00100000000a081d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URunAnimInstance, MovementComponent), Z_Construct_UClass_UPawnMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URunAnimInstance_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URunAnimInstance_Statics::NewProp_MovementComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URunAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URunAnimInstance_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URunAnimInstance_Statics::NewProp_bIsInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URunAnimInstance_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URunAnimInstance_Statics::NewProp_MovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URunAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URunAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URunAnimInstance_Statics::ClassParams = {
		&URunAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URunAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URunAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URunAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URunAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URunAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URunAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URunAnimInstance, 1830550756);
	template<> ENDLESSRUNNER_API UClass* StaticClass<URunAnimInstance>()
	{
		return URunAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URunAnimInstance(Z_Construct_UClass_URunAnimInstance, &URunAnimInstance::StaticClass, TEXT("/Script/EndlessRunner"), TEXT("URunAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URunAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
