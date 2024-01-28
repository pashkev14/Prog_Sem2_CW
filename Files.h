#pragma once

#include <fstream>

/*
	Класс Files - структура под все имеющиеся файлы в программе.
	Использование в связке с указателями позволяет через обычный синтаксис указателей открывать и закрывать все файлы сразу.
*/

struct Files {

	std::ifstream names;
	std::ifstream places;
	std::ifstream agents;
	std::ifstream people;
	std::ifstream dates;
	std::ifstream terms;
	std::ifstream prices;
	std::ifstream types;
	std::ifstream cases;
	std::ifstream commands;
	std::ofstream logFile;
	std::ofstream outFile;

	Files(const char* names = "names.txt", const char* places = "places.txt", const char* agents = "agents.txt", const char* people = "people.txt", const char* dates = "dates.txt", const char* terms = "terms.txt", const char* prices = "prices.txt", const char* types = "types.txt", const char* cases = "cases.txt", const char* commands = "commands.txt", const char* log = "log.txt", const char* out = "out.txt");

	~Files();

};