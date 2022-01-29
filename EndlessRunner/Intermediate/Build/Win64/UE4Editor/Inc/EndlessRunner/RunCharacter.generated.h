// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENDLESSRUNNER_RunCharacter_generated_h
#error "RunCharacter.generated.h already included, missing '#pragma once' in RunCharacter.h"
#endif
#define ENDLESSRUNNER_RunCharacter_generated_h

#define EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_SPARSE_DATA
#define EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execMoveDown); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveLeft); \
	DECLARE_FUNCTION(execDeath); \
	DECLARE_FUNCTION(execChangeLandFinished); \
	DECLARE_FUNCTION(execChangeLaneUpdate);


#define EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execMoveDown); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveLeft); \
	DECLARE_FUNCTION(execDeath); \
	DECLARE_FUNCTION(execChangeLandFinished); \
	DECLARE_FUNCTION(execChangeLaneUpdate);


#define EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_EVENT_PARMS
#define EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_CALLBACK_WRAPPERS
#define EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARunCharacter(); \
	friend struct Z_Construct_UClass_ARunCharacter_Statics; \
public: \
	DECLARE_CLASS(ARunCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EndlessRunner"), NO_API) \
	DECLARE_SERIALIZER(ARunCharacter)


#define EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARunCharacter(); \
	friend struct Z_Construct_UClass_ARunCharacter_Statics; \
public: \
	DECLARE_CLASS(ARunCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EndlessRunner"), NO_API) \
	DECLARE_SERIALIZER(ARunCharacter)


#define EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunCharacter(ARunCharacter&&); \
	NO_API ARunCharacter(const ARunCharacter&); \
public:


#define EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunCharacter(ARunCharacter&&); \
	NO_API ARunCharacter(const ARunCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARunCharacter)


#define EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraArm() { return STRUCT_OFFSET(ARunCharacter, CameraArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ARunCharacter, Camera); } \
	FORCEINLINE static uint32 __PPO__RunGameMode() { return STRUCT_OFFSET(ARunCharacter, RunGameMode); } \
	FORCEINLINE static uint32 __PPO__RestartTimerHandle() { return STRUCT_OFFSET(ARunCharacter, RestartTimerHandle); } \
	FORCEINLINE static uint32 __PPO__bIsDead() { return STRUCT_OFFSET(ARunCharacter, bIsDead); }


#define EndlessRunner_Source_EndlessRunner_RunCharacter_h_9_PROLOG \
	EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_EVENT_PARMS


#define EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_SPARSE_DATA \
	EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_RPC_WRAPPERS \
	EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_CALLBACK_WRAPPERS \
	EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_INCLASS \
	EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_SPARSE_DATA \
	EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_CALLBACK_WRAPPERS \
	EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_INCLASS_NO_PURE_DECLS \
	EndlessRunner_Source_EndlessRunner_RunCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENDLESSRUNNER_API UClass* StaticClass<class ARunCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EndlessRunner_Source_EndlessRunner_RunCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
