// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFloorTile;
#ifdef ENDLESSRUNNER_EndlessRunnerGameModeBase_generated_h
#error "EndlessRunnerGameModeBase.generated.h already included, missing '#pragma once' in EndlessRunnerGameModeBase.h"
#endif
#define ENDLESSRUNNER_EndlessRunnerGameModeBase_generated_h

#define EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_SPARSE_DATA
#define EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCoin); \
	DECLARE_FUNCTION(execAddFloorTile); \
	DECLARE_FUNCTION(execCreateinitialFloorTiles);


#define EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCoin); \
	DECLARE_FUNCTION(execAddFloorTile); \
	DECLARE_FUNCTION(execCreateinitialFloorTiles);


#define EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEndlessRunnerGameModeBase(); \
	friend struct Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AEndlessRunnerGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/EndlessRunner"), NO_API) \
	DECLARE_SERIALIZER(AEndlessRunnerGameModeBase)


#define EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAEndlessRunnerGameModeBase(); \
	friend struct Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AEndlessRunnerGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/EndlessRunner"), NO_API) \
	DECLARE_SERIALIZER(AEndlessRunnerGameModeBase)


#define EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEndlessRunnerGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEndlessRunnerGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEndlessRunnerGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEndlessRunnerGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEndlessRunnerGameModeBase(AEndlessRunnerGameModeBase&&); \
	NO_API AEndlessRunnerGameModeBase(const AEndlessRunnerGameModeBase&); \
public:


#define EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEndlessRunnerGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEndlessRunnerGameModeBase(AEndlessRunnerGameModeBase&&); \
	NO_API AEndlessRunnerGameModeBase(const AEndlessRunnerGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEndlessRunnerGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEndlessRunnerGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEndlessRunnerGameModeBase)


#define EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET
#define EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_13_PROLOG
#define EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_SPARSE_DATA \
	EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_RPC_WRAPPERS \
	EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_INCLASS \
	EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_SPARSE_DATA \
	EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
	EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENDLESSRUNNER_API UClass* StaticClass<class AEndlessRunnerGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EndlessRunner_Source_EndlessRunner_EndlessRunnerGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
