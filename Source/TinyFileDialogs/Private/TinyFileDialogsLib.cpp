// Copyright 2019 f00n.com


#include "TinyFileDialogsLib.h"
#include "ThirdParty/TinyFileDialogsLibrary/TinyFileDialogs/inc/tinyfiledialogs.h"
#include <string>

/**
Show a message box with options for various responses.
*/
int32 UTinyFileDialogsLib::ShowMessageBox(FString Title, FString Message, ETinyDialogMessageType DialogType, ETinyDialogIconType IconType, int32 DefaultButton, bool bUseWin32)
{

	FString aDialogType;
	switch (DialogType)
	{
	case OK:
		aDialogType = "ok";
		break;
	case OKCANCEL:
		aDialogType = "okcancel";
		break;
	case YESNO:
		aDialogType = "yesno";
		break;
	case YESNOCANCEL:
		aDialogType = "yesnocancel";
		break;
	default:
		aDialogType = "okcancel";
	}

	FString aIconType;
	switch (IconType)
	{
	case INFO:
		aIconType = "info";
		break;
	case WARNING:
		aIconType = "warning";
		break;
	case	 ERROR:
		aIconType = "error";
		break;
	case QUESTION:
		aIconType = "question";
		break;
	default:
		aIconType = "info";
	}

	int32 outValue = 0;
	if (!bUseWin32)
	{
		//cross compatible
		outValue = tinyfd_messageBox(TCHAR_TO_ANSI(*Title),
			TCHAR_TO_ANSI(*Message),
			TCHAR_TO_ANSI(*aDialogType),
			TCHAR_TO_ANSI(*aIconType),
			DefaultButton
		);
	}
	else {
		//windows dialog
		outValue = tinyfd_messageBoxW(*Title,
			*Message,
			*aDialogType,
			*aIconType,
			DefaultButton
		);
	}

	return outValue;
}

/**
Show an input box with a message and return the user input as an FString
*/
FString UTinyFileDialogsLib::ShowInputBox(FString Title, FString Message, ETinyDialogInputType DefaultInput)
{
	FString OutValue;
	const char* aDefaultInput;
	switch (DefaultInput)
	{
	case ETinyDialogInputType::PLAINTEXT:
		aDefaultInput = "";
		break;
	case ETinyDialogInputType::PASSWORD:
		aDefaultInput = NULL;
		break;
	default:
		aDefaultInput = "";
	}



	OutValue = tinyfd_inputBox(TCHAR_TO_ANSI(*Title), TCHAR_TO_ANSI(*Message), aDefaultInput);

	return OutValue;
}


/**
Open a save file dialog using a default file and path and filename.
Filter patterns is an array of acceptable filetypes. ie. { *.jpg, *.png }
*/
FString UTinyFileDialogsLib::ShowSaveFileDialog(
	FString Title,
	FString DefaultPathAndFile,
	//int32 NumOfFilterPatterns,
	TArray<FString> FilterPatterns,
	FString SingleFilterDescription,
	bool bUseWin32)
{

	FString result;

	if (bUseWin32)
	{
		int32 arrLength = FilterPatterns.Num();
		TArray<wchar_t const*> tmpWCharArr;
		tmpWCharArr.SetNum(arrLength);

		//Loop the FilterPatterns array and copy the pointer values to std allocated storage.
		for (int32 i = 0; i < arrLength; i++)
		{
			tmpWCharArr[i] = *FilterPatterns[i];
		}

		result = tinyfd_saveFileDialogW(*Title,
			*DefaultPathAndFile,
			arrLength,
			tmpWCharArr.GetData(),
			*SingleFilterDescription);

	}
	else {

		//use the incoming FilterPatterns array length to create a const char array
		int32 arrLength = FilterPatterns.Num();
		TArray<char const*> tmpCharArr;
		tmpCharArr.SetNum(arrLength);

		//Let std do the storage from char** to char
		TArray<std::string> tempStrings;
		tempStrings.SetNum(arrLength);

		//Loop the FilterPatterns array and copy the pointer values to std allocated storage.
		for (int32 i = 0; i < arrLength; i++)
		{

			//store a copy of the value from the FString array
			std::string fp = TCHAR_TO_ANSI(*FilterPatterns[i]);
			tempStrings[i] = fp;

			//Get the char const* value from the array
			tmpCharArr[i] = tempStrings[i].c_str();

		}

		//Execute the file dialog
		result = tinyfd_saveFileDialog(TCHAR_TO_ANSI(*Title),
			TCHAR_TO_ANSI(*DefaultPathAndFile),
			arrLength,
			tmpCharArr.GetData(),
			TCHAR_TO_ANSI(*SingleFilterDescription));

	}

	return result;
}

