// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceRPG/SpaceEnemyOne.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceEnemyOne() {}
// Cross Module References
	SPACERPG_API UClass* Z_Construct_UClass_ASpaceEnemyOne_NoRegister();
	SPACERPG_API UClass* Z_Construct_UClass_ASpaceEnemyOne();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SpaceRPG();
// End Cross Module References
	void ASpaceEnemyOne::StaticRegisterNativesASpaceEnemyOne()
	{
	}
	UClass* Z_Construct_UClass_ASpaceEnemyOne_NoRegister()
	{
		return ASpaceEnemyOne::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceEnemyOne_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceEnemyOne_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceEnemyOne_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpaceEnemyOne.h" },
		{ "ModuleRelativePath", "SpaceEnemyOne.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceEnemyOne_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceEnemyOne>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpaceEnemyOne_Statics::ClassParams = {
		&ASpaceEnemyOne::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceEnemyOne_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpaceEnemyOne_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceEnemyOne()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpaceEnemyOne_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpaceEnemyOne, 3273794212);
	template<> SPACERPG_API UClass* StaticClass<ASpaceEnemyOne>()
	{
		return ASpaceEnemyOne::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpaceEnemyOne(Z_Construct_UClass_ASpaceEnemyOne, &ASpaceEnemyOne::StaticClass, TEXT("/Script/SpaceRPG"), TEXT("ASpaceEnemyOne"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceEnemyOne);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
