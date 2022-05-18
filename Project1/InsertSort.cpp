#include <iostream>
#include "InsertSort.h"
using namespace std;
bool InsertSort::validate(int j, int key, int var)
{
	this->dominantCounter++;
	if (j >= 0 && var > key) //por�wnanie poprzedzaj�cych 
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
	for (int i = 1; i < size; i++) // petla wykonuj�ca si� przez ca�� tablic� s�u��ca
		//do pobierania kolejnych danych do posortowania
	{
		int key = arrayToSort[i];// przypisanie warto�ci
		int j = i - 1; // przypisanie zmiennej j warto�ci o jeden mniejsze w celu por�wnianiu 2 element�w
		while (validate(j, key,arrayToSort[j]))//p�tla do por�wnania poprzedzajacych z key
		{
			arrayToSort[j + 1] = arrayToSort[j]; // je�li wi�ksza to przeuwamy o kolejne w prawo
			j = j - 1;// zmniejszanie dop�ki j jest wi�ksze lub r�wne 0
		}
		arrayToSort[j + 1] = key; // wstawianie elementu na poprawne miejsce
	}
	
}

