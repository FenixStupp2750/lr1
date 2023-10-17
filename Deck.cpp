#include "Deck.h"
#include <iostream>

void Deck::Push(int value, int pushFront) {
	Elem* newElem = new Elem(value);
	Elem* head = this->getHead();
	if (pushFront) {
		if (head) {
			head->setPrev(newElem);
			newElem->setNext(head);
			this->setHead(newElem);
		}
		else {
			this->setHead(newElem);
		}
	}
	else {
		Elem* tail = this->getHead();
		while (tail && tail->getNext()) tail = tail->getNext();
		if (tail) {
			tail->setNext(newElem);
			newElem->setPrev(tail);
		}
		else {
			this->setHead(newElem);
		}
	}
}

int Deck::Pop(int popFront) {
	Elem* popElem = this->getHead();
	int value = 0;

	if (!popElem) {
		std::cout << "Error: no elements found" << std::endl;
		return -1;
	}
	if (popElem->getNext()) {
		if (popFront) {
			Elem* newHead = popElem->getNext();
			this->setHead(newHead);
			newHead->setPrev(nullptr);
		}
		else
		{
			while (popElem->getNext()) popElem = popElem->getNext();
			popElem->getPrev()->setNext(nullptr);
		}
	}
	else {
		this->setHead(nullptr);
	}
	value = popElem->getValue();
	delete popElem;
	return value;
}
