#pragma once
#ifndef KEEPER_H
#define KEEPER_H
#include "List.h"
#include "Deck.h"
#include "Stack.h"

class Keeper {
public:
	void ReadFromFile();
	void Show();
	void SaveToFile();
	void PushEl();
	void PopEl();
private:
	List* L = new List;
	Deck* D = new Deck;
	Stack* S = new Stack;

};
#endif // !KEEPER_H
