#include "Queue.h"
#include <exception>
#include <iostream>
Queue::Queue() {
	head = nullptr;
	tail = nullptr;
}



Elem* Queue::getHead() {
	return head;
}

void Queue::setHead(Elem* newHead) {
	head = newHead;
}

Elem* Queue::getTail() {
	return tail;
}

void Queue::setTail(Elem* newTail) {
	tail = newTail;
}

void Queue::Show() {
	Elem* curr = this->getHead();
	while (curr != nullptr)
	{
		std::cout << curr->getValue() << ' ';
		curr = curr->getNext();
	}
	std::cout << std::endl;
}

void Queue::SaveToFile(std::ofstream& out) {
	Elem* curr = this->getHead();
	while (curr && curr->getNext())
	{
		out << curr->getValue() << ' ';
		curr = curr->getNext();
	}
	if (curr)
		out << curr->getValue();
	out << '\n';
}