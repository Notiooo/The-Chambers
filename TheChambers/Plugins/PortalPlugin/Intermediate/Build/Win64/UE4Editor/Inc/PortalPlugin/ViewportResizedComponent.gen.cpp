// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortalPlugin/Classes/ViewportResizedComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportResizedComponent() {}
// Cross Module References
	PORTALPLUGIN_API UFunction* Z_Construct_UDelegateFunction_UViewportResizedComponent_OnViewportResized__DelegateSignature();
	PORTALPLUGIN_API UClass* Z_Construct_UClass_UViewportResizedComponent();
	PORTALPLUGIN_API UClass* Z_Construct_UClass_UViewportResizedComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PortalPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UViewportResizedComponent_OnViewportResized__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UViewportResizedComponent_OnViewportResized__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/ViewportResizedComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UViewportResizedComponent_OnViewportResized__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportResizedComponent, nullptr, "OnViewportResized__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UViewportResizedComponent_OnViewportResized__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UViewportResizedComponent_OnViewportResized__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UViewportResizedComponent_OnViewportResized__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UViewportResizedComponent_OnViewportResized__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UViewportResizedComponent::StaticRegisterNativesUViewportResizedComponent()
	{
	}
	UClass* Z_Construct_UClass_UViewportResizedComponent_NoRegister()
	{
		return UViewportResizedComponent::StaticClass();
	}
	struct Z_Construct_UClass_UViewportResizedComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnViewportResized_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnViewportResized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportResizedComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PortalPlugin,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UViewportResizedComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UViewportResizedComponent_OnViewportResized__DelegateSignature, "OnViewportResized__DelegateSignature" }, // 3894506408
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportResizedComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "IncludePath", "ViewportResizedComponent.h" },
		{ "ModuleRelativePath", "Classes/ViewportResizedComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportResizedComponent_Statics::NewProp_OnViewportResized_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Classes/ViewportResizedComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UViewportResizedComponent_Statics::NewProp_OnViewportResized = { "OnViewportResized", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UViewportResizedComponent, OnViewportResized), Z_Construct_UDelegateFunction_UViewportResizedComponent_OnViewportResized__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UViewportResizedComponent_Statics::NewProp_OnViewportResized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportResizedComponent_Statics::NewProp_OnViewportResized_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewportResizedComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportResizedComponent_Statics::NewProp_OnViewportResized,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportResizedComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportResizedComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UViewportResizedComponent_Statics::ClassParams = {
		&UViewportResizedComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UViewportResizedComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UViewportResizedComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UViewportResizedComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportResizedComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewportResizedComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UViewportResizedComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UViewportResizedComponent, 435676595);
	template<> PORTALPLUGIN_API UClass* StaticClass<UViewportResizedComponent>()
	{
		return UViewportResizedComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UViewportResizedComponent(Z_Construct_UClass_UViewportResizedComponent, &UViewportResizedComponent::StaticClass, TEXT("/Script/PortalPlugin"), TEXT("UViewportResizedComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportResizedComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
