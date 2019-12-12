// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACERPG_SpaceRPGGameMode_generated_h
#error "SpaceRPGGameMode.generated.h already included, missing '#pragma once' in SpaceRPGGameMode.h"
#endif
#define SPACERPG_SpaceRPGGameMode_generated_h

#define SpaceRPG_Source_SpaceRPG_SpaceRPGGameMode_h_18_RPC_WRAPPERS
#define SpaceRPG_Source_SpaceRPG_SpaceRPGGameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceRPG_Source_SpaceRPG_SpaceRPGGameMode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpaceRPGGameMode(); \
	friend struct Z_Construct_UClass_ASpaceRPGGameMode_Statics; \
public: \
	DECLARE_CLASS(ASpaceRPGGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SpaceRPG"), SPACERPG_API) \
	DECLARE_SERIALIZER(ASpaceRPGGameMode)


#define SpaceRPG_Source_SpaceRPG_SpaceRPGGameMode_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASpaceRPGGameMode(); \
	friend struct Z_Construct_UClass_ASpaceRPGGameMode_Statics; \
public: \
	DECLARE_CLASS(ASpaceRPGGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SpaceRPG"), SPACERPG_API) \
	DECLARE_SERIALIZER(ASpaceRPGGameMode)


#define SpaceRPG_Source_SpaceRPG_SpaceRPGGameMode_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SPACERPG_API ASpaceRPGGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpaceRPGGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SPACERPG_API, ASpaceRPGGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceRPGGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SPACERPG_API ASpaceRPGGameMode(ASpaceRPGGameMode&&); \
	SPACERPG_API ASpaceRPGGameMode(const ASpaceRPGGameMode&); \
public:


#define SpaceRPG_Source_SpaceRPG_SpaceRPGGameMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SPACERPG_API ASpaceRPGGameMode(ASpaceRPGGameMode&&); \
	SPACERPG_API ASpaceRPGGameMode(const ASpaceRPGGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SPACERPG_API, ASpaceRPGGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceRPGGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpaceRPGGameMode)


#define SpaceRPG_Source_SpaceRPG_SpaceRPGGameMode_h_18_PRIVATE_PROPERTY_OFFSET
#define SpaceRPG_Source_SpaceRPG_SpaceRPGGameMode_h_15_PROLOG
#define SpaceRPG_Source_SpaceRPG_SpaceRPGGameMode_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceRPG_Source_SpaceRPG_SpaceRPGGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	SpaceRPG_Source_SpaceRPG_SpaceRPGGameMode_h_18_RPC_WRAPPERS \
	SpaceRPG_Source_SpaceRPG_SpaceRPGGameMode_h_18_INCLASS \
	SpaceRPG_Source_SpaceRPG_SpaceRPGGameMode_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceRPG_Source_SpaceRPG_SpaceRPGGameMode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceRPG_Source_SpaceRPG_SpaceRPGGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	SpaceRPG_Source_SpaceRPG_SpaceRPGGameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceRPG_Source_SpaceRPG_SpaceRPGGameMode_h_18_INCLASS_NO_PURE_DECLS \
	SpaceRPG_Source_SpaceRPG_SpaceRPGGameMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACERPG_API UClass* StaticClass<class ASpaceRPGGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceRPG_Source_SpaceRPG_SpaceRPGGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
