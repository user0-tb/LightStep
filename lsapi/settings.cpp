/*
This is a part of the LiteStep Shell Source code.

Copyright (C) 1997-2006 The LiteStep Development Team

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/ 
/****************************************************************************
****************************************************************************/
#include "settingsmanager.h"
#include "../utility/core.hpp"
#include "lsapiInit.h"

FILE* LCOpen(LPCSTR pszPath)
{
	FILE * pFile = NULL;

	if (g_LSAPIManager.IsInitialized())
	{
		if (pszPath)
		{
			if (pszPath[0] != '\0')
			{
				pFile = g_LSAPIManager.GetSettingsManager()->LCOpen(pszPath);
			}
		}
		if (pFile == NULL)
		{
			pFile = g_LSAPIManager.GetSettingsManager()->LCOpen(NULL);
		}
	}

	return pFile;
}


BOOL LCClose(FILE *pFile)
{
	BOOL bReturn = FALSE;

	if (g_LSAPIManager.IsInitialized())
	{
		if (NULL != pFile)
		{
			bReturn = g_LSAPIManager.GetSettingsManager()->LCClose(pFile);
		}
	}

	return bReturn;
}


BOOL LCReadNextCommand(FILE *pFile, LPSTR pszValue, size_t cchValue)
{
	BOOL bReturn = FALSE;

	if (g_LSAPIManager.IsInitialized())
	{
		if (NULL != pFile)
		{
			if (IsValidStringPtr(pszValue, cchValue))
			{
				bReturn = g_LSAPIManager.GetSettingsManager()->LCReadNextLineOrCommand(pFile, pszValue, cchValue);
			}
		}
	}

	return bReturn;
}


BOOL LCReadNextConfig(FILE *pFile, LPCSTR pszConfig, LPSTR pszValue, size_t cchValue)
{
	BOOL bReturn = FALSE;

	if (g_LSAPIManager.IsInitialized())
	{
		if ((pFile != NULL) && IsValidStringPtr(pszConfig) &&
		    IsValidStringPtr(pszValue, cchValue))
		{
			bReturn = g_LSAPIManager.GetSettingsManager()->LCReadNextConfig(pFile, pszConfig, pszValue, cchValue);
		}
	}

	return bReturn;
}


BOOL LCReadNextLine(FILE *pFile, LPSTR pszValue, size_t cchValue)
{
	BOOL bReturn = FALSE;

	if (g_LSAPIManager.IsInitialized())
	{
		if ((pFile != NULL) && IsValidStringPtr(pszValue, cchValue))
		{
			bReturn = g_LSAPIManager.GetSettingsManager()->LCReadNextLineOrCommand(pFile, pszValue, cchValue);
		}
	}

	return bReturn;
}

int GetRCInt(LPCSTR szKeyName, int nDefault)
{
	if (g_LSAPIManager.IsInitialized())
	{
		return g_LSAPIManager.GetSettingsManager()->GetRCInt(szKeyName, nDefault);
	}

	return nDefault;
}


BOOL GetRCBool(LPCSTR szKeyName, BOOL ifFound)
{
	if (g_LSAPIManager.IsInitialized())
	{
		return g_LSAPIManager.GetSettingsManager()->GetRCBool(szKeyName, ifFound);
	}

	return !ifFound;
}


BOOL GetRCBoolDef(LPCSTR szKeyName, BOOL bDefault)
{
	if (g_LSAPIManager.IsInitialized())
	{
		return g_LSAPIManager.GetSettingsManager()->GetRCBoolDef(szKeyName, bDefault);
	}

	return bDefault;
}


BOOL GetRCString(LPCSTR szKeyName, LPSTR szValue, LPCSTR defStr, int maxLen)
{
	if (g_LSAPIManager.IsInitialized())
	{
		return g_LSAPIManager.GetSettingsManager()->GetRCString(szKeyName, szValue, defStr, maxLen);
	}
	else if (szValue && defStr)
	{
		strncpy(szValue, defStr, maxLen);
	}
	return FALSE;
}


COLORREF GetRCColor(LPCSTR szKeyName, COLORREF colDef)
{
	if (g_LSAPIManager.IsInitialized())
	{
		return g_LSAPIManager.GetSettingsManager()->GetRCColor(szKeyName, colDef);
	}

	return colDef;
}


BOOL GetRCLine(LPCSTR szKeyName, LPSTR szBuffer, UINT nBufLen, LPCSTR szDefault)
{
	if (g_LSAPIManager.IsInitialized())
	{
		return g_LSAPIManager.GetSettingsManager()->GetRCLine(szKeyName, szBuffer, nBufLen, szDefault);
	}
	else if(szBuffer && szDefault)
	{
		strncpy(szBuffer, szDefault, nBufLen);
	}
	return FALSE;
}

BOOL LSGetVariableEx(LPCSTR pszKeyName, LPSTR pszValue, DWORD dwLength)
{
	if (g_LSAPIManager.IsInitialized())
	{
		return g_LSAPIManager.GetSettingsManager()->GetVariable(pszKeyName, pszValue, dwLength);
	}

	return FALSE;
}

BOOL LSGetVariable(LPCSTR pszKeyName, LPSTR pszValue)
{
	BOOL bReturn = FALSE;
	char szTempValue[MAX_LINE_LENGTH];

	if (pszValue)
	{
		pszValue[0] = '\0';
	}

	if (g_LSAPIManager.IsInitialized())
	{
		bReturn = g_LSAPIManager.GetSettingsManager()->GetVariable(pszKeyName, szTempValue, MAX_LINE_LENGTH);

		if (bReturn && pszValue)
		{
			StringCchCopy(pszValue, strlen(szTempValue) + 1, szTempValue);
		}
	}

	return bReturn;
}


void LSSetVariable(LPCSTR pszKeyName, LPCSTR pszValue)
{
	if (g_LSAPIManager.IsInitialized())
	{
		g_LSAPIManager.GetSettingsManager()->SetVariable(pszKeyName, pszValue);
	}
}
