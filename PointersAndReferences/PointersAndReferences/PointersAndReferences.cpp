#include <iostream>

int main() { //main functions parameters are built into the language
	int i = 10;
	int* p = &i; //pointer
		//p has its own memory address
		/*
		pointers can be reassigned with new values
		can be assigned a null value
		pointers can use arithmetic operations
		*/
	int** ptr = &p; // holds the address of a point

	int& r = i; //reference
		//r shares a memory address with i
		/*
		references cannot be reassigned
		A tied bond, cannot be broken
		cannot be assigned a null value
		references cannot use arithmetic operations
		(&r)++;
		*/
	p = nullptr;
	p = &i;
	(*p)++;
	std::cout << &p << '\t' << &r << '\t' << &i << '\n';
	std::cout << *p << '\t' << r << '\t' << i << '\n';
}