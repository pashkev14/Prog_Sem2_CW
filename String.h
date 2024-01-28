#pragma once

/*
	����� String, ���������� ����������� ������.
	������ ������������ ��� ������ ��������, �������������� �������� ��������.
	����� ���������� �� ��������� ���������� ������ ����������� �������, �������������� ����������� �������.
	������� ������������� ���������� �������� �� ������� ���������.
*/

const unsigned int N = 5;

struct String {

	char* text;
	char mark;

	String(const unsigned int size = N);

	~String();

	unsigned int getSize();

	bool isEqual(String* other);

};