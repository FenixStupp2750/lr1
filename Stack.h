#pragma once
#ifndef STACK_H
#define STACK_H
#include "Queue.h"

class Stack : public Queue {
public:
	void Push(int value, int index = 0) final;
	int Pop(int index = 0) final;

};
#endif // !STACK_H
