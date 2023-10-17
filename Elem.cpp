#include "Elem.h"

Elem::Elem() {
	value = 0;
	next = nullptr;
	prev = nullptr;
}

Elem::Elem(int value, Elem* next, Elem* prev) {
	this->value = value;
	this->next = next;
	this->prev = prev;
}

int Elem::getValue() {
	return this->value;
}

Elem* Elem::getNext() {
	return this->next;
}

Elem* Elem::getPrev() {
	return this->prev;
}

void Elem::setValue(int value) {
	this->value = value;
}
void Elem::setNext(Elem* next) {
	this->next = next;
}
void Elem::setPrev(Elem* prev) {
	this->prev = prev;
}