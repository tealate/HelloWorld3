// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelloSlime3/TameshiInstancedMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTameshiInstancedMesh() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent();
	HELLOSLIME3_API UClass* Z_Construct_UClass_UTameshiInstancedMesh();
	HELLOSLIME3_API UClass* Z_Construct_UClass_UTameshiInstancedMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HelloSlime3();
// End Cross Module References
	void UTameshiInstancedMesh::StaticRegisterNativesUTameshiInstancedMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTameshiInstancedMesh);
	UClass* Z_Construct_UClass_UTameshiInstancedMesh_NoRegister()
	{
		return UTameshiInstancedMesh::StaticClass();
	}
	struct Z_Construct_UClass_UTameshiInstancedMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Setform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Setform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstLoc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirstLoc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_callcount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_callcount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTameshiInstancedMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInstancedStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HelloSlime3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTameshiInstancedMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "TameshiInstancedMesh.h" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_InstCount_MetaData[] = {
		{ "Category", "TameshiInstancedMesh" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_InstCount = { "InstCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTameshiInstancedMesh, InstCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_InstCount_MetaData), Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_InstCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Setform_MetaData[] = {
		{ "Category", "TameshiInstancedMesh" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Setform = { "Setform", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTameshiInstancedMesh, Setform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Setform_MetaData), Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Setform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_FirstLoc_MetaData[] = {
		{ "Category", "TameshiInstancedMesh" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_FirstLoc = { "FirstLoc", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTameshiInstancedMesh, FirstLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_FirstLoc_MetaData), Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_FirstLoc_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "TameshiInstancedMesh" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTameshiInstancedMesh, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Distance_MetaData), Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Distance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_callcount_MetaData[] = {
		{ "Category", "TameshiInstancedMesh" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_callcount = { "callcount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTameshiInstancedMesh, callcount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_callcount_MetaData), Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_callcount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTameshiInstancedMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_InstCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Setform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_FirstLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_callcount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTameshiInstancedMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTameshiInstancedMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTameshiInstancedMesh_Statics::ClassParams = {
		&UTameshiInstancedMesh::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTameshiInstancedMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UTameshiInstancedMesh_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTameshiInstancedMesh()
	{
		if (!Z_Registration_Info_UClass_UTameshiInstancedMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTameshiInstancedMesh.OuterSingleton, Z_Construct_UClass_UTameshiInstancedMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTameshiInstancedMesh.OuterSingleton;
	}
	template<> HELLOSLIME3_API UClass* StaticClass<UTameshiInstancedMesh>()
	{
		return UTameshiInstancedMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTameshiInstancedMesh);
	UTameshiInstancedMesh::~UTameshiInstancedMesh() {}
	struct Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTameshiInstancedMesh, UTameshiInstancedMesh::StaticClass, TEXT("UTameshiInstancedMesh"), &Z_Registration_Info_UClass_UTameshiInstancedMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTameshiInstancedMesh), 1795669409U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_2269605362(TEXT("/Script/HelloSlime3"),
		Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
