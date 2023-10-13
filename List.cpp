#include "List.h"
#include <exception>
#include <iostream>
Elem* List::operator[](int index) {
	if (index < 0) return nullptr;
	Elem* curr = this->getHead();
	int i = 0;
	while (i++ < index && curr != nullptr)
	{
		curr = curr->getNext();
	}
	return curr;
}

void List::Push(int value, int index) {
	Elem* head = this->getHead();
	if (!head) {
		Elem* newElem = new Elem(value);
		this->setHead(newElem);
		this->setTail(newElem);
		return;
	}
	else if (index == -1) {
		Elem* newElem = new Elem(value, this->getHead(), nullptr);
		this->getHead()->setPrev(newElem);
		this->setHead(newElem);
		return;
	}
	else {
		Elem* leftElem = this->operator[](index);
		Elem* rightElem = this->operator[](index + 1);
		if (leftElem && rightElem) {
			Elem* newElem = new Elem(value, rightElem, leftElem);
			leftElem->setNext(newElem);
			rightElem->setPrev(newElem);
			return;
		}
		if (leftElem) {
			Elem* newElem = new Elem(value, nullptr, leftElem);
			leftElem->setNext(newElem);
			this->setTail(newElem);
			return;
		}
		if (rightElem) {
			Elem* newElem = new Elem(value, rightElem, nullptr);
			rightElem->setPrev(newElem);
			this->setHead(newElem);
			return;
		}
		std::cout << "Error: wrong index";
	}

}

int List::Pop(int index) {
	Elem* popElem = this->operator[](index);
	Elem* leftElem = this->operator[](index - 1);
	Elem* rightElem = this->operator[](index + 1);


	if (popElem) {
		if (leftElem && rightElem) {
			leftElem->setNext(rightElem);
			rightElem->setPrev(leftElem);
		}
		else {
			if (leftElem) {
				leftElem->setNext(nullptr);
			}
			else if (rightElem) {
				rightElem->setPrev(nullptr);
				this->setHead(rightElem);
			}
			else {
				this->setHead(nullptr);
			}

		}
		return popElem->getValue();
		delete popElem;
	}
	else {
		std::cout << "Error: wrong index";
		return 1;
	}
}