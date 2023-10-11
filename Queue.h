#pragma once
#ifndef QUEUE_H
#define QUEUE_H
#include <fstream>
#include"Elem.h"
class Queue {
public:
	Queue();
	virtual ~Queue() {};
	virtual void Push(int value, int index = 0) = 0;
	virtual int Pop(int index = 0) = 0;
	void Show();
	Elem* getHead();
	Elem* getTail();
	void setHead(Elem* newHead);
	void setTail(Elem* newTail);
	void SaveToFile(std::ofstream& out);

private:
	Elem* head;
	Elem* tail;
};


#endif // !QUEUE_H