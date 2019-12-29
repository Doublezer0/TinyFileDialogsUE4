// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TinyFileDialogs/Public/TinyFileDialogsLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTinyFileDialogsLib() {}
// Cross Module References
	TINYFILEDIALOGS_API UEnum* Z_Construct_UEnum_TinyFileDialogs_ETinyDialogInputType();
	UPackage* Z_Construct_UPackage__Script_TinyFileDialogs();
	TINYFILEDIALOGS_API UEnum* Z_Construct_UEnum_TinyFileDialogs_ETinyDialogIconType();
	TINYFILEDIALOGS_API UEnum* Z_Construct_UEnum_TinyFileDialogs_ETinyDialogMessageType();
	TINYFILEDIALOGS_API UClass* Z_Construct_UClass_UTinyFileDialogsLib_NoRegister();
	TINYFILEDIALOGS_API UClass* Z_Construct_UClass_UTinyFileDialogsLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	TINYFILEDIALOGS_API UFunction* Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	TINYFILEDIALOGS_API UFunction* Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox();
	TINYFILEDIALOGS_API UFunction* Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox();
	TINYFILEDIALOGS_API UFunction* Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog();
	TINYFILEDIALOGS_API UFunction* Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog();
	TINYFILEDIALOGS_API UFunction* Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog();
// End Cross Module References
	static UEnum* ETinyDialogInputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TinyFileDialogs_ETinyDialogInputType, Z_Construct_UPackage__Script_TinyFileDialogs(), TEXT("ETinyDialogInputType"));
		}
		return Singleton;
	}
	template<> TINYFILEDIALOGS_API UEnum* StaticEnum<ETinyDialogInputType>()
	{
		return ETinyDialogInputType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETinyDialogInputType(ETinyDialogInputType_StaticEnum, TEXT("/Script/TinyFileDialogs"), TEXT("ETinyDialogInputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TinyFileDialogs_ETinyDialogInputType_Hash() { return 1331468168U; }
	UEnum* Z_Construct_UEnum_TinyFileDialogs_ETinyDialogInputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TinyFileDialogs();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETinyDialogInputType"), 0, Get_Z_Construct_UEnum_TinyFileDialogs_ETinyDialogInputType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PLAINTEXT", (int64)PLAINTEXT },
				{ "PASSWORD", (int64)PASSWORD },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/TinyFileDialogsLib.h" },
				{ "PASSWORD.DisplayName", "Password" },
				{ "PASSWORD.Name", "PASSWORD" },
				{ "PLAINTEXT.DisplayName", "Plain Text" },
				{ "PLAINTEXT.Name", "PLAINTEXT" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TinyFileDialogs,
				nullptr,
				"ETinyDialogInputType",
				"ETinyDialogInputType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETinyDialogIconType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TinyFileDialogs_ETinyDialogIconType, Z_Construct_UPackage__Script_TinyFileDialogs(), TEXT("ETinyDialogIconType"));
		}
		return Singleton;
	}
	template<> TINYFILEDIALOGS_API UEnum* StaticEnum<ETinyDialogIconType>()
	{
		return ETinyDialogIconType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETinyDialogIconType(ETinyDialogIconType_StaticEnum, TEXT("/Script/TinyFileDialogs"), TEXT("ETinyDialogIconType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TinyFileDialogs_ETinyDialogIconType_Hash() { return 3357984082U; }
	UEnum* Z_Construct_UEnum_TinyFileDialogs_ETinyDialogIconType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TinyFileDialogs();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETinyDialogIconType"), 0, Get_Z_Construct_UEnum_TinyFileDialogs_ETinyDialogIconType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "INFO", (int64)INFO },
				{ "WARNING", (int64)WARNING },
				{ "ERROR", (int64)ERROR },
				{ "QUESTION", (int64)QUESTION },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ERROR.DisplayName", "Yes / No" },
				{ "ERROR.Name", "ERROR" },
				{ "INFO.DisplayName", "Info" },
				{ "INFO.Name", "INFO" },
				{ "ModuleRelativePath", "Public/TinyFileDialogsLib.h" },
				{ "QUESTION.DisplayName", "Yes / No / Cancel" },
				{ "QUESTION.Name", "QUESTION" },
				{ "WARNING.DisplayName", "OK / Cancel" },
				{ "WARNING.Name", "WARNING" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TinyFileDialogs,
				nullptr,
				"ETinyDialogIconType",
				"ETinyDialogIconType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETinyDialogMessageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TinyFileDialogs_ETinyDialogMessageType, Z_Construct_UPackage__Script_TinyFileDialogs(), TEXT("ETinyDialogMessageType"));
		}
		return Singleton;
	}
	template<> TINYFILEDIALOGS_API UEnum* StaticEnum<ETinyDialogMessageType>()
	{
		return ETinyDialogMessageType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETinyDialogMessageType(ETinyDialogMessageType_StaticEnum, TEXT("/Script/TinyFileDialogs"), TEXT("ETinyDialogMessageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TinyFileDialogs_ETinyDialogMessageType_Hash() { return 439434879U; }
	UEnum* Z_Construct_UEnum_TinyFileDialogs_ETinyDialogMessageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TinyFileDialogs();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETinyDialogMessageType"), 0, Get_Z_Construct_UEnum_TinyFileDialogs_ETinyDialogMessageType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "OK", (int64)OK },
				{ "OKCANCEL", (int64)OKCANCEL },
				{ "YESNO", (int64)YESNO },
				{ "YESNOCANCEL", (int64)YESNOCANCEL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/TinyFileDialogsLib.h" },
				{ "OK.DisplayName", "OK" },
				{ "OK.Name", "OK" },
				{ "OKCANCEL.DisplayName", "OK / CANCEL" },
				{ "OKCANCEL.Name", "OKCANCEL" },
				{ "YESNO.DisplayName", "YES / NO" },
				{ "YESNO.Name", "YESNO" },
				{ "YESNOCANCEL.DisplayName", "YES / NO / CANCEL" },
				{ "YESNOCANCEL.Name", "YESNOCANCEL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TinyFileDialogs,
				nullptr,
				"ETinyDialogMessageType",
				"ETinyDialogMessageType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UTinyFileDialogsLib::StaticRegisterNativesUTinyFileDialogsLib()
	{
		UClass* Class = UTinyFileDialogsLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowColorChooser", &UTinyFileDialogsLib::execShowColorChooser },
			{ "ShowInputBox", &UTinyFileDialogsLib::execShowInputBox },
			{ "ShowMessageBox", &UTinyFileDialogsLib::execShowMessageBox },
			{ "ShowOpenFileDialog", &UTinyFileDialogsLib::execShowOpenFileDialog },
			{ "ShowSaveFileDialog", &UTinyFileDialogsLib::execShowSaveFileDialog },
			{ "ShowSelectFolderDialog", &UTinyFileDialogsLib::execShowSelectFolderDialog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics
	{
		struct TinyFileDialogsLib_eventShowColorChooser_Parms
		{
			FString Title;
			FString DefaultHexRGB;
			float Alpha;
			FLinearColor DefaultRGB;
			bool bUseWin32;
			FLinearColor OutColor;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutColor;
		static void NewProp_bUseWin32_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseWin32;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultRGB;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultHexRGB;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowColorChooser_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::NewProp_OutColor = { "OutColor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowColorChooser_Parms, OutColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::NewProp_bUseWin32_SetBit(void* Obj)
	{
		((TinyFileDialogsLib_eventShowColorChooser_Parms*)Obj)->bUseWin32 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::NewProp_bUseWin32 = { "bUseWin32", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TinyFileDialogsLib_eventShowColorChooser_Parms), &Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::NewProp_bUseWin32_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::NewProp_DefaultRGB = { "DefaultRGB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowColorChooser_Parms, DefaultRGB), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowColorChooser_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::NewProp_DefaultHexRGB = { "DefaultHexRGB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowColorChooser_Parms, DefaultHexRGB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowColorChooser_Parms, Title), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::NewProp_OutColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::NewProp_bUseWin32,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::NewProp_DefaultRGB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::NewProp_DefaultHexRGB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::NewProp_Title,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorlContext", "" },
		{ "Category", "TinyFileDialog" },
		{ "Comment", "/* returns NULL on cancel */" },
		{ "DisplayName", "ShowColorChooser" },
		{ "Keywords", "Prompts for an color picker dialog" },
		{ "ModuleRelativePath", "Public/TinyFileDialogsLib.h" },
		{ "ToolTip", "returns NULL on cancel" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTinyFileDialogsLib, nullptr, "ShowColorChooser", nullptr, nullptr, sizeof(TinyFileDialogsLib_eventShowColorChooser_Parms), Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox_Statics
	{
		struct TinyFileDialogsLib_eventShowInputBox_Parms
		{
			FString Title;
			FString Message;
			TEnumAsByte<ETinyDialogInputType> DefaultInput;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultInput;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowInputBox_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox_Statics::NewProp_DefaultInput = { "DefaultInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowInputBox_Parms, DefaultInput), Z_Construct_UEnum_TinyFileDialogs_ETinyDialogInputType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowInputBox_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowInputBox_Parms, Title), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox_Statics::NewProp_DefaultInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox_Statics::NewProp_Title,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorlContext", "" },
		{ "Category", "TinyFileDialog" },
		{ "Comment", "/* \"\" may NOT contain \\n \\t on windows */" },
		{ "DisplayName", "ShowInputBox" },
		{ "Keywords", "Prompts for an input box" },
		{ "ModuleRelativePath", "Public/TinyFileDialogsLib.h" },
		{ "ToolTip", "\"\" may NOT contain \\n \\t on windows" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTinyFileDialogsLib, nullptr, "ShowInputBox", nullptr, nullptr, sizeof(TinyFileDialogsLib_eventShowInputBox_Parms), Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics
	{
		struct TinyFileDialogsLib_eventShowMessageBox_Parms
		{
			FString Title;
			FString Message;
			TEnumAsByte<ETinyDialogMessageType> DialogType;
			TEnumAsByte<ETinyDialogIconType> IconType;
			int32 DefaultButton;
			bool bUseWin32;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseWin32_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseWin32;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultButton;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IconType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DialogType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowMessageBox_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::NewProp_bUseWin32_SetBit(void* Obj)
	{
		((TinyFileDialogsLib_eventShowMessageBox_Parms*)Obj)->bUseWin32 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::NewProp_bUseWin32 = { "bUseWin32", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TinyFileDialogsLib_eventShowMessageBox_Parms), &Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::NewProp_bUseWin32_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::NewProp_DefaultButton = { "DefaultButton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowMessageBox_Parms, DefaultButton), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::NewProp_IconType = { "IconType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowMessageBox_Parms, IconType), Z_Construct_UEnum_TinyFileDialogs_ETinyDialogIconType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::NewProp_DialogType = { "DialogType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowMessageBox_Parms, DialogType), Z_Construct_UEnum_TinyFileDialogs_ETinyDialogMessageType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowMessageBox_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowMessageBox_Parms, Title), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::NewProp_bUseWin32,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::NewProp_DefaultButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::NewProp_IconType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::NewProp_DialogType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::NewProp_Title,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorlContext", "" },
		{ "Category", "TinyFileDialog" },
		{ "Comment", "/* 0 for cancel/no , 1 for ok/yes , 2 for no in yesnocancel */" },
		{ "DisplayName", "ShowMessageBox" },
		{ "Keywords", "Prompts for a message box" },
		{ "ModuleRelativePath", "Public/TinyFileDialogsLib.h" },
		{ "ToolTip", "0 for cancel/no , 1 for ok/yes , 2 for no in yesnocancel" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTinyFileDialogsLib, nullptr, "ShowMessageBox", nullptr, nullptr, sizeof(TinyFileDialogsLib_eventShowMessageBox_Parms), Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics
	{
		struct TinyFileDialogsLib_eventShowOpenFileDialog_Parms
		{
			FString Title;
			FString DefaultPathAndFile;
			TArray<FString> FilterPatterns;
			FString SingleFilterDescription;
			bool bAllowMultipleSelects;
			bool bUseWin32;
			TArray<FString> OutStringArr;
			int32 NumSelectedFiles;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSelectedFiles;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutStringArr;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutStringArr_Inner;
		static void NewProp_bUseWin32_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseWin32;
		static void NewProp_bAllowMultipleSelects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleSelects;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SingleFilterDescription;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilterPatterns;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilterPatterns_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultPathAndFile;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowOpenFileDialog_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_NumSelectedFiles = { "NumSelectedFiles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowOpenFileDialog_Parms, NumSelectedFiles), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_OutStringArr = { "OutStringArr", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowOpenFileDialog_Parms, OutStringArr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_OutStringArr_Inner = { "OutStringArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_bUseWin32_SetBit(void* Obj)
	{
		((TinyFileDialogsLib_eventShowOpenFileDialog_Parms*)Obj)->bUseWin32 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_bUseWin32 = { "bUseWin32", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TinyFileDialogsLib_eventShowOpenFileDialog_Parms), &Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_bUseWin32_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_bAllowMultipleSelects_SetBit(void* Obj)
	{
		((TinyFileDialogsLib_eventShowOpenFileDialog_Parms*)Obj)->bAllowMultipleSelects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_bAllowMultipleSelects = { "bAllowMultipleSelects", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TinyFileDialogsLib_eventShowOpenFileDialog_Parms), &Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_bAllowMultipleSelects_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_SingleFilterDescription = { "SingleFilterDescription", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowOpenFileDialog_Parms, SingleFilterDescription), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_FilterPatterns = { "FilterPatterns", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowOpenFileDialog_Parms, FilterPatterns), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_FilterPatterns_Inner = { "FilterPatterns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_DefaultPathAndFile = { "DefaultPathAndFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowOpenFileDialog_Parms, DefaultPathAndFile), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowOpenFileDialog_Parms, Title), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_NumSelectedFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_OutStringArr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_OutStringArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_bUseWin32,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_bAllowMultipleSelects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_SingleFilterDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_FilterPatterns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_FilterPatterns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_DefaultPathAndFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::NewProp_Title,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorlContext", "" },
		{ "Category", "TinyFileDialog" },
		{ "Comment", "/* returns NULL on cancel */" },
		{ "DisplayName", "ShowOpenFileDialog" },
		{ "Keywords", "Prompts for an open file dialog" },
		{ "ModuleRelativePath", "Public/TinyFileDialogsLib.h" },
		{ "ToolTip", "returns NULL on cancel" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTinyFileDialogsLib, nullptr, "ShowOpenFileDialog", nullptr, nullptr, sizeof(TinyFileDialogsLib_eventShowOpenFileDialog_Parms), Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics
	{
		struct TinyFileDialogsLib_eventShowSaveFileDialog_Parms
		{
			FString Title;
			FString DefaultPathAndFile;
			TArray<FString> FilterPatterns;
			FString SingleFilterDescription;
			bool bUseWin32;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseWin32_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseWin32;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SingleFilterDescription;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilterPatterns;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilterPatterns_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultPathAndFile;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowSaveFileDialog_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::NewProp_bUseWin32_SetBit(void* Obj)
	{
		((TinyFileDialogsLib_eventShowSaveFileDialog_Parms*)Obj)->bUseWin32 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::NewProp_bUseWin32 = { "bUseWin32", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TinyFileDialogsLib_eventShowSaveFileDialog_Parms), &Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::NewProp_bUseWin32_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::NewProp_SingleFilterDescription = { "SingleFilterDescription", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowSaveFileDialog_Parms, SingleFilterDescription), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::NewProp_FilterPatterns = { "FilterPatterns", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowSaveFileDialog_Parms, FilterPatterns), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::NewProp_FilterPatterns_Inner = { "FilterPatterns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::NewProp_DefaultPathAndFile = { "DefaultPathAndFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowSaveFileDialog_Parms, DefaultPathAndFile), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowSaveFileDialog_Parms, Title), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::NewProp_bUseWin32,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::NewProp_SingleFilterDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::NewProp_FilterPatterns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::NewProp_FilterPatterns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::NewProp_DefaultPathAndFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::NewProp_Title,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorlContext", "" },
		{ "Category", "TinyFileDialog" },
		{ "Comment", "/* returns NULL on cancel */" },
		{ "DisplayName", "ShowSaveFileDialog" },
		{ "Keywords", "Prompts for an save file dialog" },
		{ "ModuleRelativePath", "Public/TinyFileDialogsLib.h" },
		{ "ToolTip", "returns NULL on cancel" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTinyFileDialogsLib, nullptr, "ShowSaveFileDialog", nullptr, nullptr, sizeof(TinyFileDialogsLib_eventShowSaveFileDialog_Parms), Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog_Statics
	{
		struct TinyFileDialogsLib_eventShowSelectFolderDialog_Parms
		{
			FString Title;
			FString DefaultPath;
			bool bUseWin32;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseWin32_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseWin32;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowSelectFolderDialog_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog_Statics::NewProp_bUseWin32_SetBit(void* Obj)
	{
		((TinyFileDialogsLib_eventShowSelectFolderDialog_Parms*)Obj)->bUseWin32 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog_Statics::NewProp_bUseWin32 = { "bUseWin32", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TinyFileDialogsLib_eventShowSelectFolderDialog_Parms), &Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog_Statics::NewProp_bUseWin32_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowSelectFolderDialog_Parms, DefaultPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TinyFileDialogsLib_eventShowSelectFolderDialog_Parms, Title), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog_Statics::NewProp_bUseWin32,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog_Statics::NewProp_DefaultPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog_Statics::NewProp_Title,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorlContext", "" },
		{ "Category", "TinyFileDialog" },
		{ "Comment", "/* returns NULL on cancel */" },
		{ "DisplayName", "ShowSelectFolderDialog" },
		{ "Keywords", "Prompts for an select folder dialog" },
		{ "ModuleRelativePath", "Public/TinyFileDialogsLib.h" },
		{ "ToolTip", "returns NULL on cancel" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTinyFileDialogsLib, nullptr, "ShowSelectFolderDialog", nullptr, nullptr, sizeof(TinyFileDialogsLib_eventShowSelectFolderDialog_Parms), Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTinyFileDialogsLib_NoRegister()
	{
		return UTinyFileDialogsLib::StaticClass();
	}
	struct Z_Construct_UClass_UTinyFileDialogsLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTinyFileDialogsLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TinyFileDialogs,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTinyFileDialogsLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTinyFileDialogsLib_ShowColorChooser, "ShowColorChooser" }, // 1229238214
		{ &Z_Construct_UFunction_UTinyFileDialogsLib_ShowInputBox, "ShowInputBox" }, // 2669073596
		{ &Z_Construct_UFunction_UTinyFileDialogsLib_ShowMessageBox, "ShowMessageBox" }, // 1852297434
		{ &Z_Construct_UFunction_UTinyFileDialogsLib_ShowOpenFileDialog, "ShowOpenFileDialog" }, // 2510748479
		{ &Z_Construct_UFunction_UTinyFileDialogsLib_ShowSaveFileDialog, "ShowSaveFileDialog" }, // 4251607809
		{ &Z_Construct_UFunction_UTinyFileDialogsLib_ShowSelectFolderDialog, "ShowSelectFolderDialog" }, // 3240549984
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyFileDialogsLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TinyFileDialogsLib.h" },
		{ "ModuleRelativePath", "Public/TinyFileDialogsLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTinyFileDialogsLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTinyFileDialogsLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTinyFileDialogsLib_Statics::ClassParams = {
		&UTinyFileDialogsLib::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTinyFileDialogsLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyFileDialogsLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTinyFileDialogsLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTinyFileDialogsLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTinyFileDialogsLib, 1676277528);
	template<> TINYFILEDIALOGS_API UClass* StaticClass<UTinyFileDialogsLib>()
	{
		return UTinyFileDialogsLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTinyFileDialogsLib(Z_Construct_UClass_UTinyFileDialogsLib, &UTinyFileDialogsLib::StaticClass, TEXT("/Script/TinyFileDialogs"), TEXT("UTinyFileDialogsLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTinyFileDialogsLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
