#include "process.h"

/*
	������� checkFiles, ������������ ��������� ��������� ���� ������� ������.
	�������� ����������� ����������� ������, ���� ���� ���� �� ������ �� ������/����, � ���������� ��� ������ � �������� (� ���������� ������������ � ���)
*/

bool checkFiles(Files* files) {
	bool flag = true;
	char tmp;

	if (files->names.is_open()) {
		files->names.unsetf(std::ios::skipws);
		files->names >> tmp;
		if (files->names.eof()) {
			flag = false;
			files->logFile << "���� � ���������� �������� ������.\n";
			files->outFile << "������: ���� � ���������� �������� ������.\n";
		}
		else {
			files->names.clear();
			files->names.seekg(0);
			files->names.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "���� � ���������� �������� �� ������.\n";
		files->outFile << "������: ���� � ���������� �������� �� ������.\n";
	}

	if (files->places.is_open()) {
		files->places.unsetf(std::ios::skipws);
		files->places >> tmp;
		if (files->places.eof()) {
			flag = false;
			files->logFile << "���� � �������� �������� ������.\n";
			files->outFile << "������: ���� � �������� �������� ������.\n";
		}
		else {
			files->places.clear();
			files->places.seekg(0);
			files->places.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "���� � �������� �������� �� ������.\n";
		files->outFile << "������: ���� � �������� �������� �� ������.\n";
	}

	if (files->agents.is_open()) {
		files->agents.unsetf(std::ios::skipws);
		files->agents >> tmp;
		if (files->agents.eof()) {
			flag = false;
			files->logFile << "���� � ��� ������� ������.\n";
			files->outFile << "������: ���� � ��� ������� ������.\n";
		}
		else {
			files->agents.clear();
			files->agents.seekg(0);
			files->agents.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "���� � ��� ������� �� ������.\n";
		files->outFile << "������: ���� � ��� ������� �� ������.\n";
	}

	if (files->people.is_open()) {
		files->people.unsetf(std::ios::skipws);
		files->people >> tmp;
		if (files->people.eof()) {
			flag = false;
			files->logFile << "���� � ��� �������� ������.\n";
			files->outFile << "������: ���� � ��� �������� ������.\n";
		}
		else {
			files->people.clear();
			files->people.seekg(0);
			files->people.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "���� � ��� �������� �� ������.\n";
		files->outFile << "������: ���� � ��� �������� �� ������.\n";
	}

	if (files->dates.is_open()) {
		files->dates.unsetf(std::ios::skipws);
		files->dates >> tmp;
		if (files->dates.eof()) {
			flag = false;
			files->logFile << "���� � ������ ������.\n";
			files->outFile << "������: ���� � ������ ������.\n";
		}
		else {
			files->dates.clear();
			files->dates.seekg(0);
			files->dates.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "���� � ������ �� ������.\n";
		files->outFile << "������: ���� � ������ �� ������.\n";
	}

	if (files->terms.is_open()) {
		files->terms.unsetf(std::ios::skipws);
		files->terms >> tmp;
		if (files->terms.eof()) {
			flag = false;
			files->logFile << "���� �� ������� ������.\n";
			files->outFile << "������: ���� �� ������� ������.\n";
		}
		else {
			files->terms.clear();
			files->terms.seekg(0);
			files->terms.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "���� �� ������� �� ������.\n";
		files->outFile << "������: ���� �� ������� �� ������.\n";
	}

	if (files->prices.is_open()) {
		files->prices.unsetf(std::ios::skipws);
		files->prices >> tmp;
		if (files->prices.eof()) {
			flag = false;
			files->logFile << "���� � ������� ������.\n";
			files->outFile << "������: ���� � ������� ������.\n";
		}
		else {
			files->prices.clear();
			files->prices.seekg(0);
			files->prices.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "���� � ������� �� ������.\n";
		files->outFile << "������: ���� � ������� �� ������.\n";
	}

	if (files->types.is_open()) {
		files->types.unsetf(std::ios::skipws);
		files->types >> tmp;
		if (files->types.eof()) {
			flag = false;
			files->logFile << "���� � ������ ����������� ������.\n";
			files->outFile << "������: ���� � ������ ����������� ������.\n";
		}
		else {
			files->types.clear();
			files->types.seekg(0);
			files->types.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "���� � ������ ����������� �� ������.\n";
		files->outFile << "������: ���� � ������ ����������� �� ������.\n";
	}

	if (files->cases.is_open()) {
		files->cases.unsetf(std::ios::skipws);
		files->cases >> tmp;
		if (files->cases.eof()) {
			flag = false;
			files->logFile << "���� �� �������� ����������� ������.\n";
			files->outFile << "������: ���� �� �������� ����������� ������.\n";
		}
		else {
			files->cases.clear();
			files->cases.seekg(0);
			files->cases.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "���� �� �������� ����������� �� ������.\n";
		files->outFile << "������: ���� �� �������� ����������� �� ������.\n";
	}

	if (files->commands.is_open()) {
		files->commands.unsetf(std::ios::skipws);
		files->commands >> tmp;
		if (files->commands.eof()) {
			flag = false;
			files->logFile << "��������� ���� ������.\n";
			files->outFile << "������: ��������� ���� ������.\n";
		}
		else {
			files->commands.clear();
			files->commands.seekg(0);
			files->commands.setf(std::ios::skipws);
		}
	}
	else {
		flag = false;
		files->logFile << "��������� ���� �� ������.\n";
		files->outFile << "������: ��������� ���� �� ������.\n";
	}
	return flag;
}

// ����� ���� ���� �������, ������� �������� ������������� ��������� � �������� ������� ���������.

/*
	������� writeToList, ���������� �������� ������ �������� ������ �� �������� ����� � ��������������� ������.
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
	������� writeToNumList, �������� ���� �����, ��� � writeToList, �� � ������ �������� ������ � � �������: �������� ����������� ����������� ������ - ������������� �����.
*/

void writeToNumList(std::ifstream& file, std::ofstream& log, List<int>* list) {
	long int tmp;
	Item<int>* item;
	do {
		file >> tmp;
		if (file.eof()) break;
		else if (tmp < 0) log << "���������� ������������� ����� - " << tmp << ". ��� ����� ���������.\n";
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
	������� printList, ���������� �������� ���������������� ������ ������.
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
	������� printString, ���������� �������� ������ ������ ��� ������, � �� ��� ������ �������� ��������.
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
	������� areEqual, ������������ ��� ������ �� �����. 
	����������� ����� ��-�� ����������� ���������� ������ List (��� ������ ������ ���� �����, ������� ��� � �������� �������������� ������� ������).
	��������� ���������� ������ � ������.
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
	������� areBranchesEqual, ������������ ��� ������� ��������.
	����������� ��-�� ������������� ������ Branch, ������� ��������� ����� ����� ��� ����� � ����.
	�� ���� ������ �������� ���������� ��������� ��������� ��� ���� ��� ����� �����.
*/

bool areBranchesEqual(Branch* a, Branch* b) {
	if (areEqual(a->name, b->name) && areEqual(a->place, b->place)) return true;
	return false;
}

/*
	������� isInRegistry, �����������, ���� �� ������ �� ������� � ���������.
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
	������� isBranchInRegistry, �������� ���� �����, ��� � isInRegistry, �� � �������� ������ Branch.
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
	������� indexInRegistry, ������������ ������ ��������� ������� � ���������.
	���������� -1, ���� ������ �� ������� � ���������.
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
	������� indexBranchInRegistry, �������� ���� �����, ��� � indexInRegistry, �� � �������� ������ Branch.
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
	������� newCase, ���������� �������� �������� ������ ���������� ������.
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
	������� printCase, ���������� �������� ���������������� ������ ��������� ���������.
*/

void printCase(Item<Case>* p, std::ofstream& file) {
	while (p != nullptr) {
		file << "���� ����������: "; printString(p->val->date, file);
		file << "\n����: "; printString(p->val->term, file);
		file << "\n��������� �����: " << *(p->val->price);
		file << "\n������: \""; printString(p->val->branch->name, file); file << "\", "; printString(p->val->branch->place, file);
		file << "\n��� �������: "; printString(p->val->client, file);
		file << "\n��� ������: "; printString(p->val->agent, file);
		file << "\n��� �����������: "; printString(p->val->type, file); file << "\n\n";
		p = p->next;
	}
}

/*
	������� printCaseCheckBranch, ���������� ���������� printCase ��� ����� ������� �� ���� � �� �������.
	���� ������� ���������, ���������� �����, ���� �� ������ �� �������, �� ���� ����� ��������������� ��������� - ��� �� ��������.
*/

int printCaseCheckBranch(Item<Case>* p, std::ofstream& file, Branch* val) {
	int count = 0;
	while (p != nullptr) {
		if (areBranchesEqual(p->val->branch, val)) {
			file << "���� ����������: "; printString(p->val->date, file);
			file << "\n����: "; printString(p->val->term, file);
			file << "\n��������� �����: " << *(p->val->price);
			file << "\n������: \""; printString(p->val->branch->name, file); file << "\", "; printString(p->val->branch->place, file);
			file << "\n��� �������: "; printString(p->val->client, file);
			file << "\n��� ������: "; printString(p->val->agent, file);
			file << "\n��� �����������: "; printString(p->val->type, file); file << "\n\n";
			++count;
		}
		p = p->next;
	}
	return count;
}

// ����� ����� ���������� �������.

/*
	������� process, ������������ ���������� ������.
	�������� ���������:
	1. ���������, ��� ��� ������� ����� �� ����� � �� ������
	2. ��������� ������ �������
	3. ���������� ���� � ����������, ������������ ������ �� ���������, ��� ������� ���������� ������� �� �������� ������
	4. ���� ������ �������� �� ����, ������������ �� ��������� ��������� ��������� �� ����������
	5. ���������� ��������� ���� � ���������, ������� ������ �� ���������� �������
	6. ���������� ������ �� �������� ������ � ��������� ���������
*/

void process() {
	Files* files = new Files;
	files->logFile << "��������� ������ ���� ������.\n\n������������ �������� ������� ������ �� ������������� � ������� �����������.\n\n";
	if (checkFiles(files)) {
		List<List<String>>* listOfNames = new List<List<String>>, * listOfPlaces = new List<List<String>>, * listOfAgents = new List<List<String>>, * listOfClients = new List<List<String>>, * listOfDates = new List<List<String>>, * listOfTerms = new List<List<String>>, * listOfTypes = new List<List<String>>;
		List<int>* listOfPrices = new List<int>;
		files->logFile << "��� ������� ����� ������� � �� ������.\n������������ ������ ��������� ������ � ������.\n\n����������� ������ �������� ��������.\n\n";
		writeToList(files->names, listOfNames);
		printList(listOfNames, files->logFile);
		files->logFile << "�������� ������ �������� ��������.\n\n����������� ������ ������� ��������.\n\n";
		writeToList(files->places, listOfPlaces);
		printList(listOfPlaces, files->logFile);
		files->logFile << "�������� ������ ������� ��������.\n\n����������� ������ ��� �������.\n\n";
		writeToList(files->agents, listOfAgents);
		printList(listOfAgents, files->logFile);
		files->logFile << "�������� ������ ��� �������.\n\n����������� ������ ��� ��������.\n\n";
		writeToList(files->people, listOfClients);
		printList(listOfClients, files->logFile);
		files->logFile << "�������� ������ ��� ��������.\n\n����������� ������ ��� �����������.\n\n";
		writeToList(files->dates, listOfDates);
		printList(listOfDates, files->logFile);
		files->logFile << "�������� ������ ��� �����������.\n\n����������� ������ ������ �����������.\n\n";
		writeToList(files->terms, listOfTerms);
		printList(listOfTerms, files->logFile);
		files->logFile << "�������� ������ ������ �����������.\n\n����������� ������ ����� �����������.\n\n";
		writeToList(files->types, listOfTypes);
		printList(listOfTypes, files->logFile);
		files->logFile << "�������� ������ ����� �����������.\n\n����������� ������ ��������� ����.\n\n";
		writeToNumList(files->prices, files->logFile, listOfPrices);
		if (listOfPrices->isEmpty()) {
			files->logFile << "� ���� ������������ ������ ��������� ���� ������� ������.\n���������� ������ ��������� �� ����� ������.\n";
			files->outFile << "� ���� ������������ ������ ��������� ���� ������� ������.\n���������� ������ ��������� �� ����� ������.\n";
		}
		else {
			files->logFile << "�������� ������ ��������� ����.\n\n����������� ������ ����������� ���������.\n\n";
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
					files->logFile << "������������ ������ ��� ������ ��� - " << tmpDate << ".\n";
				}
				Item<List<String>>* term = listOfTerms->getItem(tmpTerm);
				if (term == nullptr) {
					flag = true;
					files->logFile << "������������ ������ ��� ������ ������ - " << tmpTerm << ".\n";
				}
				Item<int>* price = listOfPrices->getItem(tmpPrice);
				if (price == nullptr) {
					flag = true;
					files->logFile << "������������ ������ ��� ������ ��������� ���� - " << tmpPrice << ".\n";
				}
				Item<List<String>>* name = listOfNames->getItem(tmpName);
				if (name == nullptr) {
					flag = true;
					files->logFile << "������������ ������ ��� ������ �������� - " << tmpName << ".\n";
				}
				Item<List<String>>* place = listOfPlaces->getItem(tmpPlace);
				if (place == nullptr) {
					flag = true;
					files->logFile << "������������ ������ ��� ������ ������� - " << tmpPlace << ".\n";
				}
				Item<List<String>>* client = listOfClients->getItem(tmpClient);
				if (client == nullptr) {
					flag = true;
					files->logFile << "������������ ������ ��� ������ ��� �������� - " << tmpClient << ".\n";
				}
				Item<List<String>>* agent = listOfAgents->getItem(tmpAgent);
				if (agent == nullptr) {
					flag = true;
					files->logFile << "������������ ������ ��� ������ ��� ������� - " << tmpAgent << ".\n";
				}
				Item<List<String>>* type = listOfTypes->getItem(tmpType);
				if (type == nullptr) {
					flag = true;
					files->logFile << "������������ ������ ��� ������ ����� ����������� - " << tmpType << ".\n";
				}
				if (flag) files->logFile << "������� �� �������� ������.\n\n";
				else {
					char a;
					tmpItem = newCase(date, term, price, name, place, client, agent, type);
					listOfCases->appendItem(tmpItem);
					tmpItem = newCase(date, term, price, name, place, client, agent, type);
					a = tmpItem->val->agent->first->val->text[0];
					if (!isInRegistry(casesByAgents[a == '�' ? 32 : a + 64], tmpItem->val->agent)) {
						tmpReg = new Item<GroupedCases<List<String>>>;
						tmpReg->val->val = tmpItem->val->agent;
						tmpReg->val->cases->appendItem(tmpItem);
						casesByAgents[a == '�' ? 32 : a + 64]->appendItem(tmpReg);
					}
					else casesByAgents[a == '�' ? 32 : a + 64]->getItem(indexInRegistry(casesByAgents[a == '�' ? 32 : a + 64], tmpItem->val->agent))->val->cases->appendItem(tmpItem);
					tmpItem = newCase(date, term, price, name, place, client, agent, type);
					a = tmpItem->val->branch->name->first->val->text[0];
					if (!isBranchInRegistry(casesByBranches[a == '�' ? 32 : a + 64], tmpItem->val->branch)) {
						tmpBranchReg = new Item<GroupedCases<Branch>>;
						tmpBranchReg->val->val = tmpItem->val->branch;
						tmpBranchReg->val->cases->appendItem(tmpItem);
						casesByBranches[a == '�' ? 32 : a + 64]->appendItem(tmpBranchReg);
					}
					else casesByBranches[a == '�' ? 32 : a + 64]->getItem(indexBranchInRegistry(casesByBranches[a == '�' ? 32 : a + 64], tmpItem->val->branch))->val->cases->appendItem(tmpItem);
					tmpItem = newCase(date, term, price, name, place, client, agent, type);
					a = tmpItem->val->client->first->val->text[0];
					if (!isInRegistry(casesByClients[a == '�' ? 32 : a + 64], tmpItem->val->client)) {
						tmpReg = new Item<GroupedCases<List<String>>>;
						tmpReg->val->val = tmpItem->val->client;
						tmpReg->val->cases->appendItem(tmpItem);
						casesByClients[a == '�' ? 32 : a + 64]->appendItem(tmpReg);
					}
					else casesByClients[a == '�' ? 32 : a + 64]->getItem(indexInRegistry(casesByClients[a == '�' ? 32 : a + 64], tmpItem->val->client))->val->cases->appendItem(tmpItem);
					tmpItem = newCase(date, term, price, name, place, client, agent, type);
					a = tmpItem->val->type->first->val->text[0];
					if (!isInRegistry(casesByTypes[a == '�' ? 32 : a + 64], tmpItem->val->type)) {
						tmpReg = new Item<GroupedCases<List<String>>>;
						tmpReg->val->val = tmpItem->val->type;
						tmpReg->val->cases->appendItem(tmpItem);
						casesByTypes[a == '�' ? 32 : a + 64]->appendItem(tmpReg);
					}
					else casesByTypes[a == '�' ? 32 : a + 64]->getItem(indexInRegistry(casesByTypes[a == '�' ? 32 : a + 64], tmpItem->val->type))->val->cases->appendItem(tmpItem);
					files->logFile << "������� ������� �������.\n\n";
				}
			}
			while (!files->cases.eof());
			files->logFile << "�������� ������ ����������� ���������.\n\n��������:\n\n";
			printCase(listOfCases->first, files->logFile);
			files->logFile << "�� �������:\n\n";
			for (int i = 0; i < 33; ++i) {
				Item<GroupedCases<List<String>>>* p = casesByAgents[i]->first;
				while (p != nullptr) {
					printString(p->val->val, files->logFile);
					files->logFile << "\n\n";
					printCase(p->val->cases->first, files->logFile);
					p = p->next;
				}
			}
			files->logFile << "�� ��������:\n\n";
			for (int i = 0; i < 33; ++i) {
				Item<GroupedCases<Branch>>* p = casesByBranches[i]->first;
				while (p != nullptr) {
					files->logFile << '"'; printString(p->val->val->name, files->logFile); files->logFile << "\", "; printString(p->val->val->place, files->logFile);
					files->logFile << "\n\n";
					printCase(p->val->cases->first, files->logFile);
					p = p->next;
				}
			}
			files->logFile << "�� ��������:\n\n";
			for (int i = 0; i < 33; ++i) {
				Item<GroupedCases<List<String>>>* p = casesByClients[i]->first;
				while (p != nullptr) {
					printString(p->val->val, files->logFile);
					files->logFile << "\n\n";
					printCase(p->val->cases->first, files->logFile);
					p = p->next;
				}
			}
			files->logFile << "�� �����:\n\n";
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
				files->logFile << "� ���� ������������ ������ ����������� ��������� ������� ������.\n���������� ������ ��������� �� ����� ������.\n";
				files->outFile << "� ���� ������������ ������ ����������� ��������� ������� ������.\n���������� ������ ��������� �� ����� ������.\n";
			}
			else {
				files->commands.unsetf(std::ios::skipws);
				files->logFile << "������������ ��������� ��������.\n\n";
				int mode;
				char tmp;
				do {
					files->commands >> mode;
					if (mode < 1 || mode > 5) {
						files->logFile << "������ �������� ��� ������� - " << mode << ". ������ ��������������.\n\n";
						files->outFile << "������: ������ �������� ��� ������� - " << mode << " (���������� ���� - �� 1 �� 5).\n������ ��������������.\n\n";
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
							files->logFile << "������ � ����� 1 - ���������� ������ ������:\n";
							files->outFile << "������ � ����� 1 - ���������� ������ ������:\n";
							if (isInRegistry(casesByAgents[a == '�' ? 32 : a + 64], val)) {
								int summary = 0;
								files->logFile << "\n"; printString(val, files->logFile); files->logFile << "\n\n��������:\n\n";
								files->outFile << "\n"; printString(val, files->outFile); files->outFile << "\n\n��������:\n\n";
								printCase(casesByAgents[a == '�' ? 32 : a + 64]->getItem(indexInRegistry(casesByAgents[a == '�' ? 32 : a + 64], val))->val->cases->first, files->logFile);
								printCase(casesByAgents[a == '�' ? 32 : a + 64]->getItem(indexInRegistry(casesByAgents[a == '�' ? 32 : a + 64], val))->val->cases->first, files->outFile);
								Item<Case>* t = casesByAgents[a == '�' ? 32 : a + 64]->getItem(indexInRegistry(casesByAgents[a == '�' ? 32 : a + 64], val))->val->cases->first;
								while (t != nullptr) {
									summary += *(t->val->price);
									t = t->next;
								}
								files->logFile << "������� ������: " << summary << "\n\n";
								files->outFile << "������� ������: " << summary << "\n\n";
							}
							else {
								files->logFile << "����� "; printString(val, files->logFile); files->logFile << " �� ������ � ���������. ������ ��������������.\n\n";
								files->outFile << "����� "; printString(val, files->outFile); files->outFile << " �� ������ � ���������. ������ ��������������.\n\n";
							}
						}
						else if (mode == 3) {
							files->logFile << "������ � ����� 3 - ��������� �������� �������:\n";
							files->outFile << "������ � ����� 3 - ��������� �������� �������:\n";
							if (isInRegistry(casesByClients[a == '�' ? 32 : a + 64], val)) {
								files->logFile << "\n"; printString(val, files->logFile); files->logFile << "\n\n";
								files->outFile << "\n"; printString(val, files->outFile); files->outFile << "\n\n";
								printCase(casesByClients[a == '�' ? 32 : a + 64]->getItem(indexInRegistry(casesByClients[a == '�' ? 32 : a + 64], val))->val->cases->first, files->logFile);
								printCase(casesByClients[a == '�' ? 32 : a + 64]->getItem(indexInRegistry(casesByClients[a == '�' ? 32 : a + 64], val))->val->cases->first, files->outFile);
							}
							else {
								files->logFile << "������ "; printString(val, files->logFile); files->logFile << " �� ������ � ���������. ������ ��������������.\n\n";
								files->outFile << "������ "; printString(val, files->outFile); files->outFile << " �� ������ � ���������. ������ ��������������.\n\n";
							}
						}
						else {
							files->logFile << "������ � ����� 5 - ���� ��������� �������� �� ����:\n";
							files->outFile << "������ � ����� 5 - ���� ��������� �������� �� ����:\n";
							if (isInRegistry(casesByTypes[a == '�' ? 32 : a + 64], val)) {
								files->logFile << "\n"; printString(val, files->logFile); files->logFile << "\n\n";
								files->outFile << "\n"; printString(val, files->outFile); files->outFile << "\n\n";
								printCase(casesByTypes[a == '�' ? 32 : a + 64]->getItem(indexInRegistry(casesByTypes[a == '�' ? 32 : a + 64], val))->val->cases->first, files->logFile);
								printCase(casesByTypes[a == '�' ? 32 : a + 64]->getItem(indexInRegistry(casesByTypes[a == '�' ? 32 : a + 64], val))->val->cases->first, files->outFile);
							}
							else {
								files->logFile << "��� \""; printString(val, files->logFile); files->logFile << "\" �� ������ � ���������. ������ ��������������.\n\n";
								files->outFile << "��� \""; printString(val, files->outFile); files->outFile << "\" �� ������ � ���������. ������ ��������������.\n\n";
							}
						}
						delete val;
					}
					else if (mode == 2) {
						files->logFile << "������ � ����� 2 - ���������� ������ �������:\n";
						files->outFile << "������ � ����� 2 - ���������� ������ �������:\n";
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
						if (isBranchInRegistry(casesByBranches[a == '�' ? 32 : a + 64], val)) {
							files->logFile << "\n\""; printString(val->name, files->logFile); files->logFile << "\", "; printString(val->place, files->logFile); files->logFile << "\n\n";
							files->outFile << "\n\""; printString(val->name, files->outFile); files->outFile << "\", "; printString(val->place, files->outFile); files->outFile << "\n\n";
							int summary = 0;
							printCase(casesByBranches[a == '�' ? 32 : a + 64]->getItem(indexBranchInRegistry(casesByBranches[a == '�' ? 32 : a + 64], val))->val->cases->first, files->logFile);
							printCase(casesByBranches[a == '�' ? 32 : a + 64]->getItem(indexBranchInRegistry(casesByBranches[a == '�' ? 32 : a + 64], val))->val->cases->first, files->outFile);
							Item<Case>* t = casesByBranches[a == '�' ? 32 : a + 64]->getItem(indexBranchInRegistry(casesByBranches[a == '�' ? 32 : a + 64], val))->val->cases->first;
							while (t != nullptr) {
								summary += *(t->val->price);
								t = t->next;
							}
							files->logFile << "������� �������: " << summary << "\n\n";
							files->outFile << "������� �������: " << summary << "\n\n";
						}
						else {
							files->logFile << "������ \""; printString(val->name, files->logFile); files->logFile << "\", "; printString(val->place, files->logFile); files->logFile << " �� ������ � ���������. ������ ��������������.\n\n";
							files->outFile << "������ \""; printString(val->name, files->outFile); files->outFile << "\", "; printString(val->place, files->outFile); files->outFile << " �� ������ � ���������. ������ ��������������.\n\n";
						}
						delete val;
						delete val1;
						delete val2;
					}
					else if (mode == 4) {
					files->logFile << "������ � ����� 4 - ���� ��������� ������� �� ����:\n";
					files->outFile << "������ � ����� 4 - ���� ��������� ������� �� ����:\n";
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
						if (isInRegistry(casesByTypes[a == '�' ? 32 : a + 64], val1) && isBranchInRegistry(casesByBranches[b == '�' ? 32 : b + 64], branch)) {
							files->logFile << "\n���: "; printString(val1, files->logFile);
							files->outFile << "\n���: "; printString(val1, files->outFile);
							files->logFile << "\n������: \""; printString(branch->name, files->logFile); files->logFile << "\", "; printString(branch->place, files->logFile); files->logFile << "\n\n";
							files->outFile << "\n������: \""; printString(branch->name, files->outFile); files->outFile << "\", "; printString(branch->place, files->outFile); files->outFile << "\n\n";
							if (!printCaseCheckBranch(casesByTypes[a == '�' ? 32 : a + 64]->getItem(indexInRegistry(casesByTypes[a == '�' ? 32 : a + 64], val1))->val->cases->first, files->logFile, branch)) {
								files->logFile << "�������, ����������� �� ���� ���������� �����, � ��������� �� ���� ����������.\n\n";
							}
							if (!printCaseCheckBranch(casesByTypes[a == '�' ? 32 : a + 64]->getItem(indexInRegistry(casesByTypes[a == '�' ? 32 : a + 64], val1))->val->cases->first, files->outFile, branch)) {
								files->outFile << "�������, ����������� �� ���� ���������� �����, � ��������� �� ���� ����������.\n\n";
							}
						}
						else {
							if (!isInRegistry(casesByTypes[a == '�' ? 32 : a + 64], val1)) {
								files->logFile << "��� \""; printString(val1, files->logFile); files->logFile << "\" �� ������ � ���������.\n";
								files->outFile << "��� \""; printString(val1, files->outFile); files->outFile << "\" �� ������ � ���������.\n";
							}
							if (!isBranchInRegistry(casesByBranches[b == '�' ? 32 : b + 64], branch)) {
								files->logFile << "������ \""; printString(branch->name, files->logFile); files->logFile << "\", "; printString(branch->place, files->logFile); files->logFile << " �� ������ � ���������.\n";
							    files->outFile << "������ \""; printString(branch->name, files->outFile); files->outFile << "\", "; printString(branch->place, files->outFile); files->outFile << " �� ������ � ���������.\n";
							}
							files->logFile << "������ ��������������.\n\n";
							files->outFile << "������ ��������������.\n\n";
						}
						delete branch;
						delete val1;
						delete val2;
						delete val3;
					}
				} 
				while (!files->commands.eof());
				files->logFile << "��������� ���� ������ �����.\n\n";
				files->outFile << "��������� ���� ������ �����.";
			}
			files->logFile << "���� �������� �� ���������� �������� ��������:\n\n�� �������:\n\n";
			for (int i = 0; i < 33; ++i) {
				files->logFile << "��: " << casesByAgents[i]->first << " " << casesByAgents[i]->last;
				delete casesByAgents[i];
				files->logFile << "\n�����: " << casesByAgents[i]->first << " " << casesByAgents[i]->last << "\n\n";
			}
			delete[] casesByAgents;
			files->logFile << "�� ��������:\n\n";
			for (int i = 0; i < 33; ++i) {
				files->logFile << "��: " << casesByBranches[i]->first << " " << casesByBranches[i]->last;
				delete casesByBranches[i];
				files->logFile << "\n�����: " << casesByBranches[i]->first << " " << casesByBranches[i]->last << "\n\n";
			}
			delete[] casesByBranches;
			files->logFile << "�� ��������:\n\n";
			for (int i = 0; i < 33; ++i) {
				files->logFile << "��: " << casesByClients[i]->first << " " << casesByClients[i]->last;
				delete casesByClients[i];
				files->logFile << "\n�����: " << casesByClients[i]->first << " " << casesByClients[i]->last << "\n\n";
			}
			delete[] casesByClients;
			files->logFile << "�� �����:\n\n";
			for (int i = 0; i < 33; ++i) {
				files->logFile << "��: " << casesByTypes[i]->first << " " << casesByTypes[i]->last;
				delete casesByTypes[i];
				files->logFile << "\n�����: " << casesByTypes[i]->first << " " << casesByTypes[i]->last << "\n\n";
			}
			delete[] casesByTypes;
			files->logFile << "������ ���������:\n\n��: " << listOfCases->first << " " << listOfCases->last;
			delete listOfCases;
			files->logFile << "\n�����: " << listOfCases->first << " " << listOfCases->last << "\n\n���� �������� �������.\n\n";
		}
		files->logFile << "���� �������� �� ���������� �������� �������� �������:\n\n�������� ��������:\n\n��: " << listOfNames->first << " " << listOfNames->last;
		delete listOfNames;
		files->logFile << "\n�����: " << listOfNames->first << " " << listOfNames->last << "\n\n������ ��������:\n\n��: " << listOfPlaces->first << " " << listOfPlaces->last;
		delete listOfPlaces;
		files->logFile << "\n�����: " << listOfPlaces->first << " " << listOfPlaces->last << "\n\n��� �������:\n\n��: " << listOfAgents->first << " " << listOfAgents->last;
		delete listOfAgents;
		files->logFile << "\n�����: " << listOfAgents->first << " " << listOfAgents->last << "\n\n��� ��������:\n\n��: " << listOfClients->first << " " << listOfClients->last;
		delete listOfClients;
		files->logFile << "\n�����: " << listOfClients->first << " " << listOfClients->last << "\n\n���� �����������:\n\n��: " << listOfDates->first << " " << listOfDates->last;
		delete listOfDates;
		files->logFile << "\n�����: " << listOfDates->first << " " << listOfDates->last << "\n\n����� �����������:\n\n��: " << listOfTerms->first << " " << listOfTerms->last;
		delete listOfTerms;
		files->logFile << "\n�����: " << listOfTerms->first << " " << listOfTerms->last << "\n\n���� �����������:\n\n��: " << listOfTypes->first << " " << listOfTypes->last;
		delete listOfTypes;
		files->logFile << "\n�����: " << listOfTypes->first << " " << listOfTypes->last << "\n\n��������� �����:\n\n��: " << listOfPrices->first << " " << listOfPrices->last;
		delete listOfPrices;
		files->logFile << "\n�����: " << listOfPrices->first << " " << listOfPrices->last << "\n\n";
		files->logFile << "���� �������� �������.\n\n";
	}
	files->logFile << "��������� ��������� ���� ������.";
	delete files;
}