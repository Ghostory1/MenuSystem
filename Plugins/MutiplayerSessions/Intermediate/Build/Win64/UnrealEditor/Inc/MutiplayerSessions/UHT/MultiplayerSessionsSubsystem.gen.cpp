// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MutiplayerSessions/Public/MultiplayerSessionsSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerSessionsSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	MUTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem();
	MUTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MutiplayerSessions();
// End Cross Module References
	void UMultiplayerSessionsSubsystem::StaticRegisterNativesUMultiplayerSessionsSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiplayerSessionsSubsystem);
	UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem_NoRegister()
	{
		return UMultiplayerSessionsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MutiplayerSessions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MultiplayerSessionsSubsystem.h" },
		{ "ModuleRelativePath", "Public/MultiplayerSessionsSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiplayerSessionsSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::ClassParams = {
		&UMultiplayerSessionsSubsystem::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem.OuterSingleton, Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem.OuterSingleton;
	}
	template<> MUTIPLAYERSESSIONS_API UClass* StaticClass<UMultiplayerSessionsSubsystem>()
	{
		return UMultiplayerSessionsSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiplayerSessionsSubsystem);
	UMultiplayerSessionsSubsystem::~UMultiplayerSessionsSubsystem() {}
	struct Z_CompiledInDeferFile_FID_MenuSystem_Plugins_MutiplayerSessions_Source_MutiplayerSessions_Public_MultiplayerSessionsSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MenuSystem_Plugins_MutiplayerSessions_Source_MutiplayerSessions_Public_MultiplayerSessionsSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMultiplayerSessionsSubsystem, UMultiplayerSessionsSubsystem::StaticClass, TEXT("UMultiplayerSessionsSubsystem"), &Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiplayerSessionsSubsystem), 3502999202U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MenuSystem_Plugins_MutiplayerSessions_Source_MutiplayerSessions_Public_MultiplayerSessionsSubsystem_h_1880985278(TEXT("/Script/MutiplayerSessions"),
		Z_CompiledInDeferFile_FID_MenuSystem_Plugins_MutiplayerSessions_Source_MutiplayerSessions_Public_MultiplayerSessionsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MenuSystem_Plugins_MutiplayerSessions_Source_MutiplayerSessions_Public_MultiplayerSessionsSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
