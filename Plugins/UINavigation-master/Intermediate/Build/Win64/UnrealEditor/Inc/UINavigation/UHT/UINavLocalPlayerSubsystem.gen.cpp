// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavLocalPlayerSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavLocalPlayerSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavLocalPlayerSubsystem();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavLocalPlayerSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	void UUINavLocalPlayerSubsystem::StaticRegisterNativesUUINavLocalPlayerSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavLocalPlayerSubsystem);
	UClass* Z_Construct_UClass_UUINavLocalPlayerSubsystem_NoRegister()
	{
		return UUINavLocalPlayerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UUINavLocalPlayerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUINavLocalPlayerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavLocalPlayerSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavLocalPlayerSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UINavLocalPlayerSubsystem.h" },
		{ "ModuleRelativePath", "Public/UINavLocalPlayerSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUINavLocalPlayerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavLocalPlayerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavLocalPlayerSubsystem_Statics::ClassParams = {
		&UUINavLocalPlayerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavLocalPlayerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavLocalPlayerSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUINavLocalPlayerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UUINavLocalPlayerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavLocalPlayerSubsystem.OuterSingleton, Z_Construct_UClass_UUINavLocalPlayerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUINavLocalPlayerSubsystem.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UUINavLocalPlayerSubsystem>()
	{
		return UUINavLocalPlayerSubsystem::StaticClass();
	}
	UUINavLocalPlayerSubsystem::UUINavLocalPlayerSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavLocalPlayerSubsystem);
	UUINavLocalPlayerSubsystem::~UUINavLocalPlayerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavLocalPlayerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavLocalPlayerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUINavLocalPlayerSubsystem, UUINavLocalPlayerSubsystem::StaticClass, TEXT("UUINavLocalPlayerSubsystem"), &Z_Registration_Info_UClass_UUINavLocalPlayerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavLocalPlayerSubsystem), 3019713322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavLocalPlayerSubsystem_h_804769154(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavLocalPlayerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavLocalPlayerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
