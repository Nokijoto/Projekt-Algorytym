#include "LinearSearch.h"
#include <iostream>

int LinearSearch::search(int searched,int* ArrayToSort, int size)//funkcja szukaj�ca podan� warto�c algorytem liniowym (szukana,tablica,rozmiar)
{
	for (int i = 0; i <= size; i++) // p�tla przechodz�ca po kolei po tablicy
	{
		this->dominantCounter++;// zwi�kszanie dominuj�cej
		if (ArrayToSort[i] == searched) // sprawdzanie czy warto�� jest r�wna poszukiwanej je�li tak to zwraca jej index
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
