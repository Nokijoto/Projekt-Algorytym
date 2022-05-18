#include <iostream>
#include "InsertSort.h"
using namespace std;
bool InsertSort::validate(int j, int key, int var)
{
	this->dominantCounter++;
	if (j >= 0 && var > key) //porównanie poprzedzaj¹cych 
	{

		return true;
	}
	return false;
}

int InsertSort::printDominantCounter()
{
	return this->dominantCounter;
}

void InsertSort::sort(int* arrayToSort, int size)
{
	for (int i = 1; i < size; i++) // petla wykonuj¹ca siê przez ca³¹ tablicê s³u¿¹ca
		//do pobierania kolejnych danych do posortowania
	{
		int key = arrayToSort[i];// przypisanie wartoœci
		int j = i - 1; // przypisanie zmiennej j wartoœci o jeden mniejsze w celu porównianiu 2 elementów
		while (validate(j, key,arrayToSort[j]))//pêtla do porównania poprzedzajacych z key
		{
			arrayToSort[j + 1] = arrayToSort[j]; // jeœli wiêksza to przeuwamy o kolejne w prawo
			j = j - 1;// zmniejszanie dopóki j jest wiêksze lub równe 0
		}
		arrayToSort[j + 1] = key; // wstawianie elementu na poprawne miejsce
	}
	
}

