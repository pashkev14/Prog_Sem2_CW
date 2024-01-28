#pragma once

#include "Branch.h"

/*
	 ласс Case, €вл€ющийс€ структурой дл€ страхового договора.
	ѕо требованию не содержит в себе новых данных, не счита€ выделение пам€ти под новый экземпл€р, который будет эти не "новые" данные хранить.
*/

struct Case {

	List<String>* client, * date, * term, * agent, * type;
	Branch* branch;
	int* price;

	Case(List<String>* client = nullptr, List<String>* date = nullptr, List<String>* term = nullptr, List<String>* agent = nullptr, List<String>* type = nullptr, List<String>* name = nullptr, List<String>* place = nullptr, int* price = nullptr);

	~Case();

};