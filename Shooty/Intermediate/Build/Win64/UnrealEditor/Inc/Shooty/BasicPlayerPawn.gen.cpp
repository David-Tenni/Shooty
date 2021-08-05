// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooty/BasicPlayerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicPlayerPawn() {}
// Cross Module References
	SHOOTY_API UClass* Z_Construct_UClass_ABasicPlayerPawn_NoRegister();
	SHOOTY_API UClass* Z_Construct_UClass_ABasicPlayerPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Shooty();
// End Cross Module References
	void ABasicPlayerPawn::StaticRegisterNativesABasicPlayerPawn()
	{
	}
	UClass* Z_Construct_UClass_ABasicPlayerPawn_NoRegister()
	{
		return ABasicPlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_ABasicPlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicPlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicPlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasicPlayerPawn.h" },
		{ "ModuleRelativePath", "BasicPlayerPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicPlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicPlayerPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasicPlayerPawn_Statics::ClassParams = {
		&ABasicPlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasicPlayerPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicPlayerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicPlayerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicPlayerPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicPlayerPawn, 1253475588);
	template<> SHOOTY_API UClass* StaticClass<ABasicPlayerPawn>()
	{
		return ABasicPlayerPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicPlayerPawn(Z_Construct_UClass_ABasicPlayerPawn, &ABasicPlayerPawn::StaticClass, TEXT("/Script/Shooty"), TEXT("ABasicPlayerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicPlayerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
