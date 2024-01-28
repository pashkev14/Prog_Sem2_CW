#pragma once

#include "Case.h"

/*
	Класс GroupedCases, являющийся этаким словарем для значения.
	Привязанному к объекту из исходных данных привязывается список всех страховых договоров, где этот объект фигурирует.
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