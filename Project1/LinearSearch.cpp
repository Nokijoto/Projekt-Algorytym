#include "LinearSearch.h"
#include <iostream>

int LinearSearch::search(int searched,int* ArrayToSort, int size)//funkcja szukaj¹ca podan¹ wartoœc algorytem liniowym (szukana,tablica,rozmiar)
{
	for (int i = 0; i <= size; i++) // pêtla przechodz¹ca po kolei po tablicy
	{
		this->dominantCounter++;// zwiêkszanie dominuj¹cej
		if (ArrayToSort[i] == searched) // sprawdzanie czy wartoœæ jest równa poszukiwanej jeœli tak to zwraca jej index
		{
			return i;
		}
	}
	return -1;

}

int LinearSearch::printDominantCounter()//zwraca liczbe zdarzen elementarnych
{
	return this->dominantCounter;
}
