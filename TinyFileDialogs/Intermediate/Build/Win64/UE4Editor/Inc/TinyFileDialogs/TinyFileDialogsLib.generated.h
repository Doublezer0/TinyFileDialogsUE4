// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef TINYFILEDIALOGS_TinyFileDialogsLib_generated_h
#error "TinyFileDialogsLib.generated.h already included, missing '#pragma once' in TinyFileDialogsLib.h"
#endif
#define TINYFILEDIALOGS_TinyFileDialogsLib_generated_h

#define Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_SPARSE_DATA
#define Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShowColorChooser) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Title); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DefaultHexRGB); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_GET_STRUCT(FLinearColor,Z_Param_DefaultRGB); \
		P_GET_UBOOL(Z_Param_bUseWin32); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UTinyFileDialogsLib::ShowColorChooser(Z_Param_Title,Z_Param_DefaultHexRGB,Z_Param_Alpha,Z_Param_DefaultRGB,Z_Param_bUseWin32,Z_Param_Out_OutColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowSelectFolderDialog) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Title); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DefaultPath); \
		P_GET_UBOOL(Z_Param_bUseWin32); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UTinyFileDialogsLib::ShowSelectFolderDialog(Z_Param_Title,Z_Param_DefaultPath,Z_Param_bUseWin32); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowOpenFileDialog) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Title); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DefaultPathAndFile); \
		P_GET_TARRAY(FString,Z_Param_FilterPatterns); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SingleFilterDescription); \
		P_GET_UBOOL(Z_Param_bAllowMultipleSelects); \
		P_GET_UBOOL(Z_Param_bUseWin32); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutStringArr); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NumSelectedFiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UTinyFileDialogsLib::ShowOpenFileDialog(Z_Param_Title,Z_Param_DefaultPathAndFile,Z_Param_FilterPatterns,Z_Param_SingleFilterDescription,Z_Param_bAllowMultipleSelects,Z_Param_bUseWin32,Z_Param_Out_OutStringArr,Z_Param_Out_NumSelectedFiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowSaveFileDialog) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Title); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DefaultPathAndFile); \
		P_GET_TARRAY(FString,Z_Param_FilterPatterns); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SingleFilterDescription); \
		P_GET_UBOOL(Z_Param_bUseWin32); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UTinyFileDialogsLib::ShowSaveFileDialog(Z_Param_Title,Z_Param_DefaultPathAndFile,Z_Param_FilterPatterns,Z_Param_SingleFilterDescription,Z_Param_bUseWin32); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowInputBox) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Title); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DefaultInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UTinyFileDialogsLib::ShowInputBox(Z_Param_Title,Z_Param_Message,ETinyDialogInputType(Z_Param_DefaultInput)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowMessageBox) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Title); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DialogType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_IconType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DefaultButton); \
		P_GET_UBOOL(Z_Param_bUseWin32); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTinyFileDialogsLib::ShowMessageBox(Z_Param_Title,Z_Param_Message,ETinyDialogMessageType(Z_Param_DialogType),ETinyDialogIconType(Z_Param_IconType),Z_Param_DefaultButton,Z_Param_bUseWin32); \
		P_NATIVE_END; \
	}


