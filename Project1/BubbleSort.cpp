#include <iostream>
#include "BubbleSort.h"
using namespace std;



bool BubbleSort::validate(int j,int size, int i)
{
	this->dominantCounter++; //zwiêkszenie operacji elementarnych
	if (j < size - i - 1) //sprawdzenie warunku
	{
		return true;
	}
	return false;
}

void BubbleSort::sort(int *arrayToSort, int size) // do funkcji przesy³amy tablicê oraz jej rozmiar
{ 

	bool flag; // deklaracja zmiennej do sprawdzania zamiany
	for (int i = 0; i < size - 1; i++)  // 1 pêtla wykonuj¹ca siê dla ca³ej tablicy
	{
		flag = false; // ustawienie flagi na brak zamiany
		for (int j = 0; validate(j,size,i); j++)// pêtla porównuj¹ca dwie zmienne
		{
			if (arrayToSort[j] > arrayToSort[j + 1])// sprawdzanie czy zmienna jest wiêksza od nastêpnej
			{
				swap(arrayToSort[j], arrayToSort[j + 1]);// funkcja wykonuj¹ca zamianê dwóch wartoœci
				flag =true; // zmiana zosta³a wykonana
			}
		}
		if (!flag) {// Sprawdzenie czy zamiana zosta³a wykonana
		break;// Je¿eli nie zosta³a wykonana ,przerwanie pracy algorytmu
		}
	}
}

int BubbleSort::printDominantCounter()
{
	return this->dominantCounter;// zwrócenie ilosci operacji elementarnych
}

