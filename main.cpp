#include <iostream>
#include <fstream>
#include "Stack.h"
#include "Deck.h"
#include "List.h"
#include "Keeper.h"
int main() {

	Keeper* K = new Keeper;
	int act;
	while (1) {
		std::cout << "1) Add El\n2) Pop El\n3) Show\n4) Save to file\n5) Write from file\n";
		std::cin >> act;
		switch (act)
		{
		case 1:
			K->PushEl();
			break;
		case 2:
			K->PopEl();
			break;
		case 3:
			K->Show();
			break;
		case 4:
			K->SaveToFile();
			break;
		case 5:
			K->ReadFromFile();
			break;
		}
	}
	return 0;
}