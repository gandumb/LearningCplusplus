#ifndef functions  //Only for visual studio, #pragma once accomplishes this task
#define functions

int add(int a, int b);

float add(float a, float b);

int subtract(int a, int b);

void changeNum(int& numToChange, const int& val);

void printArr(int size, const int* arr);

#endif