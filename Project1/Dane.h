#pragma once
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
class Dane
{
	
	void printSort();
	void printBackSort();
	void printRandomSort();
public:
	int arraySize = 10;
	//int* pomArray;
	int* sortedArray;
	int* backSortedArray;
	int* randomArray;
	Dane();
	Dane(int arraySize);
	~Dane();
	void printArr(int * arr);
	void printObject(int flag=0);
};

