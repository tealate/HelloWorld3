// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelloSlime3/WorldCreatorHub.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldCreatorHub() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	HELLOSLIME3_API UClass* Z_Construct_UClass_UWorldCreatorHub();
	HELLOSLIME3_API UClass* Z_Construct_UClass_UWorldCreatorHub_NoRegister();
	HELLOSLIME3_API UScriptStruct* Z_Construct_UScriptStruct_FChank();
	HELLOSLIME3_API UScriptStruct* Z_Construct_UScriptStruct_FChankGroup();
	UPackage* Z_Construct_UPackage__Script_HelloSlime3();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChankGroup;
class UScriptStruct* FChankGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChankGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChankGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChankGroup, (UObject*)Z_Construct_UPackage__Script_HelloSlime3(), TEXT("ChankGroup"));
	}
	return Z_Registration_Info_UScriptStruct_ChankGroup.OuterSingleton;
}
template<> HELLOSLIME3_API UScriptStruct* StaticStruct<FChankGroup>()
{
	return FChankGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChankGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChankGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WorldCreatorHub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChankGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChankGroup>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChankGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HelloSlime3,
		nullptr,
		&NewStructOps,
		"ChankGroup",
		nullptr,
		0,
		sizeof(FChankGroup),
		alignof(FChankGroup),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChankGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChankGroup_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChankGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_ChankGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChankGroup.InnerSingleton, Z_Construct_UScriptStruct_FChankGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChankGroup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Chank;
class UScriptStruct* FChank::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Chank.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Chank.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChank, (UObject*)Z_Construct_UPackage__Script_HelloSlime3(), TEXT("Chank"));
	}
	return Z_Registration_Info_UScriptStruct_Chank.OuterSingleton;
}
template<> HELLOSLIME3_API UScriptStruct* StaticStruct<FChank>()
{
	return FChank::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChank_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChank_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WorldCreatorHub.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChank_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChank>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChank_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HelloSlime3,
		nullptr,
		&NewStructOps,
		"Chank",
		nullptr,
		0,
		sizeof(FChank),
		alignof(FChank),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChank_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChank_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChank()
	{
		if (!Z_Registration_Info_UScriptStruct_Chank.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Chank.InnerSingleton, Z_Construct_UScriptStruct_FChank_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Chank.InnerSingleton;
	}
	DEFINE_FUNCTION(UWorldCreatorHub::execCallCountMan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->CallCountMan();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldCreatorHub::execGetChankCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetChankCount();
		P_NATIVE_END;
	}
	void UWorldCreatorHub::StaticRegisterNativesUWorldCreatorHub()
	{
		UClass* Class = UWorldCreatorHub::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallCountMan", &UWorldCreatorHub::execCallCountMan },
			{ "GetChankCount", &UWorldCreatorHub::execGetChankCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWorldCreatorHub_CallCountMan_Statics
	{
		struct WorldCreatorHub_eventCallCountMan_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWorldCreatorHub_CallCountMan_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldCreatorHub_CallCountMan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldCreatorHub_eventCallCountMan_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldCreatorHub_CallCountMan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldCreatorHub_CallCountMan_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldCreatorHub_CallCountMan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldCreatorHub_CallCountMan_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WorldCreatorHub.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldCreatorHub_CallCountMan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldCreatorHub, nullptr, "CallCountMan", nullptr, nullptr, Z_Construct_UFunction_UWorldCreatorHub_CallCountMan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldCreatorHub_CallCountMan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldCreatorHub_CallCountMan_Statics::WorldCreatorHub_eventCallCountMan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldCreatorHub_CallCountMan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldCreatorHub_CallCountMan_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldCreatorHub_CallCountMan_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWorldCreatorHub_CallCountMan_Statics::WorldCreatorHub_eventCallCountMan_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWorldCreatorHub_CallCountMan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldCreatorHub_CallCountMan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldCreatorHub_GetChankCount_Statics
	{
		struct WorldCreatorHub_eventGetChankCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWorldCreatorHub_GetChankCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldCreatorHub_eventGetChankCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldCreatorHub_GetChankCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldCreatorHub_GetChankCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldCreatorHub_GetChankCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WorldCreatorHub.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldCreatorHub_GetChankCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldCreatorHub, nullptr, "GetChankCount", nullptr, nullptr, Z_Construct_UFunction_UWorldCreatorHub_GetChankCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldCreatorHub_GetChankCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldCreatorHub_GetChankCount_Statics::WorldCreatorHub_eventGetChankCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldCreatorHub_GetChankCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldCreatorHub_GetChankCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldCreatorHub_GetChankCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWorldCreatorHub_GetChankCount_Statics::WorldCreatorHub_eventGetChankCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWorldCreatorHub_GetChankCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldCreatorHub_GetChankCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldCreatorHub);
	UClass* Z_Construct_UClass_UWorldCreatorHub_NoRegister()
	{
		return UWorldCreatorHub::StaticClass();
	}
	struct Z_Construct_UClass_UWorldCreatorHub_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceTarget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InstanceTarget;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChankCount_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChankCount_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChankCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstChankScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstChankScale;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slice_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slice_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Slice;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChankColor_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChankColor_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChankColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawChank_MetaData[];
#endif
		static void NewProp_DrawChank_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawChank;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldCreatorHub_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HelloSlime3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldCreatorHub_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWorldCreatorHub_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldCreatorHub_CallCountMan, "CallCountMan" }, // 2681276355
		{ &Z_Construct_UFunction_UWorldCreatorHub_GetChankCount, "GetChankCount" }, // 1366504373
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldCreatorHub_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldCreatorHub_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WorldCreatorHub.h" },
		{ "ModuleRelativePath", "WorldCreatorHub.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_InstanceTarget_MetaData[] = {
		{ "Category", "WorldCreatorHub" },
		{ "ModuleRelativePath", "WorldCreatorHub.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_InstanceTarget = { "InstanceTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldCreatorHub, InstanceTarget), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_InstanceTarget_MetaData), Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_InstanceTarget_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_ChankCount_Inner = { "ChankCount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_ChankCount_MetaData[] = {
		{ "Category", "ChankDebug" },
		{ "ModuleRelativePath", "WorldCreatorHub.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_ChankCount = { "ChankCount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldCreatorHub, ChankCount), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_ChankCount_MetaData), Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_ChankCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_FirstChankScale_MetaData[] = {
		{ "Category", "ChankDebug" },
		{ "ModuleRelativePath", "WorldCreatorHub.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_FirstChankScale = { "FirstChankScale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldCreatorHub, FirstChankScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_FirstChankScale_MetaData), Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_FirstChankScale_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_Slice_Inner = { "Slice", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_Slice_MetaData[] = {
		{ "Category", "ChankDebug" },
		{ "ModuleRelativePath", "WorldCreatorHub.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_Slice = { "Slice", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldCreatorHub, Slice), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_Slice_MetaData), Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_Slice_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_ChankColor_Inner = { "ChankColor", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_ChankColor_MetaData[] = {
		{ "Category", "ChankDebug" },
		{ "ModuleRelativePath", "WorldCreatorHub.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_ChankColor = { "ChankColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldCreatorHub, ChankColor), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_ChankColor_MetaData), Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_ChankColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_DrawChank_MetaData[] = {
		{ "Category", "ChankDebug" },
		{ "ModuleRelativePath", "WorldCreatorHub.h" },
	};
#endif
	void Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_DrawChank_SetBit(void* Obj)
	{
		((UWorldCreatorHub*)Obj)->DrawChank = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_DrawChank = { "DrawChank", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldCreatorHub), &Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_DrawChank_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_DrawChank_MetaData), Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_DrawChank_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldCreatorHub_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_InstanceTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_ChankCount_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_ChankCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_FirstChankScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_Slice_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_Slice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_ChankColor_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_ChankColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldCreatorHub_Statics::NewProp_DrawChank,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldCreatorHub_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldCreatorHub>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldCreatorHub_Statics::ClassParams = {
		&UWorldCreatorHub::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWorldCreatorHub_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldCreatorHub_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldCreatorHub_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldCreatorHub_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldCreatorHub_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWorldCreatorHub()
	{
		if (!Z_Registration_Info_UClass_UWorldCreatorHub.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldCreatorHub.OuterSingleton, Z_Construct_UClass_UWorldCreatorHub_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldCreatorHub.OuterSingleton;
	}
	template<> HELLOSLIME3_API UClass* StaticClass<UWorldCreatorHub>()
	{
		return UWorldCreatorHub::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldCreatorHub);
	UWorldCreatorHub::~UWorldCreatorHub() {}
	struct Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_WorldCreatorHub_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_WorldCreatorHub_h_Statics::ScriptStructInfo[] = {
		{ FChankGroup::StaticStruct, Z_Construct_UScriptStruct_FChankGroup_Statics::NewStructOps, TEXT("ChankGroup"), &Z_Registration_Info_UScriptStruct_ChankGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChankGroup), 656766225U) },
		{ FChank::StaticStruct, Z_Construct_UScriptStruct_FChank_Statics::NewStructOps, TEXT("Chank"), &Z_Registration_Info_UScriptStruct_Chank, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChank), 3346815085U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_WorldCreatorHub_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldCreatorHub, UWorldCreatorHub::StaticClass, TEXT("UWorldCreatorHub"), &Z_Registration_Info_UClass_UWorldCreatorHub, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldCreatorHub), 411863817U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_WorldCreatorHub_h_76945023(TEXT("/Script/HelloSlime3"),
		Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_WorldCreatorHub_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_WorldCreatorHub_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_WorldCreatorHub_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_WorldCreatorHub_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
