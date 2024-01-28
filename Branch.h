#pragma once

#include "List.h"
#include "String.h"

/*
	����� Branch, ������� ������ ���������� ��� ������� �� �������� ������ - �������� ������� � ��� �����.
	�������� ��������� ��������, �������� ��������� � ������������� �������, �� ����� ���� � ���� ������������� ����� � �������� ����������� �������.
*/

struct Branch {

	List<String>* name, * place;

	Branch(List<String>* name = nullptr, List<String>* place = nullptr);

	~Branch();

};