#define Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShowColorChooser) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Title); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DefaultHexRGB); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_GET_STRUCT(FLinearColor,Z_Param_DefaultRGB); \
		P_GET_UBOOL(Z_Param_bUseWin32); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UTinyFileDialogsLib::ShowColorChooser(Z_Param_Title,Z_Param_DefaultHexRGB,Z_Param_Alpha,Z_Param_DefaultRGB,Z_Param_bUseWin32,Z_Param_Out_OutColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowSelectFolderDialog) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Title); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DefaultPath); \
		P_GET_UBOOL(Z_Param_bUseWin32); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UTinyFileDialogsLib::ShowSelectFolderDialog(Z_Param_Title,Z_Param_DefaultPath,Z_Param_bUseWin32); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowOpenFileDialog) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Title); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DefaultPathAndFile); \
		P_GET_TARRAY(FString,Z_Param_FilterPatterns); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SingleFilterDescription); \
		P_GET_UBOOL(Z_Param_bAllowMultipleSelects); \
		P_GET_UBOOL(Z_Param_bUseWin32); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutStringArr); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NumSelectedFiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UTinyFileDialogsLib::ShowOpenFileDialog(Z_Param_Title,Z_Param_DefaultPathAndFile,Z_Param_FilterPatterns,Z_Param_SingleFilterDescription,Z_Param_bAllowMultipleSelects,Z_Param_bUseWin32,Z_Param_Out_OutStringArr,Z_Param_Out_NumSelectedFiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowSaveFileDialog) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Title); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DefaultPathAndFile); \
		P_GET_TARRAY(FString,Z_Param_FilterPatterns); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SingleFilterDescription); \
		P_GET_UBOOL(Z_Param_bUseWin32); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UTinyFileDialogsLib::ShowSaveFileDialog(Z_Param_Title,Z_Param_DefaultPathAndFile,Z_Param_FilterPatterns,Z_Param_SingleFilterDescription,Z_Param_bUseWin32); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowInputBox) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Title); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DefaultInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UTinyFileDialogsLib::ShowInputBox(Z_Param_Title,Z_Param_Message,ETinyDialogInputType(Z_Param_DefaultInput)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowMessageBox) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Title); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DialogType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_IconType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DefaultButton); \
		P_GET_UBOOL(Z_Param_bUseWin32); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTinyFileDialogsLib::ShowMessageBox(Z_Param_Title,Z_Param_Message,ETinyDialogMessageType(Z_Param_DialogType),ETinyDialogIconType(Z_Param_IconType),Z_Param_DefaultButton,Z_Param_bUseWin32); \
		P_NATIVE_END; \
	}


#define Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTinyFileDialogsLib(); \
	friend struct Z_Construct_UClass_UTinyFileDialogsLib_Statics; \
public: \
	DECLARE_CLASS(UTinyFileDialogsLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TinyFileDialogs"), NO_API) \
	DECLARE_SERIALIZER(UTinyFileDialogsLib)


#define Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUTinyFileDialogsLib(); \
	friend struct Z_Construct_UClass_UTinyFileDialogsLib_Statics; \
public: \
	DECLARE_CLASS(UTinyFileDialogsLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TinyFileDialogs"), NO_API) \
	DECLARE_SERIALIZER(UTinyFileDialogsLib)


#define Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTinyFileDialogsLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTinyFileDialogsLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTinyFileDialogsLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTinyFileDialogsLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTinyFileDialogsLib(UTinyFileDialogsLib&&); \
	NO_API UTinyFileDialogsLib(const UTinyFileDialogsLib&); \
public:


#define Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTinyFileDialogsLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTinyFileDialogsLib(UTinyFileDialogsLib&&); \
	NO_API UTinyFileDialogsLib(const UTinyFileDialogsLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTinyFileDialogsLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTinyFileDialogsLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTinyFileDialogsLib)


#define Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_PRIVATE_PROPERTY_OFFSET
#define Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_36_PROLOG
#define Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_PRIVATE_PROPERTY_OFFSET \
	Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_SPARSE_DATA \
	Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_RPC_WRAPPERS \
	Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_INCLASS \
	Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_PRIVATE_PROPERTY_OFFSET \
	Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_SPARSE_DATA \
	Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_INCLASS_NO_PURE_DECLS \
	Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TINYFILEDIALOGS_API UClass* StaticClass<class UTinyFileDialogsLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Blank424_Plugins_TinyFileDialogs_Source_TinyFileDialogs_Public_TinyFileDialogsLib_h


#define FOREACH_ENUM_ETINYDIALOGINPUTTYPE(op) \
	op(PLAINTEXT) \
	op(PASSWORD) 
#define FOREACH_ENUM_ETINYDIALOGICONTYPE(op) \
	op(INFO) \
	op(WARNING) \
	op(ERROR) \
	op(QUESTION) 
#define FOREACH_ENUM_ETINYDIALOGMESSAGETYPE(op) \
	op(OK) \
	op(OKCANCEL) \
	op(YESNO) \
	op(YESNOCANCEL) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
