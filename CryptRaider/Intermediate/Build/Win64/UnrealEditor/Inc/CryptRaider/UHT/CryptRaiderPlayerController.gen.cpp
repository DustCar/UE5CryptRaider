// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptRaider/CryptRaiderPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCryptRaiderPlayerController() {}
// Cross Module References
	CRYPTRAIDER_API UClass* Z_Construct_UClass_ACryptRaiderPlayerController();
	CRYPTRAIDER_API UClass* Z_Construct_UClass_ACryptRaiderPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CryptRaider();
// End Cross Module References
	void ACryptRaiderPlayerController::StaticRegisterNativesACryptRaiderPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACryptRaiderPlayerController);
	UClass* Z_Construct_UClass_ACryptRaiderPlayerController_NoRegister()
	{
		return ACryptRaiderPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACryptRaiderPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACryptRaiderPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptRaider,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACryptRaiderPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CryptRaiderPlayerController.h" },
		{ "ModuleRelativePath", "CryptRaiderPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACryptRaiderPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACryptRaiderPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACryptRaiderPlayerController_Statics::ClassParams = {
		&ACryptRaiderPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACryptRaiderPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACryptRaiderPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACryptRaiderPlayerController()
	{
		if (!Z_Registration_Info_UClass_ACryptRaiderPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACryptRaiderPlayerController.OuterSingleton, Z_Construct_UClass_ACryptRaiderPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACryptRaiderPlayerController.OuterSingleton;
	}
	template<> CRYPTRAIDER_API UClass* StaticClass<ACryptRaiderPlayerController>()
	{
		return ACryptRaiderPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACryptRaiderPlayerController);
	ACryptRaiderPlayerController::~ACryptRaiderPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_dustc_OneDrive_Documents_UnrealProjects_CryptRaider_Source_CryptRaider_CryptRaiderPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dustc_OneDrive_Documents_UnrealProjects_CryptRaider_Source_CryptRaider_CryptRaiderPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACryptRaiderPlayerController, ACryptRaiderPlayerController::StaticClass, TEXT("ACryptRaiderPlayerController"), &Z_Registration_Info_UClass_ACryptRaiderPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACryptRaiderPlayerController), 2393729493U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dustc_OneDrive_Documents_UnrealProjects_CryptRaider_Source_CryptRaider_CryptRaiderPlayerController_h_930293346(TEXT("/Script/CryptRaider"),
		Z_CompiledInDeferFile_FID_Users_dustc_OneDrive_Documents_UnrealProjects_CryptRaider_Source_CryptRaider_CryptRaiderPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dustc_OneDrive_Documents_UnrealProjects_CryptRaider_Source_CryptRaider_CryptRaiderPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
