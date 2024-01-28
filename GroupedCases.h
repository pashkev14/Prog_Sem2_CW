#pragma once

#include "Case.h"

/*
	����� GroupedCases, ���������� ������ �������� ��� ��������.
	������������ � ������� �� �������� ������ ������������� ������ ���� ��������� ���������, ��� ���� ������ ����������.
*/

template<typename T>
struct GroupedCases {

	T* val;
	List<Case>* cases;

	GroupedCases(T* val = nullptr) {
		this->val = val;
		this->cases = new List<Case>;
	}

	~GroupedCases() {
		delete this->cases;
		this->val = nullptr;
	}

};