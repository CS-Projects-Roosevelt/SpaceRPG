// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACERPG_SpaceRPGCharacter_generated_h
#error "SpaceRPGCharacter.generated.h already included, missing '#pragma once' in SpaceRPGCharacter.h"
#endif
#define SPACERPG_SpaceRPGCharacter_generated_h

#define SpaceRPG_Source_SpaceRPG_SpaceRPGCharacter_h_22_RPC_WRAPPERS
#define SpaceRPG_Source_SpaceRPG_SpaceRPGCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceRPG_Source_SpaceRPG_SpaceRPGCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpaceRPGCharacter(); \
	friend struct Z_Construct_UClass_ASpaceRPGCharacter_Statics; \
public: \
	DECLARE_CLASS(ASpaceRPGCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpaceRPG"), NO_API) \
	DECLARE_SERIALIZER(ASpaceRPGCharacter) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define SpaceRPG_Source_SpaceRPG_SpaceRPGCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesASpaceRPGCharacter(); \
	friend struct Z_Construct_UClass_ASpaceRPGCharacter_Statics; \
public: \
	DECLARE_CLASS(ASpaceRPGCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpaceRPG"), NO_API) \
	DECLARE_SERIALIZER(ASpaceRPGCharacter) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define SpaceRPG_Source_SpaceRPG_SpaceRPGCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpaceRPGCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpaceRPGCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceRPGCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceRPGCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceRPGCharacter(ASpaceRPGCharacter&&); \
	NO_API ASpaceRPGCharacter(const ASpaceRPGCharacter&); \
public:


#define SpaceRPG_Source_SpaceRPG_SpaceRPGCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceRPGCharacter(ASpaceRPGCharacter&&); \
	NO_API ASpaceRPGCharacter(const ASpaceRPGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceRPGCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceRPGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpaceRPGCharacter)


#define SpaceRPG_Source_SpaceRPG_SpaceRPGCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(ASpaceRPGCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASpaceRPGCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(ASpaceRPGCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(ASpaceRPGCharacter, IdleAnimation); }


#define SpaceRPG_Source_SpaceRPG_SpaceRPGCharacter_h_19_PROLOG
#define SpaceRPG_Source_SpaceRPG_SpaceRPGCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceRPG_Source_SpaceRPG_SpaceRPGCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	SpaceRPG_Source_SpaceRPG_SpaceRPGCharacter_h_22_RPC_WRAPPERS \
	SpaceRPG_Source_SpaceRPG_SpaceRPGCharacter_h_22_INCLASS \
	SpaceRPG_Source_SpaceRPG_SpaceRPGCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceRPG_Source_SpaceRPG_SpaceRPGCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceRPG_Source_SpaceRPG_SpaceRPGCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	SpaceRPG_Source_SpaceRPG_SpaceRPGCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceRPG_Source_SpaceRPG_SpaceRPGCharacter_h_22_INCLASS_NO_PURE_DECLS \
	SpaceRPG_Source_SpaceRPG_SpaceRPGCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACERPG_API UClass* StaticClass<class ASpaceRPGCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceRPG_Source_SpaceRPG_SpaceRPGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
