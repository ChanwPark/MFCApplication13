#pragma once
#include "SVID_FDC.h"

template <typename T> 
class IDList
{
public:
	IDList(); 
	bool LoadIDList(SVID_FDC<T>* svid_fdc, CString filename); 
};

template <typename T>
IDList<T>::IDList()
{

}


template <typename T>
bool IDList<T>::LoadIDList(SVID_FDC<T>* svid_fdc, CString filename)
{
	CStdioFile file;
	char buffer[1499];
	CString strLine(""), strMaxCnt(""), strTemp(""), strType("");
	int iMaxCnt(0);

	if (!file.Open(filename, CFile::modeRead | CFile::typeText))
	{
		return false;
	}


	while (file.ReadString(buffer, 1499))
	{
		strLine.Format("%s", buffer);

		if (strLine.GetAt(0) == '#' || strLine.GetAt(0) == '@' || strLine.GetAt(0) == '!' || strLine.GetAt(0) == '$')
		{
			continue;
		}

		AfxExtractSubString(strMaxCnt, strLine, 0, '|');

		if (strMaxCnt == "")
		{
			return false; 
		}

		iMaxCnt = atoi(strMaxCnt);
		int *ID = new int[iMaxCnt];

		for (int i = 0; i < iMaxCnt; i++)
		{
			AfxExtractSubString(strTemp, strLine, i + 1, '|');
			ID[i] = atoi(strTemp);
		}

		svid_fdc->SetIndex(ID);
	}

	file.Close();

	return true;

}
