#pragma once
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
class Dane
{
	int arraySize = 0;
public:
	int* sortedArray;
	int* backSortedArray;
	int* randomArray;
	Dane();
	Dane(int arraySize);
	~Dane();
	void printArr(int arr[],int size);
};

