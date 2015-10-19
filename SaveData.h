
// Realtime.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols

#include "KHOpenAPICtrl.h"
#include <fstream>


// CSaveDataApp:
// See Realtime.cpp for the implementation of this class
//

class CSaveDataApp : public CWinApp
{
public:
	CSaveDataApp();
	CKHOpenAPI m_cKHOpenAPI;
	CString m_sAppPath;

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CSaveDataApp theApp;