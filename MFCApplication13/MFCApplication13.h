
// MFCApplication13.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CMFCApplication13App:
// �� Ŭ������ ������ ���ؼ��� MFCApplication13.cpp�� �����Ͻʽÿ�.
//

class CMFCApplication13App : public CWinApp
{
public:
	CMFCApplication13App();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication13App theApp;