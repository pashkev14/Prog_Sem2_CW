#pragma once

/*
	 лассы Item и List - элемент списка и сам список (технически, формул€р - класс, управл€ющий списком).
	—оздание нескольких классов дл€ реализации списков под каждый тип - плоха€ иде€, поэтому классы под элемент списка и сам список шаблонизированы.
	¬се описание содержитс€ внутри одного файла - по правилу описание шаблонов нельз€ раздел€ть на объ€вление и определение в разные файлы.
	¬се методы списка изначально построены так, что не завис€т от принимамемого типа.
*/

template<typename T>
struct Item {

	T* val;
	Item<T>* next;

	Item() {
		this->val = new T;
		this->next = nullptr;
	}

	~Item() {
		delete this->val;
	}

};

template<typename T>
struct List {

	Item<T>* first;
	Item<T>* last;

	List() {
		this->first = nullptr;
		this->last = nullptr;
	}

	~List() {
		this->deleteList();
	}

	bool isEmpty() {
		return (this->first == nullptr);
	}

	unsigned int getSize() {
		unsigned int size = 0;
		Item<T>* p = this->first;
		while (p != nullptr) {
			++size;
			p = p->next;
		}
		return size;
	}

	Item<T>* getItem(const int index) {
		if (index < 0 || index >= this->getSize()) return nullptr;
		unsigned int pos = 0;
		Item<T>* p = this->first;
		while (pos != index) {
			++pos;
			p = p->next;
		}
		return p;
	}

	void appendItem(Item<T>* val) {
		if (this->isEmpty()) {
			this->first = val;
			this->last = val;
		}
		else {
			this->last->next = val;
			this->last = val;
		}
	}

	void deleteItem(const int index) {
		if (this->isEmpty()) return;
		int size = this->getSize();
		if (index < 0 || index >= size) return;
		if (size == 1) {
			this->last = nullptr;
			delete this->first;
			this->first = nullptr;
		}
		else {
			Item<T>* toDel = this->getItem(index);
			if (index == 0) {
				this->first = toDel->next;
				delete toDel;
			}
			else if (index == size - 1) {
				this->last = this->getItem(index - 1);
				this->last->next = nullptr;
				delete toDel;
			}
			else {
				Item<T>* prev = this->getItem(index - 1);
				prev->next = this->getItem(index + 1);
				delete toDel;
				prev = nullptr;
			}
			toDel = nullptr;
			if (this->getSize() == 1) {
				this->last = this->first;
			}
		}
	}

	void deleteList() {
		unsigned int curIndex = this->getSize() - 1;
		while (this->first != nullptr) {
			this->deleteItem(curIndex);
			--curIndex;
		}
	}

};