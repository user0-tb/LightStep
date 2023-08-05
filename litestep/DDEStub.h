/*
This is a part of the LiteStep Shell Source code.

Copyright (C) 1997-2002 The LiteStep Development Team

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
/**********************************************************************
**********************************************************************/
#ifndef __DDESTUB_H
#define __DDESTUB_H

#include "../utility/IService.h"

class DDEStub: public IService
{
public:
	DDEStub();
	~DDEStub();

	HRESULT Start();
	HRESULT Stop();

private:
    typedef void (__stdcall* ShellDDEFunc)(BOOL);
    static HMODULE m_hShDocVw;
    static ShellDDEFunc m_pShellDDEInit; 
};

#endif // __DDESERVICE_H

