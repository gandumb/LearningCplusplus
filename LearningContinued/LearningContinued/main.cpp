#include<iostream>
#include "functions.h"
#include<vector>
#include<string>

int globalInt1 = 10; //global variable

//function overloading - function header is the same, variable types are different

//function overiding (overshadowing) - (classes), overides a function with the same name
//uses the same function name, does something different or adds onto the function
//same signature


int main(int argc, char* argv[]) {

	std::cout << add(1.2f, 2.3f) << "\n"; //uses the overloading float add function

	std::cout << globalInt1;

	const int arrSize = 10;
	int arr[arrSize];

	for (unsigned i = 0; i < arrSize; i++)
		arr[i] = i;

	printArr(arrSize, arr);

	return 0;
}