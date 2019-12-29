# TinyFileDialogsUE4
A plugin that adds the TinyFileDialogs cross-platform lib as accessible blueprint nodes for Unreal Engine 4.

Copyright 2019 - f00n.com - Marc Rogerson

: **Installation**
* Simply add to the Plugin directory of a UE4 project
* Make sure to add TinyFileDialogsLibrary to your project build.cs
  * ![TinyFileDialogs Dependency](https://github.com/Doublezer0/TinyFileDialogsUE4/blob/master/Documentation/img/dependency.JPG)

: **Included Nodes**
* Show Message Box
  * ![TinyFileDialogs ShowMessageBox](https://github.com/Doublezer0/TinyFileDialogsUE4/blob/master/Documentation/img/ShowMessageBox.JPG)

* Show Input box
  * ![TinyFileDialogs ShowInputBox](https://github.com/Doublezer0/TinyFileDialogsUE4/blob/master/Documentation/img/ShowInputBox.JPG)
  
* Show Save File Dialog
  * ![TinyFileDialogs ShowSaveFileDialog](https://github.com/Doublezer0/TinyFileDialogsUE4/blob/master/Documentation/img/ShowSaveFileDialog.JPG)
  
* Show Open File Dialog
  * ![TinyFileDialogs ShowOpenFileDialog](https://github.com/Doublezer0/TinyFileDialogsUE4/blob/master/Documentation/img/ShowOpenFileDialog.JPG)
  
* Show Select Folder Dialog
  * ![TinyFileDialogs ShowSelectFolderDialog](https://github.com/Doublezer0/TinyFileDialogsUE4/blob/master/Documentation/img/ShowSelectFolderDialog.JPG)
  
* Show Color Chooser
  * ![TinyFileDialogs ShowColorChooser](https://github.com/Doublezer0/TinyFileDialogsUE4/blob/master/Documentation/img/ShowColorChooser.JPG)


: **Important Information**
* Not all the functionality of TinyFileDialogs was introduced in this plugin.
* Console functionality not compiled into the lib
* If you wish to update the lib, don't forget to make sure the filename adds the compiler type (mylib.x64.lib)
* Additional information from the TinyFileDialogs header.
 
 TinyFileDialogs.h
- This is not for android nor ios.
- The code is pure C, perfectly compatible with C++.
- the windows only wchar_t (utf-16) prototypes are in the header file
- windows is fully supported from XP to 10 (maybe even older versions)
- C# & LUA via dll, see example files
- OSX supported from 10.4 to 10.11 (maybe even older versions)
- Avoid using " and ' in titles and messages.
- There's one file filter only, it may contain several patterns.
- If no filter description is provided,
  the list of patterns will become the description.
- char const * filterPatterns[3] = { "*.obj" , "*.stl" , "*.dxf" } ;
- On windows link against Comdlg32.lib and Ole32.lib
  This linking is not compulsary for console mode (see above).
- On unix: it tries command line calls, so no such need.
- On unix you need applescript, zenity, matedialog, qarma, kdialog, Xdialog,
  python2/tkinter or dialog (will open a terminal if running without console).
- One of those is already included on most (if not all) desktops.
- In the absence of those it will use gdialog, gxmessage or whiptail
  with a textinputbox.
- If nothing is found, it switches to basic console input,
  it opens a console if needed (requires xterm + bash).
- Use windows separators on windows and unix separators on unix.
- String memory is preallocated statically for all the returned values.
- File and path names are tested before return, they are valid.
- If you pass only a path instead of path + filename,
  make sure it ends with a separator.
- tinyfd_forceConsole=1; at run time, forces dialogs into console mode.
- On windows, console mode only make sense for console applications.
- Mutiple selects are not allowed in console mode.
- The package dialog must be installed to run in enhanced console mode.
  It is already installed on most unix systems.
- On osx, the package dialog can be installed via http://macports.org
- On windows, for enhanced console mode,
  dialog.exe should be copied somewhere on your executable path.
  It can be found at the bottom of the following page:
  http://andrear.altervista.org/home/cdialog.php
- If dialog is missing, it will switch to basic console input.
- You can query the type of dialog that will be use.
- MinGW needs gcc >= v4.9 otherwise some headers are incomplete.
- The Hello World (and a bit more) is on the sourceforge site:
