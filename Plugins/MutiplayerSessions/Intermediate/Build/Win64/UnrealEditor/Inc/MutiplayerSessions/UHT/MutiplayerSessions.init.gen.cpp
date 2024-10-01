// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMutiplayerSessions_init() {}
	MUTIPLAYERSESSIONS_API UFunction* Z_Construct_UDelegateFunction_MutiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MutiplayerSessions;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MutiplayerSessions()
	{
		if (!Z_Registration_Info_UPackage__Script_MutiplayerSessions.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MutiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MutiplayerSessions",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB0A636CB,
				0xC3ABFBC1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MutiplayerSessions.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MutiplayerSessions.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MutiplayerSessions(Z_Construct_UPackage__Script_MutiplayerSessions, TEXT("/Script/MutiplayerSessions"), Z_Registration_Info_UPackage__Script_MutiplayerSessions, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB0A636CB, 0xC3ABFBC1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
