// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FQuat;
struct FTransform;
class USceneComponent;
struct FRotator;
struct FVector;
class USceneCaptureComponent2D;
class UMaterialInstanceDynamic;
class APlayerController;
#ifdef PORTALPLUGIN_PortalFunctionLibrary_generated_h
#error "PortalFunctionLibrary.generated.h already included, missing '#pragma once' in PortalFunctionLibrary.h"
#endif
#define PORTALPLUGIN_PortalFunctionLibrary_generated_h

#define PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_SPARSE_DATA
#define PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetQuatMappedToTargetTransform); \
	DECLARE_FUNCTION(execGetQuatMappedToTarget); \
	DECLARE_FUNCTION(execGetRotationMappedToTargetTransform); \
	DECLARE_FUNCTION(execGetRotationMappedToTarget); \
	DECLARE_FUNCTION(execGetDirectionMappedToTargetTransform); \
	DECLARE_FUNCTION(execGetDirectionMappedToTarget); \
	DECLARE_FUNCTION(execGetLocationMappedToTargetTransform); \
	DECLARE_FUNCTION(execGetLocationMappedToTarget); \
	DECLARE_FUNCTION(execUpdateFullPortalState); \
	DECLARE_FUNCTION(execUpdateCaptureComponentClipPlaneTransform); \
	DECLARE_FUNCTION(execUpdateCaptureComponentClipplane); \
	DECLARE_FUNCTION(execUpdateCaptureComponentWithTransforms); \
	DECLARE_FUNCTION(execUpdateCaptureComponentTransform); \
	DECLARE_FUNCTION(execUpdatePortalVPMParameters); \
	DECLARE_FUNCTION(execGetFOVForCaptureComponents);


#define PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetQuatMappedToTargetTransform); \
	DECLARE_FUNCTION(execGetQuatMappedToTarget); \
	DECLARE_FUNCTION(execGetRotationMappedToTargetTransform); \
	DECLARE_FUNCTION(execGetRotationMappedToTarget); \
	DECLARE_FUNCTION(execGetDirectionMappedToTargetTransform); \
	DECLARE_FUNCTION(execGetDirectionMappedToTarget); \
	DECLARE_FUNCTION(execGetLocationMappedToTargetTransform); \
	DECLARE_FUNCTION(execGetLocationMappedToTarget); \
	DECLARE_FUNCTION(execUpdateFullPortalState); \
	DECLARE_FUNCTION(execUpdateCaptureComponentClipPlaneTransform); \
	DECLARE_FUNCTION(execUpdateCaptureComponentClipplane); \
	DECLARE_FUNCTION(execUpdateCaptureComponentWithTransforms); \
	DECLARE_FUNCTION(execUpdateCaptureComponentTransform); \
	DECLARE_FUNCTION(execUpdatePortalVPMParameters); \
	DECLARE_FUNCTION(execGetFOVForCaptureComponents);


#define PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPortalFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPortalFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPortalFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PortalPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPortalFunctionLibrary)


#define PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPortalFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPortalFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPortalFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PortalPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPortalFunctionLibrary)


#define PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPortalFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPortalFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPortalFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPortalFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPortalFunctionLibrary(UPortalFunctionLibrary&&); \
	NO_API UPortalFunctionLibrary(const UPortalFunctionLibrary&); \
public:


#define PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPortalFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPortalFunctionLibrary(UPortalFunctionLibrary&&); \
	NO_API UPortalFunctionLibrary(const UPortalFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPortalFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPortalFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPortalFunctionLibrary)


#define PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_13_PROLOG
#define PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_SPARSE_DATA \
	PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_RPC_WRAPPERS \
	PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_INCLASS \
	PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_SPARSE_DATA \
	PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTALPLUGIN_API UClass* StaticClass<class UPortalFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PortalPlugin_master_Plugins_PortalPlugin_Source_PortalPlugin_Classes_PortalFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
