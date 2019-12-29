// Copyright 2019 f00n.com
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TinyFileDialogsLib.generated.h"

UENUM()
enum ETinyDialogMessageType
{
	OK	UMETA(DisplayName = "OK"),
	OKCANCEL		UMETA(DisplayName = "OK / CANCEL"),
	YESNO	UMETA(DisplayName = "YES / NO"),
	YESNOCANCEL UMETA(DisplayName = "YES / NO / CANCEL")
};

UENUM()
enum ETinyDialogIconType
{
	INFO		UMETA(DisplayName = "info"),
	WARNING	UMETA(DisplayName = "warning"),
	ERROR	UMETA(DisplayName = "error"),
	QUESTION		UMETA(DisplayName = "question")
};

UENUM()
enum ETinyDialogInputType
{
	PLAINTEXT	UMETA(DisplayName = "Plain Text"),
	PASSWORD 	UMETA(DisplayName = "Password")
};

/**
 * 
 */
UCLASS()
class TINYFILEDIALOGS_API UTinyFileDialogsLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", CallableWithoutWorlContext, DisplayName = "ShowMessageBox", Keywords = "Prompts for a message box"), Category = "TinyFileDialog")
		static int32 ShowMessageBox(FString Title, /* "" */
			FString Message, /* "" may contain \n \t */
			ETinyDialogMessageType DialogType, /* "ok" "okcancel" "yesno" "yesnocancel" */
			ETinyDialogIconType IconType, /* "info" "warning" "error" "question" */
			int32 DefaultButton,/* 0 for cancel/no , 1 for ok/yes , 2 for no in yesnocancel */
			bool bUseWin32); /* Use a Win32 compatible dialog*/

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", CallableWithoutWorlContext, DisplayName = "ShowInputBox", Keywords = "Prompts for an input box"), Category = "TinyFileDialog")
		static FString ShowInputBox(FString Title,/* "" */
			FString Message,/* "" may NOT contain \n \t on windows */
			ETinyDialogInputType DefaultInput);  /* "" , if NULL it's a passwordBox returns NULL on cancel */

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", CallableWithoutWorlContext, DisplayName = "ShowSaveFileDialog", Keywords = "Prompts for an save file dialog"), Category = "TinyFileDialog")
		static FString ShowSaveFileDialog(
			FString Title, /* "" */
			FString DefaultPathAndFile, /* "" */
			//int32 NumOfFilterPatterns, /* 0 */
			TArray<FString> FilterPatterns, /* NULL | {"*.jpg","*.png"} */
			FString SingleFilterDescription, /* NULL | "text files" *//* returns NULL on cancel */
			bool bUseWin32);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", CallableWithoutWorlContext, DisplayName = "ShowOpenFileDialog", Keywords = "Prompts for an open file dialog"), Category = "TinyFileDialog")
		static FString ShowOpenFileDialog(
			FString Title, /* "" */
			FString DefaultPathAndFile, /* "" */
			//int const aNumOfFilterPatterns, /* 0 */
			TArray<FString> FilterPatterns, /* NULL {"*.jpg","*.png"} */
			FString SingleFilterDescription, /* NULL | "image files" */
			bool bAllowMultipleSelects, /* 0 or 1 *//* in case of multiple files, the separator is | *//* returns NULL on cancel */
			bool bUseWin32,
			TArray<FString>& OutStringArr,
			int32& NumSelectedFiles); /* returns a string array of file paths */

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", CallableWithoutWorlContext, DisplayName = "ShowSelectFolderDialog", Keywords = "Prompts for an select folder dialog"), Category = "TinyFileDialog")
		static FString ShowSelectFolderDialog(
			FString Title, /* "" */
			FString DefaultPath, /* "" *//* returns NULL on cancel */
			bool bUseWin32);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", CallableWithoutWorlContext, DisplayName = "ShowColorChooser", Keywords = "Prompts for an color picker dialog"), Category = "TinyFileDialog")
		static FString ShowColorChooser(
			FString Title, /* "" */
			FString DefaultHexRGB, /* NULL or "#FF0000" */
			float Alpha, /* output color alpha. Defaults to 1.0 */
			FLinearColor DefaultRGB, /* { 0 , 255 , 255 } */
			//unsigned char aoResultRGB, /* { 0 , 0 , 0 } */
				/* returns the hexcolor as a string "#FF0000" */
				/* aoResultRGB also contains the result */
				/* aDefaultRGB is used only if aDefaultHexRGB is NULL */
				/* aDefaultRGB and aoResultRGB can be the same array */
				/* returns NULL on cancel */
			bool bUseWin32,
			FLinearColor& OutColor);
	
};
