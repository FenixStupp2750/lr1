#pragma once
#ifndef LIST_H
#define LIST_H
#include "Queue.h"


class List : public Queue {
public:
	void Push(int value, int index = 0) final;
	int Pop(int index) final;
	Elem* operator [](int i);
};

#endif // !LIST_H#pragma once
