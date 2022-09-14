#pragma once
#include <vector>

using namespace std; 
//SVID 

template <typename T>
//T타입은 자료형으로 받고, 생성자로 값은 동적할당으로 크기를 설정한다. 
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
	//해당 크기를 알 수 없기 떄문에 동적할당으로 값을 가져온다. 
	T* value_;
	int* nIndex_;

};
