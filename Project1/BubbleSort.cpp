#include <iostream>
#include "BubbleSort.h"
using namespace std;



bool BubbleSort::validate(int j,int size, int i)
{
	this->dominantCounter++;
	if (j < size - i - 1)
	{
		return true;
	}
	return false;
}

void BubbleSort::sort(int *arrayToSort, int size)
{ 


	//this->dominantCounter = 0; //zerowanie gdy nastêpny obiekt ?
	bool flag;
	int i, j;
	for (i = 0; i < size - 1; i++)
	{
		flag = true;
	// Last i elements are already in place
		for (j = 0; validate(j,size,i); j++)
		{
			if (arrayToSort[j] > arrayToSort[j + 1])
			{
				swap(arrayToSort[j], arrayToSort[j + 1]);
				flag = false;
			}
				
		}
		if (flag) {										// Sprawdzenie czy zamiana zosta³a wykonana
		break;										// Je¿eli nie zosta³a wykonana ,przerwanie pracy algorytmu
		}
	}
		
										// Zmienna do wyszukiwania czy zmiana zosta³a wykonana
}

int BubbleSort::printDominantCounter()
{
	return this->dominantCounter;
}
