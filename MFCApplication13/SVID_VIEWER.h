#pragma once
#include "stdafx.h"
#include "SVID_FDC.h"
#define SVID_FDC_MAX_COUNT 1000
// SVID_VIEWER
class SVID_ITEM
{
	CString	szEnable;				// User�� ���� ��� ����
	int		nIndex;					// ���� ������ ����Ű
	CString	szDescription;			// FDC View ȭ�鿡 ��Ÿ���� ����
	TCHAR	nValue[15];				// ���� ������ ��
	TCHAR	sText[31];			// ����� �߰� ����
};


template <typename T>
class SVID_VIEWER
{
public:
	SVID_VIEWER();
	virtual ~SVID_VIEWER();

	void GetItemValue(SVID_FDC<T>& svid_fdc); 


private:
	SVID_ITEM svid_item[SVID_FDC_MAX_COUNT];
};

template <typename T>
SVID_VIEWER<T>::~SVID_VIEWER()
{

}

template <typename T>
SVID_VIEWER<T>::SVID_VIEWER()
{

}

template <typename T>
void SVID_VIEWER<T>::GetItemValue(SVID_FDC<T>& svid_fdc)
{
	int i = 0; 
	for (auto(svid : svid_fdc))
	{
		svid_item[]
	}
}

