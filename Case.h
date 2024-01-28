#pragma once

#include "Branch.h"

/*
	����� Case, ���������� ���������� ��� ���������� ��������.
	�� ���������� �� �������� � ���� ����� ������, �� ������ ��������� ������ ��� ����� ���������, ������� ����� ��� �� "�����" ������ �������.
*/

struct Case {

	List<String>* client, * date, * term, * agent, * type;
	Branch* branch;
	int* price;

	Case(List<String>* client = nullptr, List<String>* date = nullptr, List<String>* term = nullptr, List<String>* agent = nullptr, List<String>* type = nullptr, List<String>* name = nullptr, List<String>* place = nullptr, int* price = nullptr);

	~Case();

};