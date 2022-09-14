#pragma once
#include <vector>

using namespace std; 
//SVID 

template <typename T>
//TŸ���� �ڷ������� �ް�, �����ڷ� ���� �����Ҵ����� ũ�⸦ �����Ѵ�. 
class SVID_FDC
{
public:
	SVID_FDC() {}
	SVID_FDC(T* value, int* index) :
		value_(value), nIndex_(index){}
	
	void SetValue(T* value) { value_ = value; }
	void SetValue(int idx, T value) { value_[idx] = value; }
	void SetIndex(int* index) { nIndex_ = index; }
	void SetIndex(int idx, int index) { nIndex_[idx] = index; }

	T getValue(int idx) { return value_[idx]; }
	int getIndex(int idx) { return nIndex_[idx];  }

	bool isSameValue(T value, int idx) { return value_[idx]== value[idx]; }


	void deleteValue() { delete[] value_;  }
	void deleteIndex() { delete[] nIndex_; }
	void deleteArray() { delete[] value_, delete[] nIndex_; }

private:
	//�ش� ũ�⸦ �� �� ���� ������ �����Ҵ����� ���� �����´�. 
	T* value_;
	int* nIndex_;

};
