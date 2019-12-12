// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceRPG/SpaceRPGGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceRPGGameMode() {}
// Cross Module References
	SPACERPG_API UClass* Z_Construct_UClass_ASpaceRPGGameMode_NoRegister();
	SPACERPG_API UClass* Z_Construct_UClass_ASpaceRPGGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SpaceRPG();
// End Cross Module References
	void ASpaceRPGGameMode::StaticRegisterNativesASpaceRPGGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASpaceRPGGameMode_NoRegister()
	{
		return ASpaceRPGGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceRPGGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceRPGGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceRPGGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The GameMode defines the game being played. It governs the game rules, scoring, what actors\n * are allowed to exist in this game type, and who may enter the game.\n *\n * This game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of SpaceRPGCharacter\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpaceRPGGameMode.h" },
		{ "ModuleRelativePath", "SpaceRPGGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The GameMode defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nThis game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of SpaceRPGCharacter" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceRPGGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceRPGGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpaceRPGGameMode_Statics::ClassParams = {
		&ASpaceRPGGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceRPGGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpaceRPGGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceRPGGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpaceRPGGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpaceRPGGameMode, 3282696315);
	template<> SPACERPG_API UClass* StaticClass<ASpaceRPGGameMode>()
	{
		return ASpaceRPGGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpaceRPGGameMode(Z_Construct_UClass_ASpaceRPGGameMode, &ASpaceRPGGameMode::StaticClass, TEXT("/Script/SpaceRPG"), TEXT("ASpaceRPGGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceRPGGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
