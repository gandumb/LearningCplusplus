#include "functions.h"
#include<iostream>

int add(int a, int b) {
	return a + b;
}

float add(float a, float b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b; 
}

void printArr(int size, const int* arr) { //you can also demonstrate an array as int arr[]
	for (unsigned i = 0; i < size; i++)
		std::cout << arr[i] << " ";
}

void changeNum(int& numToChange, const int& val) { //this optimizes the program
	numToChange = val; //by making both vars a reference, they do not copy and values
	//also, by declaring the one not changing as a constant, this optimizes the program
}//references dont copy data, they just refer to its spot in memory

/*
const float median(const int& a, const int& b, const int& c){
	return (a+b+c) / 3.f
}

A value is being returned which is not being changed so it can be a const

Basically, if a parameter is not being changed, make it a const reference




lololol scratch that stuff about it being faster, its faster for larger objects

but ints and floats are so small, that its faster to copy than to pass by reference 
usually

also, you should not return references, this leaves dangling pointers

pass in class types by reference, and value types by value

never make a function like int& addInt, the reference is evil

the only exception is if the reference's lifetime is managed by a class interface
*/