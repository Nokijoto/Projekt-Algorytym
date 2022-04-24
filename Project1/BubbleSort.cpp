#include <iostream>
#include "BubbleSort.h"
using namespace std;

											// Deklaracje funkcji sortowania i wyswietlania


void BubbleSort::sort(int ArrayToSort[], int size)
{
	do
	{
		zmiana = 0;
		i = size - 1;
		do
		{
			i--;
			if (ArrayToSort[i + 1] < ArrayToSort[i])
			{
				temp = ArrayToSort[i];
				ArrayToSort[i] = ArrayToSort[i + 1];
				ArrayToSort[i + 1] = temp;
				zmiana = 1;
			}
		} while (i != 0);
	} while (zmiana != 0);
}

void BubbleSort::show(int ArrayToSort[], int size)
{
	cout << "Tablica po posortowaniu : \n";
	for (i = 0; i < size; i++)
	{
		cout << ArrayToSort[size] <<"\t";
	}
}
