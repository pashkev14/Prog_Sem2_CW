#include "Branch.h"

Branch::Branch(List<String>* name, List<String>* place) {
	this->name = name;
	this->place = place;
}

Branch::~Branch() {
	this->name = nullptr;
	this->place = nullptr;
}