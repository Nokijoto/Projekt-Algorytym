#include <iostream>
#include "BubbleSort.h"
using namespace std;



bool BubbleSort::validate(int j,int size, int i)
{
	this->dominantCounter++; //zwi�kszenie operacji elementarnych
	if (j < size - i - 1) //sprawdzenie warunku
	{
		return true;
	}
	return false;
}

void BubbleSort::sort(int *arrayToSort, int size) // do funkcji przesy�amy tablic� oraz jej rozmiar
{ 

	bool flag; // deklaracja zmiennej do sprawdzania zamiany
	for (int i = 0; i < size - 1; i++)  // 1 p�tla wykonuj�ca si� dla ca�ej tablicy
	{
		flag = false; // ustawienie flagi na brak zamiany
		for (int j = 0; validate(j,size,i); j++)// p�tla por�wnuj�ca dwie zmienne
		{
			if (arrayToSort[j] > arrayToSort[j + 1])// sprawdzanie czy zmienna jest wi�ksza od nast�pnej
			{
				swap(arrayToSort[j], arrayToSort[j + 1]);// funkcja wykonuj�ca zamian� dw�ch warto�ci
				flag =true; // zmiana zosta�a wykonana
			}
		}
		if (!flag) {// Sprawdzenie czy zamiana zosta�a wykonana
		break;// Je�eli nie zosta�a wykonana ,przerwanie pracy algorytmu
		}
	}
}

int BubbleSort::printDominantCounter()
{
	return this->dominantCounter;// zwr�cenie ilosci operacji elementarnych
}

