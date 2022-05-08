#include <iostream>
#include "BubbleSort.h"
using namespace std;



void BubbleSort::sort(int *arrayToSort, int size)
{ 
	this->dominantCounter = 0;
	bool flag;										// Zmienna do wyszukiwania czy zmiana zosta³a wykonana

	for (int i=size-1; i>0; i--)					// Pierwsza pêtla wykonuj¹ca siê dopóki zamiany s¹ wykonywane 
	{	
		flag = true;								
		for (int j = 0; j<=i; j++)						//Operacja dominuj¹ca , Pêtla umo¿liwiaj¹ca sprawdzenie wszystkich elementów
		{
			this->dominantCounter++;
			if (arrayToSort[j - 1] > arrayToSort[j])     // Porównanie 2 elementów z sob¹ 
			{
				int temp = arrayToSort[j-1];            //
				arrayToSort[j - 1] = arrayToSort[j];	// Zamiana miejscami elementów
				arrayToSort[j]=temp;					//
				flag = false;							// Zmiana flagi na wykonanie zamiany;
			}
		}
		if (flag) {										// Sprawdzenie czy zamiana zosta³a wykonana
			break;										// Je¿eli nie zosta³a wykonana ,przerwanie pracy algorytmu
		}
	}

}

int BubbleSort::printDominantCouner()
{
	return this->dominantCounter;
}
