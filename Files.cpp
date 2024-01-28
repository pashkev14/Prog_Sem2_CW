#include "Files.h"

Files::Files(const char* names, const char* places, const char* agents, const char* people, const char* dates, const char* terms, const char* prices, const char* types, const char* cases, const char* commands, const char* log, const char* out) {
	this->names.open(names);
	this->places.open(places);
	this->agents.open(agents);
	this->people.open(people);
	this->dates.open(dates);
	this->terms.open(terms);
	this->prices.open(prices);
	this->types.open(types);
	this->cases.open(cases);
	this->commands.open(commands);
	this->logFile.open(log);
	this->outFile.open(out);
}

Files::~Files() {
	this->names.close();
	this->places.close();
	this->agents.close();
	this->people.close();
	this->dates.close();
	this->terms.close();
	this->prices.close();
	this->types.close();
	this->cases.close();
	this->commands.close();
	this->logFile.close();
	this->outFile.close();
}