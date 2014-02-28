//! Main header file for the kickd_pic32_ubl DLL
/*
\verbatim 
$Id: kickd_pic32_DLLmain.h 336 2014-02-28 12:44:41Z oliver $
\endverbatim
*/

#pragma once
#include "kickd_pic32_ubl.h"

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

//! DLL entry point
class CKickdPic32Ubl : public CWinApp
{
public:
	CKickdPic32Ubl();

// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance( );

	DECLARE_MESSAGE_MAP()

private: 
};

