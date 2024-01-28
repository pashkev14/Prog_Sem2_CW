#include "Case.h"

Case::Case(List<String>* client, List<String>* date, List<String>* term, List<String>* agent, List<String>* type, List<String>* name, List<String>* place, int* price) {
	this->client = client;
	this->date = date;
	this->term = term;
	this->branch = new Branch(name, place);
	this->agent = agent;
	this->price = price;
	this->type = type;
}

Case::~Case() {
	this->client = nullptr;
	this->date = nullptr;
	this->term = nullptr;
	this->agent = nullptr;
	this->type = nullptr;
	delete this->branch;
	this->price = nullptr;
}