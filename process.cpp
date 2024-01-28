#include "process.h"

/*
	Функция checkFiles, занимающаяся первичной проверкой всех входных файлов.
	Отсекает возможность продолжения работы, если хоть один из файлов не найден/пуст, и записывает все ошибки в протокол (и уведомляет пользователя о них)
*/

bool checkFiles(Files* files) {
	bool flag = true;
	char tmp;

	if (files->names.is_open()) {
		files->names.unsetf(std::ios::skipws);
		files->names >> tmp;
		if (files->names.eof()) {
			flag = false;
			files->logFile << "Файл с названиями филиалов пустой.\n";
			files->outFile << "Ошибка: файл с названиями филиалов пустой.\n";
		}
		else {
			files->names.clear();
			files->names.seekg(0);
			files->names.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "Файл с названиями филиалов не найден.\n";
		files->outFile << "Ошибка: файл с названиями филиалов не найден.\n";
	}

	if (files->places.is_open()) {
		files->places.unsetf(std::ios::skipws);
		files->places >> tmp;
		if (files->places.eof()) {
			flag = false;
			files->logFile << "Файл с адресами филиалов пустой.\n";
			files->outFile << "Ошибка: файл с адресами филиалов пустой.\n";
		}
		else {
			files->places.clear();
			files->places.seekg(0);
			files->places.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "Файл с адресами филиалов не найден.\n";
		files->outFile << "Ошибка: файл с адресами филиалов не найден.\n";
	}

	if (files->agents.is_open()) {
		files->agents.unsetf(std::ios::skipws);
		files->agents >> tmp;
		if (files->agents.eof()) {
			flag = false;
			files->logFile << "Файл с ФИО агентов пустой.\n";
			files->outFile << "Ошибка: файл с ФИО агентов пустой.\n";
		}
		else {
			files->agents.clear();
			files->agents.seekg(0);
			files->agents.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "Файл с ФИО агентов не найден.\n";
		files->outFile << "Ошибка: файл с ФИО агентов не найден.\n";
	}

	if (files->people.is_open()) {
		files->people.unsetf(std::ios::skipws);
		files->people >> tmp;
		if (files->people.eof()) {
			flag = false;
			files->logFile << "Файл с ФИО клиентов пустой.\n";
			files->outFile << "Ошибка: файл с ФИО клиентов пустой.\n";
		}
		else {
			files->people.clear();
			files->people.seekg(0);
			files->people.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "Файл с ФИО клиентов не найден.\n";
		files->outFile << "Ошибка: файл с ФИО клиентов не найден.\n";
	}

	if (files->dates.is_open()) {
		files->dates.unsetf(std::ios::skipws);
		files->dates >> tmp;
		if (files->dates.eof()) {
			flag = false;
			files->logFile << "Файл с датами пустой.\n";
			files->outFile << "Ошибка: файл с датами пустой.\n";
		}
		else {
			files->dates.clear();
			files->dates.seekg(0);
			files->dates.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "Файл с датами не найден.\n";
		files->outFile << "Ошибка: файл с датами не найден.\n";
	}

	if (files->terms.is_open()) {
		files->terms.unsetf(std::ios::skipws);
		files->terms >> tmp;
		if (files->terms.eof()) {
			flag = false;
			files->logFile << "Файл со сроками пустой.\n";
			files->outFile << "Ошибка: файл со сроками пустой.\n";
		}
		else {
			files->terms.clear();
			files->terms.seekg(0);
			files->terms.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "Файл со сроками не найден.\n";
		files->outFile << "Ошибка: файл со сроками не найден.\n";
	}

	if (files->prices.is_open()) {
		files->prices.unsetf(std::ios::skipws);
		files->prices >> tmp;
		if (files->prices.eof()) {
			flag = false;
			files->logFile << "Файл с суммами пустой.\n";
			files->outFile << "Ошибка: файл с суммами пустой.\n";
		}
		else {
			files->prices.clear();
			files->prices.seekg(0);
			files->prices.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "Файл с суммами не найден.\n";
		files->outFile << "Ошибка: файл с суммами не найден.\n";
	}

	if (files->types.is_open()) {
		files->types.unsetf(std::ios::skipws);
		files->types >> tmp;
		if (files->types.eof()) {
			flag = false;
			files->logFile << "Файл с типами страхования пустой.\n";
			files->outFile << "Ошибка: файл с типами страхования пустой.\n";
		}
		else {
			files->types.clear();
			files->types.seekg(0);
			files->types.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "Файл с типами страхования не найден.\n";
		files->outFile << "Ошибка: файл с типами страхования не найден.\n";
	}

	if (files->cases.is_open()) {
		files->cases.unsetf(std::ios::skipws);
		files->cases >> tmp;
		if (files->cases.eof()) {
			flag = false;
			files->logFile << "Файл со случаями страхования пустой.\n";
			files->outFile << "Ошибка: файл со случаями страхования пустой.\n";
		}
		else {
			files->cases.clear();
			files->cases.seekg(0);
			files->cases.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "Файл со случаями страхования не найден.\n";
		files->outFile << "Ошибка: файл со случаями страхования не найден.\n";
	}

	if (files->commands.is_open()) {
		files->commands.unsetf(std::ios::skipws);
		files->commands >> tmp;
		if (files->commands.eof()) {
			flag = false;
			files->logFile << "Командный файл пустой.\n";
			files->outFile << "Ошибка: командный файл пустой.\n";
		}
		else {
			files->commands.clear();
			files->commands.seekg(0);
			files->commands.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "Командный файл не найден.\n";
		files->outFile << "Ошибка: командный файл не найден.\n";
	}
	return flag;
}

// Далее идет блок функций, которые заменяют повторяющиеся алгоритмы в исходной функции обработки.

/*
	Функция writeToList, заменяющая алгоритм записи исходных данных из входного файла в соответствующий список.
*/

void writeToList(std::ifstream& file, List<List<String>>* list) {
	file.unsetf(std::ios::skipws);
	char tmp;
	Item<String>* tmpItem = new Item<String>;
	Item<List<String>>* tmpList = new Item<List<String>>;
	int charsCount = 0, blocksCount = 0, strCount = 0;
	do {
		file >> tmp;
		if (file.eof()) {
			if (charsCount || blocksCount || strCount) {
				tmpList->val->appendItem(tmpItem);
				list->appendItem(tmpList);
				tmpList = nullptr;
				tmpItem = nullptr;
				charsCount = 0;
				++blocksCount;
				++strCount;
			}
			else {
				delete tmpItem;
				delete tmpList;
			}
			break;
		}
		if (tmp == '\n') {
			tmpList->val->appendItem(tmpItem);
			++blocksCount;
			list->appendItem(tmpList);
			++strCount;
			tmpItem = new Item<String>;
			tmpList = new Item<List<String>>;
			charsCount = 0;
		}
		else {
			if (charsCount == N) {
				tmpList->val->appendItem(tmpItem);
				++blocksCount;
				tmpItem = new Item<String>;
				charsCount = 0;
			}
			tmpItem->val->text[charsCount] = tmp;
			tmpItem->val->text[charsCount + 1] = '\0';
			++charsCount;
		}
	} 
	while (true);
}

/*
	Функция writeToNumList, делающая тоже самое, что и writeToList, но в список числовых данных и с нюансом: алгоритм отбрасывает посторонние данные - отрицательные числа.
*/

void writeToNumList(std::ifstream& file, std::ofstream& log, List<int>* list) {
	long int tmp;
	Item<int>* item;
	do {
		file >> tmp;
		if (file.eof()) break;
		else if (tmp < 0) log << "Обнаружено отрицательное число - " << tmp << ". Оно будет отброшено.\n";
		else {
			item = new Item<int>;
			*(item->val) = tmp;
			list->appendItem(item);
			item = nullptr;
			log << tmp << "->\n";
		}
	} 
	while (true);
	log << "NULL\n\n";
}

/*
	Функция printList, заменяющая алгоритм форматированного вывода списка.
*/

void printList(List<List<String>>* list, std::ofstream& file) {
	Item<List<String>>* tmpList = list->first;
	while (tmpList != nullptr) {
		Item<String>* tmpItem = tmpList->val->first;
		while (tmpItem != nullptr) {
			int i = 0;
			while (tmpItem->val->text[i] != '\0') {
				file << tmpItem->val->text[i];
				++i;
			}
			file << "->";
			tmpItem = tmpItem->next;
		}
		file << "NULL\n|\nV\n";
		tmpList = tmpList->next;
	}
	file << "NULL\n\n";
}

/*
	Функция printString, заменяющая алгоритм вывода строки как строки, а не как списка массивов символов.
*/

void printString(List<String>* list, std::ofstream& file) {
	Item<String>* tmpItem = list->first;
	while (tmpItem != nullptr) {
		int i = 0;
		while (tmpItem->val->text[i] != '\0') {
			file << tmpItem->val->text[i];
			++i;
		}
		tmpItem = tmpItem->next;
	}
}

/*
	Функция areEqual, сравнивающая два списка из строк. 
	Реализована здесь из-за шаблонности реализации класса List (нет смысла писать один метод, который еще и является специализацией шаблона строки).
	Сравнение происходит строка в строку.
*/

bool areEqual(List<String>* a, List<String>* b) {
	if (a->getSize() != b->getSize()) return false;
	Item<String>* pa = a->first, * pb = b->first;
	while (pa != nullptr) {
		if (!pa->val->isEqual(pb->val)) return false;
		pa = pa->next; pb = pb->next;
	}
	return true;
}

/*
	Функция areBranchesEqual, сравнивающая два объекта филиалов.
	Реализована из-за существования класса Branch, который свзяывает между собой два члена в один.
	На деле просто является адаптацией алгоритма сравнения для двух пар строк сразу.
*/

bool areBranchesEqual(Branch* a, Branch* b) {
	if (areEqual(a->name, b->name) && areEqual(a->place, b->place)) return true;
	return false;
}

/*
	Функция isInRegistry, проверяющая, есть ли запись об объекте в картотеке.
*/

bool isInRegistry(List<GroupedCases<List<String>>>* list, List<String>* val) {
	Item<GroupedCases<List<String>>>* p = list->first;
	while (p != nullptr) {
		if (areEqual(p->val->val, val)) return true;
		p = p->next;
	}
	return false;
}

/*
	Функция isBranchInRegistry, делающая тоже самое, что и isInRegistry, но с объектом класса Branch.
*/

bool isBranchInRegistry(List<GroupedCases<Branch>>* list, Branch* val) {
	Item<GroupedCases<Branch>>* p = list->first;
	while (p != nullptr) {
		if (areBranchesEqual(p->val->val, val)) return true;
		p = p->next;
	}
	return false;
}

/*
	Функция indexInRegistry, возвращающая индекс заданного объекта в картотеке.
	Возвращает -1, если объект не записан в картотеку.
*/

int indexInRegistry(List<GroupedCases<List<String>>>* list, List<String>* val) {
	int pos = 0;
	Item<GroupedCases<List<String>>>* p = list->first;
	while (p != nullptr) {
		if (areEqual(p->val->val, val)) return pos;
		++pos;
		p = p->next;
	}
	return -1;
}

/*
	Функция indexBranchInRegistry, делающая тоже самое, что и indexInRegistry, но с объектом класса Branch.
*/

int indexBranchInRegistry(List<GroupedCases<Branch>>* list, Branch* val) {
	int pos = 0;
	Item<GroupedCases<Branch>>* p = list->first;
	while (p != nullptr) {
		if (areBranchesEqual(p->val->val, val)) return pos;
		++pos;
		p = p->next;
	}
	return -1;
}

/*
	Функция newCase, заменяющая алгоритм создания нового страхового случая.
*/

Item<Case>* newCase(Item<List<String>>* date, Item<List<String>>* term, Item<int>* price, Item<List<String>>* name, Item<List<String>>* place, Item<List<String>>* client, Item<List<String>>* agent, Item<List<String>>* type) {
	Item<Case>* tmpItem = new Item<Case>;
	tmpItem->val->date = date->val;
	tmpItem->val->term = term->val;
	tmpItem->val->price = price->val;
	tmpItem->val->branch->name = name->val;
	tmpItem->val->branch->place = place->val;
	tmpItem->val->client = client->val;
	tmpItem->val->agent = agent->val;
	tmpItem->val->type = type->val;
	return tmpItem;
}

/*
	Функция printCase, заменяющая алгоритм форматированного вывода страховых договоров.
*/

void printCase(Item<Case>* p, std::ofstream& file) {
	while (p != nullptr) {
		file << "Дата заключения: "; printString(p->val->date, file);
		file << "\nСрок: "; printString(p->val->term, file);
		file << "\nСтраховая сумма: " << *(p->val->price);
		file << "\nФилиал: \""; printString(p->val->branch->name, file); file << "\", "; printString(p->val->branch->place, file);
		file << "\nФИО клиента: "; printString(p->val->client, file);
		file << "\nФИО агента: "; printString(p->val->agent, file);
		file << "\nТип страхования: "; printString(p->val->type, file); file << "\n\n";
		p = p->next;
	}
}

/*
	Функция printCaseCheckBranch, являющаяся адаптацией printCase под вывод запроса по типу и по филиалу.
	Если договор находится, происходит вывод, если ни одного не нашлось, об этом будет соответствующее сообщение - все по счетчику.
*/

int printCaseCheckBranch(Item<Case>* p, std::ofstream& file, Branch* val) {
	int count = 0;
	while (p != nullptr) {
		if (areBranchesEqual(p->val->branch, val)) {
			file << "Дата заключения: "; printString(p->val->date, file);
			file << "\nСрок: "; printString(p->val->term, file);
			file << "\nСтраховая сумма: " << *(p->val->price);
			file << "\nФилиал: \""; printString(p->val->branch->name, file); file << "\", "; printString(p->val->branch->place, file);
			file << "\nФИО клиента: "; printString(p->val->client, file);
			file << "\nФИО агента: "; printString(p->val->agent, file);
			file << "\nТип страхования: "; printString(p->val->type, file); file << "\n\n";
			++count;
		}
		p = p->next;
	}
	return count;
}

// Конец блока замещающих функций.

/*
	Функция process, занимающаяся обработкой данных.
	Алгоритм обработки:
	1. Проверить, что все входные файлы на месте и не пустые
	2. Заполнить списки данными
	3. Обработать файл с договорами, сформировать список из договоров, где указаны корректные индексы на исходные данные
	4. Если список оказался не пуст, сформировать из имеющихся договоров картотеку по категориям
	5. Обработать командный файл с запросами, вывести ответы на корректные запросы
	6. Освободить память от исходных данных и завершить обработку
*/

void process() {
	Files* files = new Files;
	files->logFile << "Программа начала свою работу.\n\nПроизводится проверка входных файлов на существование и наличие содержимого.\n\n";
	if (checkFiles(files)) {
		List<List<String>>* listOfNames = new List<List<String>>, * listOfPlaces = new List<List<String>>, * listOfAgents = new List<List<String>>, * listOfClients = new List<List<String>>, * listOfDates = new List<List<String>>, * listOfTerms = new List<List<String>>, * listOfTypes = new List<List<String>>;
		List<int>* listOfPrices = new List<int>;
		files->logFile << "Все входные файлы найдены и не пустые.\nПроизводится запись исходнных данных в списки.\n\nЗаполняется список названий филиалов.\n\n";
		writeToList(files->names, listOfNames);
		printList(listOfNames, files->logFile);
		files->logFile << "Заполнен список названий филиалов.\n\nЗаполняется список адресов филиалов.\n\n";
		writeToList(files->places, listOfPlaces);
		printList(listOfPlaces, files->logFile);
		files->logFile << "Заполнен список адресов филиалов.\n\nЗаполняется список ФИО агентов.\n\n";
		writeToList(files->agents, listOfAgents);
		printList(listOfAgents, files->logFile);
		files->logFile << "Заполнен список ФИО агентов.\n\nЗаполняется список ФИО клиентов.\n\n";
		writeToList(files->people, listOfClients);
		printList(listOfClients, files->logFile);
		files->logFile << "Заполнен список ФИО клиентов.\n\nЗаполняется список дат страхования.\n\n";
		writeToList(files->dates, listOfDates);
		printList(listOfDates, files->logFile);
		files->logFile << "Заполнен список дат страхования.\n\nЗаполняется список сроков страхования.\n\n";
		writeToList(files->terms, listOfTerms);
		printList(listOfTerms, files->logFile);
		files->logFile << "Заполнен список сроков страхования.\n\nЗаполняется список типов страхования.\n\n";
		writeToList(files->types, listOfTypes);
		printList(listOfTypes, files->logFile);
		files->logFile << "Заполнен список типов страхования.\n\nЗаполняется список страховых сумм.\n\n";
		writeToNumList(files->prices, files->logFile, listOfPrices);
		if (listOfPrices->isEmpty()) {
			files->logFile << "В ходе отбрасывания список страховых сумм остался пустым.\nДальнейшая работа программы не имеет смысла.\n";
			files->outFile << "В ходе отбрасывания список страховых сумм остался пустым.\nДальнейшая работа программы не имеет смысла.\n";
		}
		else {
			files->logFile << "Заполнен список страховых сумм.\n\nЗаполняется список заключенных договоров.\n\n";
			List<Case>* listOfCases = new List<Case>;
			Item<GroupedCases<List<String>>>* tmpReg; 
			Item<GroupedCases<Branch>>* tmpBranchReg;
			List<GroupedCases<List<String>>>** casesByAgents = new List<GroupedCases<List<String>>>* [33];
			for (int i = 0; i < 33; ++i) casesByAgents[i] = new List<GroupedCases<List<String>>>;
			List<GroupedCases<Branch>>** casesByBranches = new List<GroupedCases<Branch>>* [33];
			for (int i = 0; i < 33; ++i) casesByBranches[i] = new List<GroupedCases<Branch>>;
			List<GroupedCases<List<String>>>** casesByClients = new List<GroupedCases<List<String>>>* [33];
			for (int i = 0; i < 33; ++i) casesByClients[i] = new List<GroupedCases<List<String>>>;
			List<GroupedCases<List<String>>>** casesByTypes = new List<GroupedCases<List<String>>>* [33];
			for (int i = 0; i < 33; ++i) casesByTypes[i] = new List<GroupedCases<List<String>>>;
			Item<Case>* tmpItem;
			int tmpDate, tmpTerm, tmpPrice, tmpName, tmpPlace, tmpClient, tmpAgent, tmpType;
			bool flag;
			do {
				flag = false;
				files->cases >> tmpDate >> tmpTerm >> tmpPrice >> tmpName >> tmpPlace >> tmpClient >> tmpAgent >> tmpType;
				files->logFile << tmpDate << ' ' << tmpTerm << ' ' << tmpPrice << ' ' << tmpName << ' ' << tmpPlace << ' ' << tmpClient << ' ' << tmpAgent << ' ' << tmpType << "\n";
				Item<List<String>>* date = listOfDates->getItem(tmpDate);
				if (date == nullptr) {
					flag = true;
					files->logFile << "Некорректный индекс для списка дат - " << tmpDate << ".\n";
				}
				Item<List<String>>* term = listOfTerms->getItem(tmpTerm);
				if (term == nullptr) {
					flag = true;
					files->logFile << "Некорректный индекс для списка сроков - " << tmpTerm << ".\n";
				}
				Item<int>* price = listOfPrices->getItem(tmpPrice);
				if (price == nullptr) {
					flag = true;
					files->logFile << "Некорректный индекс для списка страховых сумм - " << tmpPrice << ".\n";
				}
				Item<List<String>>* name = listOfNames->getItem(tmpName);
				if (name == nullptr) {
					flag = true;
					files->logFile << "Некорректный индекс для списка названий - " << tmpName << ".\n";
				}
				Item<List<String>>* place = listOfPlaces->getItem(tmpPlace);
				if (place == nullptr) {
					flag = true;
					files->logFile << "Некорректный индекс для списка адресов - " << tmpPlace << ".\n";
				}
				Item<List<String>>* client = listOfClients->getItem(tmpClient);
				if (client == nullptr) {
					flag = true;
					files->logFile << "Некорректный индекс для списка ФИО клиентов - " << tmpClient << ".\n";
				}
				Item<List<String>>* agent = listOfAgents->getItem(tmpAgent);
				if (agent == nullptr) {
					flag = true;
					files->logFile << "Некорректный индекс для списка ФИО агентов - " << tmpAgent << ".\n";
				}
				Item<List<String>>* type = listOfTypes->getItem(tmpType);
				if (type == nullptr) {
					flag = true;
					files->logFile << "Некорректный индекс для списка типов страхования - " << tmpType << ".\n";
				}
				if (flag) files->logFile << "Договор не подлежит записи.\n\n";
				else {
					char a;
					tmpItem = newCase(date, term, price, name, place, client, agent, type);
					listOfCases->appendItem(tmpItem);
					tmpItem = newCase(date, term, price, name, place, client, agent, type);
					a = tmpItem->val->agent->first->val->text[0];
					if (!isInRegistry(casesByAgents[a == 'Ё' ? 32 : a + 64], tmpItem->val->agent)) {
						tmpReg = new Item<GroupedCases<List<String>>>;
						tmpReg->val->val = tmpItem->val->agent;
						tmpReg->val->cases->appendItem(tmpItem);
						casesByAgents[a == 'Ё' ? 32 : a + 64]->appendItem(tmpReg);
					}
					else casesByAgents[a == 'Ё' ? 32 : a + 64]->getItem(indexInRegistry(casesByAgents[a == 'Ё' ? 32 : a + 64], tmpItem->val->agent))->val->cases->appendItem(tmpItem);
					tmpItem = newCase(date, term, price, name, place, client, agent, type);
					a = tmpItem->val->branch->name->first->val->text[0];
					if (!isBranchInRegistry(casesByBranches[a == 'Ё' ? 32 : a + 64], tmpItem->val->branch)) {
						tmpBranchReg = new Item<GroupedCases<Branch>>;
						tmpBranchReg->val->val = tmpItem->val->branch;
						tmpBranchReg->val->cases->appendItem(tmpItem);
						casesByBranches[a == 'Ё' ? 32 : a + 64]->appendItem(tmpBranchReg);
					}
					else casesByBranches[a == 'Ё' ? 32 : a + 64]->getItem(indexBranchInRegistry(casesByBranches[a == 'Ё' ? 32 : a + 64], tmpItem->val->branch))->val->cases->appendItem(tmpItem);
					tmpItem = newCase(date, term, price, name, place, client, agent, type);
					a = tmpItem->val->client->first->val->text[0];
					if (!isInRegistry(casesByClients[a == 'Ё' ? 32 : a + 64], tmpItem->val->client)) {
						tmpReg = new Item<GroupedCases<List<String>>>;
						tmpReg->val->val = tmpItem->val->client;
						tmpReg->val->cases->appendItem(tmpItem);
						casesByClients[a == 'Ё' ? 32 : a + 64]->appendItem(tmpReg);
					}
					else casesByClients[a == 'Ё' ? 32 : a + 64]->getItem(indexInRegistry(casesByClients[a == 'Ё' ? 32 : a + 64], tmpItem->val->client))->val->cases->appendItem(tmpItem);
					tmpItem = newCase(date, term, price, name, place, client, agent, type);
					a = tmpItem->val->type->first->val->text[0];
					if (!isInRegistry(casesByTypes[a == 'Ё' ? 32 : a + 64], tmpItem->val->type)) {
						tmpReg = new Item<GroupedCases<List<String>>>;
						tmpReg->val->val = tmpItem->val->type;
						tmpReg->val->cases->appendItem(tmpItem);
						casesByTypes[a == 'Ё' ? 32 : a + 64]->appendItem(tmpReg);
					}
					else casesByTypes[a == 'Ё' ? 32 : a + 64]->getItem(indexInRegistry(casesByTypes[a == 'Ё' ? 32 : a + 64], tmpItem->val->type))->val->cases->appendItem(tmpItem);
					files->logFile << "Договор успешно записан.\n\n";
				}
			}
			while (!files->cases.eof());
			files->logFile << "Заполнен список заключенных договоров.\n\nДоговоры:\n\n";
			printCase(listOfCases->first, files->logFile);
			files->logFile << "По агентам:\n\n";
			for (int i = 0; i < 33; ++i) {
				Item<GroupedCases<List<String>>>* p = casesByAgents[i]->first;
				while (p != nullptr) {
					printString(p->val->val, files->logFile);
					files->logFile << "\n\n";
					printCase(p->val->cases->first, files->logFile);
					p = p->next;
				}
			}
			files->logFile << "По филиалам:\n\n";
			for (int i = 0; i < 33; ++i) {
				Item<GroupedCases<Branch>>* p = casesByBranches[i]->first;
				while (p != nullptr) {
					files->logFile << '"'; printString(p->val->val->name, files->logFile); files->logFile << "\", "; printString(p->val->val->place, files->logFile);
					files->logFile << "\n\n";
					printCase(p->val->cases->first, files->logFile);
					p = p->next;
				}
			}
			files->logFile << "По клиентам:\n\n";
			for (int i = 0; i < 33; ++i) {
				Item<GroupedCases<List<String>>>* p = casesByClients[i]->first;
				while (p != nullptr) {
					printString(p->val->val, files->logFile);
					files->logFile << "\n\n";
					printCase(p->val->cases->first, files->logFile);
					p = p->next;
				}
			}
			files->logFile << "По типам:\n\n";
			for (int i = 0; i < 33; ++i) {
				Item<GroupedCases<List<String>>>* p = casesByTypes[i]->first;
				while (p != nullptr) {
					printString(p->val->val, files->logFile);
					files->logFile << "\n\n";
					printCase(p->val->cases->first, files->logFile);
					p = p->next;
				}
			}
			if (listOfCases->isEmpty()) {
				files->logFile << "В ходе отбрасывания список заключенных договоров остался пустым.\nДальнейшая работа программы не имеет смысла.\n";
				files->outFile << "В ходе отбрасывания список заключенных договоров остался пустым.\nДальнейшая работа программы не имеет смысла.\n";
			}
			else {
				files->commands.unsetf(std::ios::skipws);
				files->logFile << "Производится обработка запросов.\n\n";
				int mode;
				char tmp;
				do {
					files->commands >> mode;
					if (mode < 1 || mode > 5) {
						files->logFile << "Считан неверный код запроса - " << mode << ". Запрос проигнорирован.\n\n";
						files->outFile << "Ошибка: считан неверный код запроса - " << mode << " (допустимые коды - от 1 до 5).\nЗапрос проигнорирован.\n\n";
						files->commands >> tmp;
						while (tmp != '\n' && !files->commands.eof()) files->commands >> tmp;
					}
 					else if (mode == 1 || mode == 3 || mode == 5) {
						List<String>* val = new List<String>;
						Item<String>* tmpItem = new Item<String>;
						int charsCount = 0;
						files->commands >> tmp; files->commands >> tmp;
						do {
							if (tmp == '\n' || files->commands.eof()) {
								if (charsCount) {
									val->appendItem(tmpItem);
									tmpItem = nullptr;
								}
								else delete tmpItem;
								break;
							}
							else {
								if (charsCount == N) {
									val->appendItem(tmpItem);
									tmpItem = new Item<String>;
									charsCount = 0;
								}
								tmpItem->val->text[charsCount] = tmp;
								tmpItem->val->text[charsCount + 1] = '\0';
								++charsCount;
							}
							files->commands >> tmp;
						} 
						while (true);
						char a = val->first->val->text[0];
						if (mode == 1) {
							files->logFile << "Запрос с кодом 1 - результаты работы агента:\n";
							files->outFile << "Запрос с кодом 1 - результаты работы агента:\n";
							if (isInRegistry(casesByAgents[a == 'Ё' ? 32 : a + 64], val)) {
								int summary = 0;
								files->logFile << "\n"; printString(val, files->logFile); files->logFile << "\n\nДоговоры:\n\n";
								files->outFile << "\n"; printString(val, files->outFile); files->outFile << "\n\nДоговоры:\n\n";
								printCase(casesByAgents[a == 'Ё' ? 32 : a + 64]->getItem(indexInRegistry(casesByAgents[a == 'Ё' ? 32 : a + 64], val))->val->cases->first, files->logFile);
								printCase(casesByAgents[a == 'Ё' ? 32 : a + 64]->getItem(indexInRegistry(casesByAgents[a == 'Ё' ? 32 : a + 64], val))->val->cases->first, files->outFile);
								Item<Case>* t = casesByAgents[a == 'Ё' ? 32 : a + 64]->getItem(indexInRegistry(casesByAgents[a == 'Ё' ? 32 : a + 64], val))->val->cases->first;
								while (t != nullptr) {
									summary += *(t->val->price);
									t = t->next;
								}
								files->logFile << "Выручка агента: " << summary << "\n\n";
								files->outFile << "Выручка агента: " << summary << "\n\n";
							}
							else {
								files->logFile << "Агент "; printString(val, files->logFile); files->logFile << " не найден в картотеке. Запрос проигнорирован.\n\n";
								files->outFile << "Агент "; printString(val, files->outFile); files->outFile << " не найден в картотеке. Запрос проигнорирован.\n\n";
							}
						}
						else if (mode == 3) {
							files->logFile << "Запрос с кодом 3 - страховые договоры клиента:\n";
							files->outFile << "Запрос с кодом 3 - страховые договоры клиента:\n";
							if (isInRegistry(casesByClients[a == 'Ё' ? 32 : a + 64], val)) {
								files->logFile << "\n"; printString(val, files->logFile); files->logFile << "\n\n";
								files->outFile << "\n"; printString(val, files->outFile); files->outFile << "\n\n";
								printCase(casesByClients[a == 'Ё' ? 32 : a + 64]->getItem(indexInRegistry(casesByClients[a == 'Ё' ? 32 : a + 64], val))->val->cases->first, files->logFile);
								printCase(casesByClients[a == 'Ё' ? 32 : a + 64]->getItem(indexInRegistry(casesByClients[a == 'Ё' ? 32 : a + 64], val))->val->cases->first, files->outFile);
							}
							else {
								files->logFile << "Клиент "; printString(val, files->logFile); files->logFile << " не найден в картотеке. Запрос проигнорирован.\n\n";
								files->outFile << "Клиент "; printString(val, files->outFile); files->outFile << " не найден в картотеке. Запрос проигнорирован.\n\n";
							}
						}
						else {
							files->logFile << "Запрос с кодом 5 - база договоров компании по типу:\n";
							files->outFile << "Запрос с кодом 5 - база договоров компании по типу:\n";
							if (isInRegistry(casesByTypes[a == 'Ё' ? 32 : a + 64], val)) {
								files->logFile << "\n"; printString(val, files->logFile); files->logFile << "\n\n";
								files->outFile << "\n"; printString(val, files->outFile); files->outFile << "\n\n";
								printCase(casesByTypes[a == 'Ё' ? 32 : a + 64]->getItem(indexInRegistry(casesByTypes[a == 'Ё' ? 32 : a + 64], val))->val->cases->first, files->logFile);
								printCase(casesByTypes[a == 'Ё' ? 32 : a + 64]->getItem(indexInRegistry(casesByTypes[a == 'Ё' ? 32 : a + 64], val))->val->cases->first, files->outFile);
							}
							else {
								files->logFile << "Тип \""; printString(val, files->logFile); files->logFile << "\" не найден в картотеке. Запрос проигнорирован.\n\n";
								files->outFile << "Тип \""; printString(val, files->outFile); files->outFile << "\" не найден в картотеке. Запрос проигнорирован.\n\n";
							}
						}
						delete val;
					}
					else if (mode == 2) {
						files->logFile << "Запрос с кодом 2 - результаты работы филиала:\n";
						files->outFile << "Запрос с кодом 2 - результаты работы филиала:\n";
						List<String>* val1 = new List<String>;
						Item<String>* tmpItem = new Item<String>;
						int charsCount = 0;
						files->commands >> tmp; files->commands >> tmp;
						do {
							if (tmp == ';' || files->commands.eof()) {
								if (charsCount) {
									val1->appendItem(tmpItem);
									tmpItem = nullptr;
								}
								else delete tmpItem;
								break;
							}
							else {
								if (charsCount == N) {
									val1->appendItem(tmpItem);
									tmpItem = new Item<String>;
									charsCount = 0;
								}
								tmpItem->val->text[charsCount] = tmp;
								tmpItem->val->text[charsCount + 1] = '\0';
								++charsCount;
							}
							files->commands >> tmp;
						} 
						while (true);
						List<String>* val2 = new List<String>;
						tmpItem = new Item<String>;
						charsCount = 0;
						files->commands >> tmp; files->commands >> tmp;
						do {
							if (tmp == '\n' || files->commands.eof()) {
								if (charsCount) {
									val2->appendItem(tmpItem);
									tmpItem = nullptr;
								}
								else delete tmpItem;
								break;
							}
							else {
								if (charsCount == N) {
									val2->appendItem(tmpItem);
									tmpItem = new Item<String>;
									charsCount = 0;
								}
								tmpItem->val->text[charsCount] = tmp;
								tmpItem->val->text[charsCount + 1] = '\0';
								++charsCount;
							}
							files->commands >> tmp;
						} 
						while (true);
						char a = val1->first->val->text[0];
						Branch* val = new Branch(val1, val2);
						if (isBranchInRegistry(casesByBranches[a == 'Ё' ? 32 : a + 64], val)) {
							files->logFile << "\n\""; printString(val->name, files->logFile); files->logFile << "\", "; printString(val->place, files->logFile); files->logFile << "\n\n";
							files->outFile << "\n\""; printString(val->name, files->outFile); files->outFile << "\", "; printString(val->place, files->outFile); files->outFile << "\n\n";
							int summary = 0;
							printCase(casesByBranches[a == 'Ё' ? 32 : a + 64]->getItem(indexBranchInRegistry(casesByBranches[a == 'Ё' ? 32 : a + 64], val))->val->cases->first, files->logFile);
							printCase(casesByBranches[a == 'Ё' ? 32 : a + 64]->getItem(indexBranchInRegistry(casesByBranches[a == 'Ё' ? 32 : a + 64], val))->val->cases->first, files->outFile);
							Item<Case>* t = casesByBranches[a == 'Ё' ? 32 : a + 64]->getItem(indexBranchInRegistry(casesByBranches[a == 'Ё' ? 32 : a + 64], val))->val->cases->first;
							while (t != nullptr) {
								summary += *(t->val->price);
								t = t->next;
							}
							files->logFile << "Выручка филиала: " << summary << "\n\n";
							files->outFile << "Выручка филиала: " << summary << "\n\n";
						}
						else {
							files->logFile << "Филиал \""; printString(val->name, files->logFile); files->logFile << "\", "; printString(val->place, files->logFile); files->logFile << " не найден в картотеке. Запрос проигнорирован.\n\n";
							files->outFile << "Филиал \""; printString(val->name, files->outFile); files->outFile << "\", "; printString(val->place, files->outFile); files->outFile << " не найден в картотеке. Запрос проигнорирован.\n\n";
						}
						delete val;
						delete val1;
						delete val2;
					}
					else if (mode == 4) {
					files->logFile << "Запрос с кодом 4 - база договоров филиала по типу:\n";
					files->outFile << "Запрос с кодом 4 - база договоров филиала по типу:\n";
						List<String>* val1 = new List<String>;
						Item<String>* tmpItem = new Item<String>;
						int charsCount = 0;
						files->commands >> tmp; files->commands >> tmp;
						do {
							if (tmp == ';' || files->commands.eof()) {
								if (charsCount) {
									val1->appendItem(tmpItem);
									tmpItem = nullptr;
								}
								else delete tmpItem;
								break;
							}
							else {
								if (charsCount == N) {
									val1->appendItem(tmpItem);
									tmpItem = new Item<String>;
									charsCount = 0;
								}
								tmpItem->val->text[charsCount] = tmp;
								tmpItem->val->text[charsCount + 1] = '\0';
								++charsCount;
							}
							files->commands >> tmp;
						} 
						while (true);
						List<String>* val2 = new List<String>;
						tmpItem = new Item<String>;
						charsCount = 0;
						files->commands >> tmp; files->commands >> tmp;
						do {
							if (tmp == ';' || files->commands.eof()) {
								if (charsCount) {
									val2->appendItem(tmpItem);
									tmpItem = nullptr;
								}
								else delete tmpItem;
								break;
							}
							else {
								if (charsCount == N) {
									val2->appendItem(tmpItem);
									tmpItem = new Item<String>;
									charsCount = 0;
								}
								tmpItem->val->text[charsCount] = tmp;
								tmpItem->val->text[charsCount + 1] = '\0';
								++charsCount;
							}
							files->commands >> tmp;
						} 
						while (true);
						List<String>* val3 = new List<String>;
						tmpItem = new Item<String>;
						charsCount = 0;
						files->commands >> tmp; files->commands >> tmp;
						do {
							if (tmp == '\n' || files->commands.eof()) {
								if (charsCount) {
									val3->appendItem(tmpItem);
									tmpItem = nullptr;
								}
								else delete tmpItem;
								break;
							}
							else {
								if (charsCount == N) {
									val3->appendItem(tmpItem);
									tmpItem = new Item<String>;
									charsCount = 0;
								}
								tmpItem->val->text[charsCount] = tmp;
								tmpItem->val->text[charsCount + 1] = '\0';
								++charsCount;
							}
							files->commands >> tmp;
						} 
						while (true);
						Branch* branch = new Branch(val2, val3);
						char a = val1->first->val->text[0], b = val2->first->val->text[0];
						if (isInRegistry(casesByTypes[a == 'Ё' ? 32 : a + 64], val1) && isBranchInRegistry(casesByBranches[b == 'Ё' ? 32 : b + 64], branch)) {
							files->logFile << "\nТип: "; printString(val1, files->logFile);
							files->outFile << "\nТип: "; printString(val1, files->outFile);
							files->logFile << "\nФилиал: \""; printString(branch->name, files->logFile); files->logFile << "\", "; printString(branch->place, files->logFile); files->logFile << "\n\n";
							files->outFile << "\nФилиал: \""; printString(branch->name, files->outFile); files->outFile << "\", "; printString(branch->place, files->outFile); files->outFile << "\n\n";
							if (!printCaseCheckBranch(casesByTypes[a == 'Ё' ? 32 : a + 64]->getItem(indexInRegistry(casesByTypes[a == 'Ё' ? 32 : a + 64], val1))->val->cases->first, files->logFile, branch)) {
								files->logFile << "Записей, совпадающих по двум параметрам сразу, в картотеке не было обнаружено.\n\n";
							}
							if (!printCaseCheckBranch(casesByTypes[a == 'Ё' ? 32 : a + 64]->getItem(indexInRegistry(casesByTypes[a == 'Ё' ? 32 : a + 64], val1))->val->cases->first, files->outFile, branch)) {
								files->outFile << "Записей, совпадающих по двум параметрам сразу, в картотеке не было обнаружено.\n\n";
							}
						}
						else {
							if (!isInRegistry(casesByTypes[a == 'Ё' ? 32 : a + 64], val1)) {
								files->logFile << "Тип \""; printString(val1, files->logFile); files->logFile << "\" не найден в картотеке.\n";
								files->outFile << "Тип \""; printString(val1, files->outFile); files->outFile << "\" не найден в картотеке.\n";
							}
							if (!isBranchInRegistry(casesByBranches[b == 'Ё' ? 32 : b + 64], branch)) {
								files->logFile << "Филиал \""; printString(branch->name, files->logFile); files->logFile << "\", "; printString(branch->place, files->logFile); files->logFile << " не найден в картотеке.\n";
							    files->outFile << "Филиал \""; printString(branch->name, files->outFile); files->outFile << "\", "; printString(branch->place, files->outFile); files->outFile << " не найден в картотеке.\n";
							}
							files->logFile << "Запрос проигнорирован.\n\n";
							files->outFile << "Запрос проигнорирован.\n\n";
						}
						delete branch;
						delete val1;
						delete val2;
						delete val3;
					}
				} 
				while (!files->commands.eof());
				files->logFile << "Командный файл достиг конца.\n\n";
				files->outFile << "Командный файл достиг конца.";
			}
			files->logFile << "Блок проверок на корректные удаления картотек:\n\nПо агентам:\n\n";
			for (int i = 0; i < 33; ++i) {
				files->logFile << "До: " << casesByAgents[i]->first << " " << casesByAgents[i]->last;
				delete casesByAgents[i];
				files->logFile << "\nПосле: " << casesByAgents[i]->first << " " << casesByAgents[i]->last << "\n\n";
			}
			delete[] casesByAgents;
			files->logFile << "По филиалам:\n\n";
			for (int i = 0; i < 33; ++i) {
				files->logFile << "До: " << casesByBranches[i]->first << " " << casesByBranches[i]->last;
				delete casesByBranches[i];
				files->logFile << "\nПосле: " << casesByBranches[i]->first << " " << casesByBranches[i]->last << "\n\n";
			}
			delete[] casesByBranches;
			files->logFile << "По клиентам:\n\n";
			for (int i = 0; i < 33; ++i) {
				files->logFile << "До: " << casesByClients[i]->first << " " << casesByClients[i]->last;
				delete casesByClients[i];
				files->logFile << "\nПосле: " << casesByClients[i]->first << " " << casesByClients[i]->last << "\n\n";
			}
			delete[] casesByClients;
			files->logFile << "По типам:\n\n";
			for (int i = 0; i < 33; ++i) {
				files->logFile << "До: " << casesByTypes[i]->first << " " << casesByTypes[i]->last;
				delete casesByTypes[i];
				files->logFile << "\nПосле: " << casesByTypes[i]->first << " " << casesByTypes[i]->last << "\n\n";
			}
			delete[] casesByTypes;
			files->logFile << "Список договоров:\n\nДо: " << listOfCases->first << " " << listOfCases->last;
			delete listOfCases;
			files->logFile << "\nПосле: " << listOfCases->first << " " << listOfCases->last << "\n\nБлок завершен успешно.\n\n";
		}
		files->logFile << "Блок проверок на корректные удаления исходных списков:\n\nНазвания филиалов:\n\nДо: " << listOfNames->first << " " << listOfNames->last;
		delete listOfNames;
		files->logFile << "\nПосле: " << listOfNames->first << " " << listOfNames->last << "\n\nАдреса филиалов:\n\nДо: " << listOfPlaces->first << " " << listOfPlaces->last;
		delete listOfPlaces;
		files->logFile << "\nПосле: " << listOfPlaces->first << " " << listOfPlaces->last << "\n\nФИО агентов:\n\nДо: " << listOfAgents->first << " " << listOfAgents->last;
		delete listOfAgents;
		files->logFile << "\nПосле: " << listOfAgents->first << " " << listOfAgents->last << "\n\nФИО клиентов:\n\nДо: " << listOfClients->first << " " << listOfClients->last;
		delete listOfClients;
		files->logFile << "\nПосле: " << listOfClients->first << " " << listOfClients->last << "\n\nДаты страхования:\n\nДо: " << listOfDates->first << " " << listOfDates->last;
		delete listOfDates;
		files->logFile << "\nПосле: " << listOfDates->first << " " << listOfDates->last << "\n\nСроки страхования:\n\nДо: " << listOfTerms->first << " " << listOfTerms->last;
		delete listOfTerms;
		files->logFile << "\nПосле: " << listOfTerms->first << " " << listOfTerms->last << "\n\nТипы страхования:\n\nДо: " << listOfTypes->first << " " << listOfTypes->last;
		delete listOfTypes;
		files->logFile << "\nПосле: " << listOfTypes->first << " " << listOfTypes->last << "\n\nСтраховые суммы:\n\nДо: " << listOfPrices->first << " " << listOfPrices->last;
		delete listOfPrices;
		files->logFile << "\nПосле: " << listOfPrices->first << " " << listOfPrices->last << "\n\n";
		files->logFile << "Блок завершен успешно.\n\n";
	}
	files->logFile << "Программа завершила свою работу.";
	delete files;
}