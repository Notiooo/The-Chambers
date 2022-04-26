// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortalPlugin/Classes/PortalFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalFunctionLibrary() {}
// Cross Module References
	PORTALPLUGIN_API UClass* Z_Construct_UClass_UPortalFunctionLibrary_NoRegister();
	PORTALPLUGIN_API UClass* Z_Construct_UClass_UPortalFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PortalPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPortalFunctionLibrary::execGetQuatMappedToTargetTransform)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Rotation);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Source);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UPortalFunctionLibrary::GetQuatMappedToTargetTransform(Z_Param_Out_Rotation,Z_Param_Out_Source,Z_Param_Out_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalFunctionLibrary::execGetQuatMappedToTarget)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Rotation);
		P_GET_OBJECT(USceneComponent,Z_Param_Source);
		P_GET_OBJECT(USceneComponent,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UPortalFunctionLibrary::GetQuatMappedToTarget(Z_Param_Out_Rotation,Z_Param_Source,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalFunctionLibrary::execGetRotationMappedToTargetTransform)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Source);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UPortalFunctionLibrary::GetRotationMappedToTargetTransform(Z_Param_Out_Rotation,Z_Param_Out_Source,Z_Param_Out_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalFunctionLibrary::execGetRotationMappedToTarget)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
		P_GET_OBJECT(USceneComponent,Z_Param_Source);
		P_GET_OBJECT(USceneComponent,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UPortalFunctionLibrary::GetRotationMappedToTarget(Z_Param_Out_Rotation,Z_Param_Source,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalFunctionLibrary::execGetDirectionMappedToTargetTransform)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Source);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UPortalFunctionLibrary::GetDirectionMappedToTargetTransform(Z_Param_Out_Direction,Z_Param_Out_Source,Z_Param_Out_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalFunctionLibrary::execGetDirectionMappedToTarget)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
		P_GET_OBJECT(USceneComponent,Z_Param_Source);
		P_GET_OBJECT(USceneComponent,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UPortalFunctionLibrary::GetDirectionMappedToTarget(Z_Param_Out_Direction,Z_Param_Source,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalFunctionLibrary::execGetLocationMappedToTargetTransform)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Source);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UPortalFunctionLibrary::GetLocationMappedToTargetTransform(Z_Param_Out_Location,Z_Param_Out_Source,Z_Param_Out_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalFunctionLibrary::execGetLocationMappedToTarget)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_OBJECT(USceneComponent,Z_Param_Source);
		P_GET_OBJECT(USceneComponent,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UPortalFunctionLibrary::GetLocationMappedToTarget(Z_Param_Out_Location,Z_Param_Source,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalFunctionLibrary::execUpdateFullPortalState)
	{
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_CaptureComponent);
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MaterialInstance);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CameraTransform);
		P_GET_OBJECT(USceneComponent,Z_Param_SourcePortal);
		P_GET_OBJECT(USceneComponent,Z_Param_TargetPortal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClipOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPortalFunctionLibrary::UpdateFullPortalState(Z_Param_CaptureComponent,Z_Param_MaterialInstance,Z_Param_Out_CameraTransform,Z_Param_SourcePortal,Z_Param_TargetPortal,Z_Param_ClipOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalFunctionLibrary::execUpdateCaptureComponentClipPlaneTransform)
	{
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_CaptureComponent);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TargetPortal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClipOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPortalFunctionLibrary::UpdateCaptureComponentClipPlaneTransform(Z_Param_CaptureComponent,Z_Param_Out_TargetPortal,Z_Param_ClipOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalFunctionLibrary::execUpdateCaptureComponentClipplane)
	{
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_CaptureComponent);
		P_GET_OBJECT(USceneComponent,Z_Param_TargetPortal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClipOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPortalFunctionLibrary::UpdateCaptureComponentClipplane(Z_Param_CaptureComponent,Z_Param_TargetPortal,Z_Param_ClipOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalFunctionLibrary::execUpdateCaptureComponentWithTransforms)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_CaptureComponent);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CameraTransform);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SourcePortal);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TargetPortal);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPortalFunctionLibrary::UpdateCaptureComponentWithTransforms(Z_Param_CaptureComponent,Z_Param_Out_CameraTransform,Z_Param_Out_SourcePortal,Z_Param_Out_TargetPortal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalFunctionLibrary::execUpdateCaptureComponentTransform)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_CaptureComponent);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CameraTransform);
		P_GET_OBJECT(USceneComponent,Z_Param_SourcePortal);
		P_GET_OBJECT(USceneComponent,Z_Param_TargetPortal);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPortalFunctionLibrary::UpdateCaptureComponentTransform(Z_Param_CaptureComponent,Z_Param_Out_CameraTransform,Z_Param_SourcePortal,Z_Param_TargetPortal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalFunctionLibrary::execUpdatePortalVPMParameters)
	{
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_CaptureComponent);
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MaterialInstance);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CameraTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPortalFunctionLibrary::UpdatePortalVPMParameters(Z_Param_CaptureComponent,Z_Param_MaterialInstance,Z_Param_Out_CameraTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalFunctionLibrary::execGetFOVForCaptureComponents)
	{
		P_GET_OBJECT(APlayerController,Z_Param_ForPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPortalFunctionLibrary::GetFOVForCaptureComponents(Z_Param_ForPlayerController);
		P_NATIVE_END;
	}
	void UPortalFunctionLibrary::StaticRegisterNativesUPortalFunctionLibrary()
	{
		UClass* Class = UPortalFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDirectionMappedToTarget", &UPortalFunctionLibrary::execGetDirectionMappedToTarget },
			{ "GetDirectionMappedToTargetTransform", &UPortalFunctionLibrary::execGetDirectionMappedToTargetTransform },
			{ "GetFOVForCaptureComponents", &UPortalFunctionLibrary::execGetFOVForCaptureComponents },
			{ "GetLocationMappedToTarget", &UPortalFunctionLibrary::execGetLocationMappedToTarget },
			{ "GetLocationMappedToTargetTransform", &UPortalFunctionLibrary::execGetLocationMappedToTargetTransform },
			{ "GetQuatMappedToTarget", &UPortalFunctionLibrary::execGetQuatMappedToTarget },
			{ "GetQuatMappedToTargetTransform", &UPortalFunctionLibrary::execGetQuatMappedToTargetTransform },
			{ "GetRotationMappedToTarget", &UPortalFunctionLibrary::execGetRotationMappedToTarget },
			{ "GetRotationMappedToTargetTransform", &UPortalFunctionLibrary::execGetRotationMappedToTargetTransform },
			{ "UpdateCaptureComponentClipplane", &UPortalFunctionLibrary::execUpdateCaptureComponentClipplane },
			{ "UpdateCaptureComponentClipPlaneTransform", &UPortalFunctionLibrary::execUpdateCaptureComponentClipPlaneTransform },
			{ "UpdateCaptureComponentTransform", &UPortalFunctionLibrary::execUpdateCaptureComponentTransform },
			{ "UpdateCaptureComponentWithTransforms", &UPortalFunctionLibrary::execUpdateCaptureComponentWithTransforms },
			{ "UpdateFullPortalState", &UPortalFunctionLibrary::execUpdateFullPortalState },
			{ "UpdatePortalVPMParameters", &UPortalFunctionLibrary::execUpdatePortalVPMParameters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics
	{
		struct PortalFunctionLibrary_eventGetDirectionMappedToTarget_Parms
		{
			FVector Direction;
			const USceneComponent* Source;
			const USceneComponent* Target;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetDirectionMappedToTarget_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetDirectionMappedToTarget_Parms, Source), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetDirectionMappedToTarget_Parms, Target), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetDirectionMappedToTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Classes/PortalFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalFunctionLibrary, nullptr, "GetDirectionMappedToTarget", nullptr, nullptr, sizeof(PortalFunctionLibrary_eventGetDirectionMappedToTarget_Parms), Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics
	{
		struct PortalFunctionLibrary_eventGetDirectionMappedToTargetTransform_Parms
		{
			FVector Direction;
			FTransform Source;
			FTransform Target;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetDirectionMappedToTargetTransform_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetDirectionMappedToTargetTransform_Parms, Source), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetDirectionMappedToTargetTransform_Parms, Target), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetDirectionMappedToTargetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Classes/PortalFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalFunctionLibrary, nullptr, "GetDirectionMappedToTargetTransform", nullptr, nullptr, sizeof(PortalFunctionLibrary_eventGetDirectionMappedToTargetTransform_Parms), Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents_Statics
	{
		struct PortalFunctionLibrary_eventGetFOVForCaptureComponents_Parms
		{
			const APlayerController* ForPlayerController;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForPlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForPlayerController;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents_Statics::NewProp_ForPlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents_Statics::NewProp_ForPlayerController = { "ForPlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetFOVForCaptureComponents_Parms, ForPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents_Statics::NewProp_ForPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents_Statics::NewProp_ForPlayerController_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetFOVForCaptureComponents_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents_Statics::NewProp_ForPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "CPP_Default_ForPlayerController", "None" },
		{ "ModuleRelativePath", "Classes/PortalFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalFunctionLibrary, nullptr, "GetFOVForCaptureComponents", nullptr, nullptr, sizeof(PortalFunctionLibrary_eventGetFOVForCaptureComponents_Parms), Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics
	{
		struct PortalFunctionLibrary_eventGetLocationMappedToTarget_Parms
		{
			FVector Location;
			const USceneComponent* Source;
			const USceneComponent* Target;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetLocationMappedToTarget_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetLocationMappedToTarget_Parms, Source), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetLocationMappedToTarget_Parms, Target), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetLocationMappedToTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Classes/PortalFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalFunctionLibrary, nullptr, "GetLocationMappedToTarget", nullptr, nullptr, sizeof(PortalFunctionLibrary_eventGetLocationMappedToTarget_Parms), Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics
	{
		struct PortalFunctionLibrary_eventGetLocationMappedToTargetTransform_Parms
		{
			FVector Location;
			FTransform Source;
			FTransform Target;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetLocationMappedToTargetTransform_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetLocationMappedToTargetTransform_Parms, Source), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetLocationMappedToTargetTransform_Parms, Target), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetLocationMappedToTargetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Classes/PortalFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalFunctionLibrary, nullptr, "GetLocationMappedToTargetTransform", nullptr, nullptr, sizeof(PortalFunctionLibrary_eventGetLocationMappedToTargetTransform_Parms), Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics
	{
		struct PortalFunctionLibrary_eventGetQuatMappedToTarget_Parms
		{
			FQuat Rotation;
			const USceneComponent* Source;
			const USceneComponent* Target;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetQuatMappedToTarget_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetQuatMappedToTarget_Parms, Source), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetQuatMappedToTarget_Parms, Target), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetQuatMappedToTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Classes/PortalFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalFunctionLibrary, nullptr, "GetQuatMappedToTarget", nullptr, nullptr, sizeof(PortalFunctionLibrary_eventGetQuatMappedToTarget_Parms), Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics
	{
		struct PortalFunctionLibrary_eventGetQuatMappedToTargetTransform_Parms
		{
			FQuat Rotation;
			FTransform Source;
			FTransform Target;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetQuatMappedToTargetTransform_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetQuatMappedToTargetTransform_Parms, Source), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetQuatMappedToTargetTransform_Parms, Target), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetQuatMappedToTargetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Classes/PortalFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalFunctionLibrary, nullptr, "GetQuatMappedToTargetTransform", nullptr, nullptr, sizeof(PortalFunctionLibrary_eventGetQuatMappedToTargetTransform_Parms), Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics
	{
		struct PortalFunctionLibrary_eventGetRotationMappedToTarget_Parms
		{
			FRotator Rotation;
			const USceneComponent* Source;
			const USceneComponent* Target;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetRotationMappedToTarget_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetRotationMappedToTarget_Parms, Source), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetRotationMappedToTarget_Parms, Target), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetRotationMappedToTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Classes/PortalFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalFunctionLibrary, nullptr, "GetRotationMappedToTarget", nullptr, nullptr, sizeof(PortalFunctionLibrary_eventGetRotationMappedToTarget_Parms), Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics
	{
		struct PortalFunctionLibrary_eventGetRotationMappedToTargetTransform_Parms
		{
			FRotator Rotation;
			FTransform Source;
			FTransform Target;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetRotationMappedToTargetTransform_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetRotationMappedToTargetTransform_Parms, Source), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetRotationMappedToTargetTransform_Parms, Target), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventGetRotationMappedToTargetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Classes/PortalFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalFunctionLibrary, nullptr, "GetRotationMappedToTargetTransform", nullptr, nullptr, sizeof(PortalFunctionLibrary_eventGetRotationMappedToTargetTransform_Parms), Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics
	{
		struct PortalFunctionLibrary_eventUpdateCaptureComponentClipplane_Parms
		{
			USceneCaptureComponent2D* CaptureComponent;
			const USceneComponent* TargetPortal;
			float ClipOffset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPortal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPortal;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClipOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateCaptureComponentClipplane_Parms, CaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::NewProp_CaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::NewProp_CaptureComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::NewProp_TargetPortal_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::NewProp_TargetPortal = { "TargetPortal", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateCaptureComponentClipplane_Parms, TargetPortal), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::NewProp_TargetPortal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::NewProp_TargetPortal_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::NewProp_ClipOffset = { "ClipOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateCaptureComponentClipplane_Parms, ClipOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::NewProp_CaptureComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::NewProp_TargetPortal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::NewProp_ClipOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "CPP_Default_ClipOffset", "-5.000000" },
		{ "ModuleRelativePath", "Classes/PortalFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalFunctionLibrary, nullptr, "UpdateCaptureComponentClipplane", nullptr, nullptr, sizeof(PortalFunctionLibrary_eventUpdateCaptureComponentClipplane_Parms), Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics
	{
		struct PortalFunctionLibrary_eventUpdateCaptureComponentClipPlaneTransform_Parms
		{
			USceneCaptureComponent2D* CaptureComponent;
			FTransform TargetPortal;
			float ClipOffset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPortal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPortal;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClipOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateCaptureComponentClipPlaneTransform_Parms, CaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::NewProp_CaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::NewProp_CaptureComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::NewProp_TargetPortal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::NewProp_TargetPortal = { "TargetPortal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateCaptureComponentClipPlaneTransform_Parms, TargetPortal), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::NewProp_TargetPortal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::NewProp_TargetPortal_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::NewProp_ClipOffset = { "ClipOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateCaptureComponentClipPlaneTransform_Parms, ClipOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::NewProp_CaptureComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::NewProp_TargetPortal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::NewProp_ClipOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "CPP_Default_ClipOffset", "-5.000000" },
		{ "ModuleRelativePath", "Classes/PortalFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalFunctionLibrary, nullptr, "UpdateCaptureComponentClipPlaneTransform", nullptr, nullptr, sizeof(PortalFunctionLibrary_eventUpdateCaptureComponentClipPlaneTransform_Parms), Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics
	{
		struct PortalFunctionLibrary_eventUpdateCaptureComponentTransform_Parms
		{
			USceneComponent* CaptureComponent;
			FTransform CameraTransform;
			const USceneComponent* SourcePortal;
			const USceneComponent* TargetPortal;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePortal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourcePortal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPortal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPortal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateCaptureComponentTransform_Parms, CaptureComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_CaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_CaptureComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_CameraTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_CameraTransform = { "CameraTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateCaptureComponentTransform_Parms, CameraTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_CameraTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_CameraTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_SourcePortal_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_SourcePortal = { "SourcePortal", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateCaptureComponentTransform_Parms, SourcePortal), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_SourcePortal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_SourcePortal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_TargetPortal_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_TargetPortal = { "TargetPortal", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateCaptureComponentTransform_Parms, TargetPortal), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_TargetPortal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_TargetPortal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_CaptureComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_CameraTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_SourcePortal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::NewProp_TargetPortal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Classes/PortalFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalFunctionLibrary, nullptr, "UpdateCaptureComponentTransform", nullptr, nullptr, sizeof(PortalFunctionLibrary_eventUpdateCaptureComponentTransform_Parms), Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics
	{
		struct PortalFunctionLibrary_eventUpdateCaptureComponentWithTransforms_Parms
		{
			USceneComponent* CaptureComponent;
			FTransform CameraTransform;
			FTransform SourcePortal;
			FTransform TargetPortal;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePortal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePortal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPortal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPortal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateCaptureComponentWithTransforms_Parms, CaptureComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_CaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_CaptureComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_CameraTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_CameraTransform = { "CameraTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateCaptureComponentWithTransforms_Parms, CameraTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_CameraTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_CameraTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_SourcePortal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_SourcePortal = { "SourcePortal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateCaptureComponentWithTransforms_Parms, SourcePortal), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_SourcePortal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_SourcePortal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_TargetPortal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_TargetPortal = { "TargetPortal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateCaptureComponentWithTransforms_Parms, TargetPortal), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_TargetPortal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_TargetPortal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_CaptureComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_CameraTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_SourcePortal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::NewProp_TargetPortal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Classes/PortalFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalFunctionLibrary, nullptr, "UpdateCaptureComponentWithTransforms", nullptr, nullptr, sizeof(PortalFunctionLibrary_eventUpdateCaptureComponentWithTransforms_Parms), Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics
	{
		struct PortalFunctionLibrary_eventUpdateFullPortalState_Parms
		{
			USceneCaptureComponent2D* CaptureComponent;
			UMaterialInstanceDynamic* MaterialInstance;
			FTransform CameraTransform;
			const USceneComponent* SourcePortal;
			const USceneComponent* TargetPortal;
			float ClipOffset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePortal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourcePortal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPortal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPortal;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClipOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateFullPortalState_Parms, CaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_CaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_CaptureComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateFullPortalState_Parms, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_CameraTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_CameraTransform = { "CameraTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateFullPortalState_Parms, CameraTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_CameraTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_CameraTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_SourcePortal_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_SourcePortal = { "SourcePortal", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateFullPortalState_Parms, SourcePortal), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_SourcePortal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_SourcePortal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_TargetPortal_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_TargetPortal = { "TargetPortal", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateFullPortalState_Parms, TargetPortal), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_TargetPortal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_TargetPortal_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_ClipOffset = { "ClipOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdateFullPortalState_Parms, ClipOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_CaptureComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_MaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_CameraTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_SourcePortal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_TargetPortal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::NewProp_ClipOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "CPP_Default_ClipOffset", "-5.000000" },
		{ "ModuleRelativePath", "Classes/PortalFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalFunctionLibrary, nullptr, "UpdateFullPortalState", nullptr, nullptr, sizeof(PortalFunctionLibrary_eventUpdateFullPortalState_Parms), Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics
	{
		struct PortalFunctionLibrary_eventUpdatePortalVPMParameters_Parms
		{
			USceneCaptureComponent2D* CaptureComponent;
			UMaterialInstanceDynamic* MaterialInstance;
			FTransform CameraTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdatePortalVPMParameters_Parms, CaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::NewProp_CaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::NewProp_CaptureComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdatePortalVPMParameters_Parms, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::NewProp_CameraTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::NewProp_CameraTransform = { "CameraTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalFunctionLibrary_eventUpdatePortalVPMParameters_Parms, CameraTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::NewProp_CameraTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::NewProp_CameraTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::NewProp_CaptureComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::NewProp_MaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::NewProp_CameraTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Classes/PortalFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalFunctionLibrary, nullptr, "UpdatePortalVPMParameters", nullptr, nullptr, sizeof(PortalFunctionLibrary_eventUpdatePortalVPMParameters_Parms), Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPortalFunctionLibrary_NoRegister()
	{
		return UPortalFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPortalFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPortalFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PortalPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPortalFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTarget, "GetDirectionMappedToTarget" }, // 2181408330
		{ &Z_Construct_UFunction_UPortalFunctionLibrary_GetDirectionMappedToTargetTransform, "GetDirectionMappedToTargetTransform" }, // 823215301
		{ &Z_Construct_UFunction_UPortalFunctionLibrary_GetFOVForCaptureComponents, "GetFOVForCaptureComponents" }, // 3718923798
		{ &Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTarget, "GetLocationMappedToTarget" }, // 3175856434
		{ &Z_Construct_UFunction_UPortalFunctionLibrary_GetLocationMappedToTargetTransform, "GetLocationMappedToTargetTransform" }, // 2907543349
		{ &Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTarget, "GetQuatMappedToTarget" }, // 2627690239
		{ &Z_Construct_UFunction_UPortalFunctionLibrary_GetQuatMappedToTargetTransform, "GetQuatMappedToTargetTransform" }, // 4239781463
		{ &Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTarget, "GetRotationMappedToTarget" }, // 2254391737
		{ &Z_Construct_UFunction_UPortalFunctionLibrary_GetRotationMappedToTargetTransform, "GetRotationMappedToTargetTransform" }, // 2148228034
		{ &Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipplane, "UpdateCaptureComponentClipplane" }, // 1474773240
		{ &Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentClipPlaneTransform, "UpdateCaptureComponentClipPlaneTransform" }, // 1140107597
		{ &Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentTransform, "UpdateCaptureComponentTransform" }, // 3483202728
		{ &Z_Construct_UFunction_UPortalFunctionLibrary_UpdateCaptureComponentWithTransforms, "UpdateCaptureComponentWithTransforms" }, // 4252818111
		{ &Z_Construct_UFunction_UPortalFunctionLibrary_UpdateFullPortalState, "UpdateFullPortalState" }, // 4283262114
		{ &Z_Construct_UFunction_UPortalFunctionLibrary_UpdatePortalVPMParameters, "UpdatePortalVPMParameters" }, // 3856848330
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPortalFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Documentation: Enable global clip plane for capture actors\n * \n */" },
		{ "IncludePath", "PortalFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/PortalFunctionLibrary.h" },
		{ "ToolTip", "Documentation: Enable global clip plane for capture actors" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPortalFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPortalFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPortalFunctionLibrary_Statics::ClassParams = {
		&UPortalFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPortalFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPortalFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPortalFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPortalFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPortalFunctionLibrary, 831351558);
	template<> PORTALPLUGIN_API UClass* StaticClass<UPortalFunctionLibrary>()
	{
		return UPortalFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPortalFunctionLibrary(Z_Construct_UClass_UPortalFunctionLibrary, &UPortalFunctionLibrary::StaticClass, TEXT("/Script/PortalPlugin"), TEXT("UPortalFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPortalFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