/**
Open a dialog and let the user select one or multiple files
Filter patterns is an array of acceptable filetypes. ie. { *.jpg, *.png }
*/
FString UTinyFileDialogsLib::ShowOpenFileDialog(
	FString Title, /* "" */
	FString DefaultPathAndFile, /* "" */
	//int const aNumOfFilterPatterns, /* 0 */
	TArray<FString> FilterPatterns, /* NULL {"*.jpg","*.png"} */
	FString SingleFilterDescription, /* NULL | "image files" */
	bool bAllowMultipleSelects,/* 0 or 1 *//* in case of multiple files, the separator is | *//* returns NULL on cancel */
	bool bUseWin32,
	TArray<FString>& OutStringArr,
	int32& NumSelectedFiles)
{

	if (bUseWin32)
	{
		//Filter settings
		int32 arrLength = FilterPatterns.Num();
		TArray<wchar_t const*> tmpWCharArr;
		tmpWCharArr.SetNum(arrLength);

		//Loop the FilterPatterns array and copy the pointer values to std allocated storage.
		for (int32 i = 0; i < arrLength; i++)
		{
			tmpWCharArr[i] = *FilterPatterns[i];
		}

		//Call the tinyfd function
		FString result = tinyfd_openFileDialogW(
			*Title,
			*DefaultPathAndFile,
			arrLength,
			tmpWCharArr.GetData(),
			*SingleFilterDescription,
			bAllowMultipleSelects
		);

		if (bAllowMultipleSelects && result != "")
		{
			NumSelectedFiles = result.ParseIntoArray(OutStringArr, TEXT("|"));
		}

		return result;
	}
	else {

		//Filter settings
		int32 arrLength = FilterPatterns.Num();
		TArray<char const*> tmpCharArr;
		tmpCharArr.SetNum(arrLength);

		//Let std do the storage from char** to char
		TArray<std::string> tempStrings;
		tempStrings.SetNum(arrLength);

		//Loop the FilterPatterns array and copy the pointer values to std allocated storage.
		for (int i = 0; i < arrLength; i++)
		{
			//store a copy of the value from the FString array
			std::string fp = TCHAR_TO_ANSI(*FilterPatterns[i]);
			tempStrings[i] = fp;

			//Get the char const* value from the array
			tmpCharArr[i] = tempStrings[i].c_str();

		}

		//Call the tinyfd function
		FString result = tinyfd_openFileDialog(
			TCHAR_TO_ANSI(*Title),
			TCHAR_TO_ANSI(*DefaultPathAndFile),
			arrLength,
			tmpCharArr.GetData(),
			TCHAR_TO_ANSI(*SingleFilterDescription),
			bAllowMultipleSelects
		);

		if (bAllowMultipleSelects && result != "")
		{
			NumSelectedFiles = result.ParseIntoArray(OutStringArr, TEXT("|"));
		}

		return result;

	}
}

/**
Open a dialog to let the user select a folder
*/
FString UTinyFileDialogsLib::ShowSelectFolderDialog(
	FString Title, /* "" */
	FString DefaultPath, /* "" *//* returns NULL on cancel */
	bool bUseWin32)
{
	if (bUseWin32)
	{
		FString result = tinyfd_selectFolderDialogW(*Title, *DefaultPath);
		if (result == "")
		{
			result = DefaultPath;
		}
		return result;
	}
	else {

		FString result = tinyfd_selectFolderDialog(TCHAR_TO_ANSI(*Title), TCHAR_TO_ANSI(*DefaultPath));
		if (result == "")
		{
			result = DefaultPath;
		}
		return result;
	}
}

/**
Show a color picker for the user to choose from. Returns an FString representation of the selected color
*/
FString UTinyFileDialogsLib::ShowColorChooser(
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
	FLinearColor& OutColor) //send back as a UE color
{
	unsigned char OutDefault[3];
	OutDefault[0] = DefaultRGB.R;
	OutDefault[1] = DefaultRGB.G;
	OutDefault[2] = DefaultRGB.B;

	unsigned char aoOutDefault[3];

	FString result;

	if (bUseWin32)
	{
		result = tinyfd_colorChooserW(*Title, *DefaultHexRGB, OutDefault, aoOutDefault);
	}
	else {
		result = tinyfd_colorChooser(TCHAR_TO_ANSI(*Title), TCHAR_TO_ANSI(*DefaultHexRGB), OutDefault, aoOutDefault);
	}

	if (result == "")
	{
		result = "NULL";
		OutColor = DefaultRGB;
		OutColor.A = Alpha;
		return result;
	}
	else {
		OutColor = FColor::FromHex(result);
		OutColor.A = Alpha;
		return result;
	}


}