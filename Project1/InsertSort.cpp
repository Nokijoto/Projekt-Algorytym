#include <iostream>
#include "InsertSort.h"
using namespace std;

																// Deklaracje funkcji sortowania i wyswietlania

void InsertSort::sort(int * arrayToSort, int size)
{
	int temp,j;
	for (int i = 1; i <=size-1; i++)
	{
		temp = arrayToSort[i];
		j = i;
		while (j > 0)
		{
			if (arrayToSort[j - 1] > temp)
			{
				dominantCounter++;
				arrayToSort[j] = arrayToSort[j - 1];
				j--;

			}
			else
			{
				break;
			}
			
		}
		arrayToSort[j] = temp;
	}



	/*int i, j, v;
	for (i = 1; i < size; i++)
	{
		j = i;
		v = ArrayToSort[i];
		while ((j > 0) && (ArrayToSort[j - 1] > v))
		{
			ArrayToSort[j] = ArrayToSort[j - 1];
			j--;
		}
		ArrayToSort[j] = v;
	}*/
}

