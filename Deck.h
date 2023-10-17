#pragma once
#ifndef DECK_H
#define DECK_H
#include "Queue.h"
class Deck : public Queue {
public:
	void Push(int value, int pushFront) final;
	int Pop(int index) final;
};

#endif // !DECK_H
#pragma once
