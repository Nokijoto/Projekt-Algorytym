#include <iostream>
#include "InsertSort.h"
using namespace std;

																// Deklaracje funkcji sortowania i wyswietlania

bool InsertSort::validate(int j, int key, int var)
{
	this->dominantCounter++;
	if (j >= 0 && var > key)
	{

		return true;
	}
	return false;
}

int InsertSort::printDominantCounter()
{
	return this->dominantCounter;
}

void InsertSort::sort(int* arr, int n)
{


	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (validate(j, key,arr[j]))/*j >= 0 && arr[j] > key*/
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
	
}

