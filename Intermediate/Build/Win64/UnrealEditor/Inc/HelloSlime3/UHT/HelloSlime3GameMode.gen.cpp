// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelloSlime3/HelloSlime3GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelloSlime3GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	HELLOSLIME3_API UClass* Z_Construct_UClass_AHelloSlime3GameMode();
	HELLOSLIME3_API UClass* Z_Construct_UClass_AHelloSlime3GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HelloSlime3();
// End Cross Module References
	void AHelloSlime3GameMode::StaticRegisterNativesAHelloSlime3GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHelloSlime3GameMode);
	UClass* Z_Construct_UClass_AHelloSlime3GameMode_NoRegister()
	{
		return AHelloSlime3GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHelloSlime3GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHelloSlime3GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HelloSlime3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHelloSlime3GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelloSlime3GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HelloSlime3GameMode.h" },
		{ "ModuleRelativePath", "HelloSlime3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHelloSlime3GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHelloSlime3GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHelloSlime3GameMode_Statics::ClassParams = {
		&AHelloSlime3GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelloSlime3GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHelloSlime3GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AHelloSlime3GameMode()
	{
		if (!Z_Registration_Info_UClass_AHelloSlime3GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHelloSlime3GameMode.OuterSingleton, Z_Construct_UClass_AHelloSlime3GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHelloSlime3GameMode.OuterSingleton;
	}
	template<> HELLOSLIME3_API UClass* StaticClass<AHelloSlime3GameMode>()
	{
		return AHelloSlime3GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHelloSlime3GameMode);
	AHelloSlime3GameMode::~AHelloSlime3GameMode() {}
	struct Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_HelloSlime3GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_HelloSlime3GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHelloSlime3GameMode, AHelloSlime3GameMode::StaticClass, TEXT("AHelloSlime3GameMode"), &Z_Registration_Info_UClass_AHelloSlime3GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHelloSlime3GameMode), 2677973885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_HelloSlime3GameMode_h_2052562568(TEXT("/Script/HelloSlime3"),
		Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_HelloSlime3GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_HelloSlime3GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
