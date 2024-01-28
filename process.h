#pragma once

#include "Files.h"
#include "GroupedCases.h"

bool checkFiles(Files* files);

void writeToList(std::ifstream& file, List<List<String>>* list);

void writeToNumList(std::ifstream& file, std::ofstream& log, List<int>* list);

void printList(List<List<String>>* list, std::ofstream& file);

void printString(List<String>* list, std::ofstream& file);

bool areEqual(List<String>* a, List<String>* b);

bool areBranchesEqual(Branch* a, Branch* b);

bool isInRegistry(List<GroupedCases<List<String>>>* list, List<String>* val);

bool isBranchInRegistry(List<GroupedCases<Branch>>* list, Branch* val);

int indexInRegistry(List<GroupedCases<List<String>>>* list, List<String>* val);

int indexBranchInRegistry(List<GroupedCases<Branch>>* list, Branch* val);

Item<Case>* newCase(Item<List<String>>* date, Item<List<String>>* term, Item<int>* price, Item<List<String>>* name, Item<List<String>>* place, Item<List<String>>* client, Item<List<String>>* agent, Item<List<String>>* type);

void printCase(Item<Case>* p, std::ofstream& file);

int printCaseCheckBranch(Item<Case>* p, std::ofstream& file, Branch* val);

void process();