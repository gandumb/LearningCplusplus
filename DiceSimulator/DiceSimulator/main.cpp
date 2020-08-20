#include <iostream>
#include "Dice.h"
#include<ctime>

int main() { 
	srand(time(NULL));

	Dice d6;

	std::cout << d6.toss() << "\n";

	Dice d5(30, "Red");

	std::cout << d5.toss() << "\n";

	return 0;
}