#include <iostream>
#include "BubbleSort.h"
using namespace std;



void BubbleSort::sort(int *arrayToSort, int size)
{ 
	this->dominantCounter = 0;
	bool flag;										// Zmienna do wyszukiwania czy zmiana zosta�a wykonana

	for (int i=size-1; i>0; i--)					// Pierwsza p�tla wykonuj�ca si� dop�ki zamiany s� wykonywane 
	{	
		flag = true;								
		for (int j = 0; j<=i; j++)						//Operacja dominuj�ca , P�tla umo�liwiaj�ca sprawdzenie wszystkich element�w
		{
			this->dominantCounter++;
			if (arrayToSort[j - 1] > arrayToSort[j])     // Por�wnanie 2 element�w z sob� 
			{
				int temp = arrayToSort[j-1];            //
				arrayToSort[j - 1] = arrayToSort[j];	// Zamiana miejscami element�w
				arrayToSort[j]=temp;					//
				flag = false;							// Zmiana flagi na wykonanie zamiany;
			}
		}
		if (flag) {										// Sprawdzenie czy zamiana zosta�a wykonana
			break;										// Je�eli nie zosta�a wykonana ,przerwanie pracy algorytmu
		}
	}

}

int BubbleSort::printDominantCouner()
{
	return this->dominantCounter;
}
