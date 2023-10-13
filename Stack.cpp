#include "Stack.h"

void Stack::Push(int value, int index) {
	Elem* curr = this->getHead();
	Elem* newElem = new Elem(value);
	if (curr) {
		while (curr->getNext()) curr = curr->getNext();
		curr->setNext(newElem);
		newElem->setPrev(curr);
	}
	else {
		this->setHead(newElem);
	}
}

int Stack::Pop(int index) {
	Elem* curr = this->getHead();
	Elem* popElem = nullptr;
	int value = 0;
	if (curr) {
		if (curr->getNext()) {
			while (curr->getNext()) curr = curr->getNext();
			popElem = curr;
			curr = curr->getPrev();
			curr->setNext(nullptr);
		}
		else {
			popElem = curr;
			this->setHead(nullptr);
		}
	}
	value = popElem->getValue();
	delete popElem;
	return value;
}