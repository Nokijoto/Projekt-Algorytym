#include <iostream>
#include "InsertSort.h"
using namespace std;

																// Deklaracje funkcji sortowania i wyswietlania

int InsertSort::printDominantCouner()
{
	return this->dominantCounter;
}

void InsertSort::sort(int* arrayToSort, int size)
{
	this->dominantCounter = 0;
	int temp, j;                                               
	for (int i = 1; i <= size - 1; i++)
	{
		temp = arrayToSort[i];							// wybranie elementu 
		j = i;							
		while (j > 0)
		{
			this->dominantCounter++;
			if (arrayToSort[j - 1] > temp)            // sprawdzanie czy element poprzedni jest wiêkszy od elementu pobranego do sprawdzenia
			{
				
				arrayToSort[j] = arrayToSort[j - 1];  // wstawianie elementu na poprawne miejsce
				j--;
			}
			else
			{

				break;
			}
		}
		arrayToSort[j] = temp;                      
	}
}

