#define _CRT_SECURE_NO_WARNINGS
#include"Keeper.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

void Keeper::ReadFromFile() {
	std::ifstream in;
	std::string str;
	L = new List;
	D = new Deck;
	S = new Stack;
	int i = -2;
	in.open("data.txt");
	while (in.peek() != '\n') {
		in >> str;
		L->Push(std::stoi(str), ++i);
	}
	in.get();
	while (in.peek() != '\n') {
		in >> str;
		D->Push(std::stoi(str), 0);
	}
	in.get();
	while (in.peek() != '\n') {
		in >> str;
		S->Push(std::stoi(str));
	}
	in.close();
}

void Keeper::Show() {
	L->Show();
	D->Show();
	S->Show();
}

void Keeper::SaveToFile() {
	std::ofstream out;
	out.open("data.txt");
	L->SaveToFile(out);
	D->SaveToFile(out);
	S->SaveToFile(out);
	out.close();
}

void Keeper::PushEl() {
	std::cout << "Enter value" << std::endl;
	int val;
	std::cin >> val;
	int act;
	int index;
	std::cout << "1) List \n2) Deck \n3) Stack" << std::endl;
	std::cin >> act;
	switch (act)
	{
	case 1:
		std::cout << "Enter index(-1 - push front): ";
		std::cin >> index;
		L->Push(val, index);
		break;
	case 2:
		std::cout << "0 - push back, 1 - push front: ";
		std::cin >> index;
		D->Push(val, index);
		break;
	case 3:
		S->Push(val);
		break;
	}
}

void Keeper::PopEl() {
	int act;
	int index;
	std::cout << "1) List \n2) Deck \n3) Stack" << std::endl;
	std::cin >> act;
	switch (act)
	{
	case 1:
		std::cout << "Enter index: ";
		std::cin >> index;
		std::cout << L->Pop(index);
		std::cout << std::endl;
		break;
	case 2:
		std::cout << "0 - pop back, 1 - pop front: ";
		std::cin >> index;
		std::cout << D->Pop(index);
		std::cout << std::endl;
		break;
	case 3:
		std::cout << S->Pop();
		std::cout << std::endl;
		break;
	}
}