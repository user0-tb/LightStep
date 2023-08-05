# Microsoft Developer Studio Project File - Name="lsapi" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=lsapi - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "lsapi.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "lsapi.mak" CFG="lsapi - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "lsapi - Win32 Release" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "lsapi - Win32 Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "lsapi - Win32 Release"

# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "../Release_VC6"
# PROP Intermediate_Dir "Release_VC6"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD CPP /nologo /MD /W3 /WX /GX /Zd /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "LSAPI_INTERNAL" /D "LSAPI_PRIVATE" /FD /c
# ADD MTL /nologo /D "NDEBUG" /o "NUL" /win32
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BSC32 /nologo
LINK32=link.exe
# ADD LINK32 advapi32.lib delayimp.lib gdi32.lib kernel32.lib libpng13.lib msvcprt.lib msvcrt.lib shell32.lib shlwapi.lib user32.lib /nologo /subsystem:windows /dll /pdb:none /map:"../Release_VC6/lsapi.map" /machine:I386 /nodefaultlib /delayload:"libpng13.dll" /opt:NOWIN98 /MAPINFO:LINES /MAPINFO:EXPORTS

!ELSEIF  "$(CFG)" == "lsapi - Win32 Debug"

# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "../Debug_VC6"
# PROP Intermediate_Dir "Debug_VC6"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD CPP /nologo /MDd /W3 /WX /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "LSAPI_INTERNAL" /D "LSAPI_PRIVATE" /D "LS_NO_EXCEPTION" /FR /FD /GZ /c
# ADD MTL /nologo /D "_DEBUG" /o "NUL" /win32
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BSC32 /nologo
LINK32=link.exe
# ADD LINK32 advapi32.lib delayimp.lib gdi32.lib kernel32.lib libpng13d.lib msvcprtd.lib msvcrtd.lib shell32.lib shlwapi.lib user32.lib /nologo /subsystem:windows /dll /debug /machine:I386 /nodefaultlib /pdbtype:sept /delayload:"libpng13d.dll"

!ENDIF 

# Begin Target

# Name "lsapi - Win32 Release"
# Name "lsapi - Win32 Debug"
# Begin Group "Source"

# PROP Default_Filter "*.cpp;*.c"
# Begin Source File

SOURCE=.\aboutbox.cpp
# End Source File
# Begin Source File

SOURCE=.\BangCommand.cpp
# End Source File
# Begin Source File

SOURCE=.\BangManager.cpp
# End Source File
# Begin Source File

SOURCE=.\bangs.cpp
# End Source File
# Begin Source File

SOURCE=.\graphics.cpp
# End Source File
# Begin Source File

SOURCE=.\lsapi.cpp
# End Source File
# Begin Source File

SOURCE=.\lsapiInit.cpp
# End Source File
# Begin Source File

SOURCE=.\lsmultimon.cpp
# End Source File
# Begin Source File

SOURCE=.\match.cpp
# End Source File
# Begin Source File

SOURCE=.\MathEvaluate.cpp
# End Source File
# Begin Source File

SOURCE=.\MathParser.cpp
# End Source File
# Begin Source File

SOURCE=.\MathScanner.cpp
# End Source File
# Begin Source File

SOURCE=.\MathToken.cpp
# End Source File
# Begin Source File

SOURCE=.\MathValue.cpp
# End Source File
# Begin Source File

SOURCE=.\png_support.cpp
# End Source File
# Begin Source File

SOURCE=.\settings.cpp
# End Source File
# Begin Source File

SOURCE=.\SettingsFileParser.cpp
# End Source File
# Begin Source File

SOURCE=.\SettingsIterator.cpp
# End Source File
# Begin Source File

SOURCE=.\settingsmanager.cpp
# End Source File
# Begin Source File

SOURCE=.\stubs.cpp
# End Source File
# End Group
# Begin Group "Headers"

# PROP Default_Filter "*.h"
# Begin Source File

SOURCE=.\BangCommand.h
# End Source File
# Begin Source File

SOURCE=.\BangManager.h
# End Source File
# Begin Source File

SOURCE=.\bangs.h
# End Source File
# Begin Source File

SOURCE=.\lsapi.h
# End Source File
# Begin Source File

SOURCE=.\lsapidefines.h
# End Source File
# Begin Source File

SOURCE=.\lsapiInit.h
# End Source File
# Begin Source File

SOURCE=.\lsMultiMon.h
# End Source File
# Begin Source File

SOURCE=.\MathEvaluate.h
# End Source File
# Begin Source File

SOURCE=.\MathException.h
# End Source File
# Begin Source File

SOURCE=.\MathParser.h
# End Source File
# Begin Source File

SOURCE=.\MathScanner.h
# End Source File
# Begin Source File

SOURCE=.\MathToken.h
# End Source File
# Begin Source File

SOURCE=.\MathValue.h
# End Source File
# Begin Source File

SOURCE=.\png_support.h
# End Source File
# Begin Source File

SOURCE=.\SettingsDefines.h
# End Source File
# Begin Source File

SOURCE=.\SettingsFileParser.h
# End Source File
# Begin Source File

SOURCE=.\SettingsIterator.h
# End Source File
# Begin Source File

SOURCE=.\SettingsManager.h
# End Source File
# Begin Source File

SOURCE=.\ThreadedBangCommand.h
# End Source File
# End Group
# Begin Group "Resources"

# PROP Default_Filter "*.rc;*.bmp;*.ico;*.h"
# Begin Source File

SOURCE=.\lsapi.rc
# End Source File
# Begin Source File

SOURCE=.\resource.h
# End Source File
# End Group
# End Target
# End Project
