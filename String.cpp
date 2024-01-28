#include "String.h"

String::String(const unsigned int size) {
	this->text = new char[size + 1];
	this->text[0] = '\0';
	this->mark = '\0';
}

String::~String() {
	delete[] this->text;
}

unsigned int String::getSize() {
	unsigned int i = 0;
	while (this->text[i++] != this->mark);
	return i;
}

bool String::isEqual(String* other) {
	if (this->getSize() != other->getSize()) return false;
	for (int i = 0; i < this->getSize(); ++i) {
		if (this->text[i] != other->text[i]) return false;
	}
	return true;
}