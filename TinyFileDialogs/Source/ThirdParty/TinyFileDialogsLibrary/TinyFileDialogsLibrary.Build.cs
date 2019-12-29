// Copyright 2019 f00n.com

using System.IO;
using UnrealBuildTool;

public class TinyFileDialogsLibrary : ModuleRules
{
    private string ModulePath
    {
        get { return ModuleDirectory; }
    }

    private string ThirdPartyPath
    {
        get { return Path.GetFullPath(Path.Combine(ModulePath, "../../ThirdParty/TinyFileDialogsLibrary/")); }
    }

    public TinyFileDialogsLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		//if (Target.Platform == UnrealTargetPlatform.Win64)
		//{
		//	// Add the import library
		//	PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "x64", "Release", "ExampleLibrary.lib"));

		//	// Delay-load the DLL, so we can load it from the right place first
		//	PublicDelayLoadDLLs.Add("ExampleLibrary.dll");

		//	// Ensure that the DLL is staged along with the executable
		//	RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/TinyFileDialogsLibrary/Win64/ExampleLibrary.dll");
  //      }
  //      else if (Target.Platform == UnrealTargetPlatform.Mac)
  //      {
  //          PublicDelayLoadDLLs.Add(Path.Combine(ModuleDirectory, "Mac", "Release", "libExampleLibrary.dylib"));
  //          RuntimeDependencies.Add("$(PluginDir)/Source/ThirdParty/TinyFileDialogsLibrary/Mac/Release/libExampleLibrary.dylib");
  //      }

        LoadTinyFileDialogs(Target);
    }

    public bool LoadTinyFileDialogs(ReadOnlyTargetRules Target)
    {
        bool isLibrarySupported = false;

        if ((Target.Platform == UnrealTargetPlatform.Win64) || (Target.Platform == UnrealTargetPlatform.Win32))
        {
            isLibrarySupported = true;

            string PlatformString = (Target.Platform == UnrealTargetPlatform.Win64) ? "x64" : "x86";
            string LibrariesPath = Path.Combine(ThirdPartyPath, "TinyFileDialogs", "lib");

            //print path to console
            //System.Console.WriteLine("... LibrariesPath -> " + Path.Combine(LibrariesPath, "tinyfiledialogs." + PlatformString + ".lib"));

            PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "tinyfiledialogs." + PlatformString + ".lib"));
        }

        if (isLibrarySupported)
        {
            // Include path
            PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "TinyFileDialogs", "inc"));
        }

        PublicDefinitions.Add(string.Format("WITH_TINY_FILE_DIALOGS_BINDING={0}", isLibrarySupported ? 1 : 0));

        return isLibrarySupported;
    }

}
