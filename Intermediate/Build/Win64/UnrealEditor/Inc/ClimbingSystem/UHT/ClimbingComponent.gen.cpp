// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingSystem/Public/ClimbingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClimbingComponent() {}
// Cross Module References
	CLIMBINGSYSTEM_API UClass* Z_Construct_UClass_UClimbingComponent();
	CLIMBINGSYSTEM_API UClass* Z_Construct_UClass_UClimbingComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_ClimbingSystem();
// End Cross Module References
	void UClimbingComponent::StaticRegisterNativesUClimbingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClimbingComponent);
	UClass* Z_Construct_UClass_UClimbingComponent_NoRegister()
	{
		return UClimbingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UClimbingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClimbingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ClimbingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClimbingComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ClimbingComponent.h" },
		{ "ModuleRelativePath", "Public/ClimbingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClimbingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClimbingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClimbingComponent_Statics::ClassParams = {
		&UClimbingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClimbingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UClimbingComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UClimbingComponent()
	{
		if (!Z_Registration_Info_UClass_UClimbingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClimbingComponent.OuterSingleton, Z_Construct_UClass_UClimbingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClimbingComponent.OuterSingleton;
	}
	template<> CLIMBINGSYSTEM_API UClass* StaticClass<UClimbingComponent>()
	{
		return UClimbingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClimbingComponent);
	UClimbingComponent::~UClimbingComponent() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_Testing_ClimbingSystem_Source_ClimbingSystem_Public_ClimbingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Testing_ClimbingSystem_Source_ClimbingSystem_Public_ClimbingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClimbingComponent, UClimbingComponent::StaticClass, TEXT("UClimbingComponent"), &Z_Registration_Info_UClass_UClimbingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClimbingComponent), 2370677772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Testing_ClimbingSystem_Source_ClimbingSystem_Public_ClimbingComponent_h_342138870(TEXT("/Script/ClimbingSystem"),
		Z_CompiledInDeferFile_FID_MyProjects_Testing_ClimbingSystem_Source_ClimbingSystem_Public_ClimbingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Testing_ClimbingSystem_Source_ClimbingSystem_Public_ClimbingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
