#pragma once

#include "List.h"
#include "String.h"

/*
	 ласс Branch, который просто объедин€ет два объекта из исходных данных - название филиала и его адрес.
	явл€етс€ неудобным костылем, ввод€щим трудности в генерализацию функций, но имеет плюс в виде промежуточной ветки в иерархии подключении модулей.
*/

struct Branch {

	List<String>* name, * place;

	Branch(List<String>* name = nullptr, List<String>* place = nullptr);

	~Branch();

};