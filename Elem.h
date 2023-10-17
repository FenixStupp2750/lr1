#pragma once
#ifndef ELEM_H
#define ELEM_H

class Elem {
public:
	Elem();
	Elem(int value = 0, Elem* next = nullptr, Elem* prev = nullptr);
	int getValue();
	Elem* getNext();
	Elem* getPrev();
	void setNext(Elem* next);
	void setPrev(Elem* prev);
	void setValue(int value);
private:
	int value;
	Elem* next;
	Elem* prev;
};

#endif // !ELEM_H
#pragma once
