// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ENDLESSRUNNER_CoinItem_generated_h
#error "CoinItem.generated.h already included, missing '#pragma once' in CoinItem.h"
#endif
#define ENDLESSRUNNER_CoinItem_generated_h

#define EndlessRunner_Source_EndlessRunner_CoinItem_h_12_SPARSE_DATA
#define EndlessRunner_Source_EndlessRunner_CoinItem_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define EndlessRunner_Source_EndlessRunner_CoinItem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define EndlessRunner_Source_EndlessRunner_CoinItem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoinItem(); \
	friend struct Z_Construct_UClass_ACoinItem_Statics; \
public: \
	DECLARE_CLASS(ACoinItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EndlessRunner"), NO_API) \
	DECLARE_SERIALIZER(ACoinItem)


#define EndlessRunner_Source_EndlessRunner_CoinItem_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACoinItem(); \
	friend struct Z_Construct_UClass_ACoinItem_Statics; \
public: \
	DECLARE_CLASS(ACoinItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EndlessRunner"), NO_API) \
	DECLARE_SERIALIZER(ACoinItem)


#define EndlessRunner_Source_EndlessRunner_CoinItem_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACoinItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoinItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoinItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoinItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoinItem(ACoinItem&&); \
	NO_API ACoinItem(const ACoinItem&); \
public:


#define EndlessRunner_Source_EndlessRunner_CoinItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoinItem(ACoinItem&&); \
	NO_API ACoinItem(const ACoinItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoinItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoinItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACoinItem)


#define EndlessRunner_Source_EndlessRunner_CoinItem_h_12_PRIVATE_PROPERTY_OFFSET
#define EndlessRunner_Source_EndlessRunner_CoinItem_h_9_PROLOG
#define EndlessRunner_Source_EndlessRunner_CoinItem_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EndlessRunner_Source_EndlessRunner_CoinItem_h_12_PRIVATE_PROPERTY_OFFSET \
	EndlessRunner_Source_EndlessRunner_CoinItem_h_12_SPARSE_DATA \
	EndlessRunner_Source_EndlessRunner_CoinItem_h_12_RPC_WRAPPERS \
	EndlessRunner_Source_EndlessRunner_CoinItem_h_12_INCLASS \
	EndlessRunner_Source_EndlessRunner_CoinItem_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EndlessRunner_Source_EndlessRunner_CoinItem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EndlessRunner_Source_EndlessRunner_CoinItem_h_12_PRIVATE_PROPERTY_OFFSET \
	EndlessRunner_Source_EndlessRunner_CoinItem_h_12_SPARSE_DATA \
	EndlessRunner_Source_EndlessRunner_CoinItem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	EndlessRunner_Source_EndlessRunner_CoinItem_h_12_INCLASS_NO_PURE_DECLS \
	EndlessRunner_Source_EndlessRunner_CoinItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENDLESSRUNNER_API UClass* StaticClass<class ACoinItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EndlessRunner_Source_EndlessRunner_CoinItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
