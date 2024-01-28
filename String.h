#pragma once

/*
	Класс String, являющийся реализацией строки.
	Строка представлена как массив символов, оканчивающийся заданным маркером.
	Ввиду требования на поблочное считывание введен константный счетчик, ограничивающий размерность массива.
	Счетчик настраивается изменением значения до запуска программы.
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