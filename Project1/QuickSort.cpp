#include <iostream>
#include "QuickSort.h"
using namespace std;

														// Deklaracje funkcji sortowania i wyswietlania


void QuickSort::sort(int * ArrayToSort, int left, int right)
{
	int i, j, pivot, temp;
	i = left;
	j = right;
	pivot = ArrayToSort[div(left + right, 2).quot];
	do
	{
		while (ArrayToSort[i] < pivot) i++;
		while (pivot < ArrayToSort[j]) j--;
		if (i <= j)
		{
			temp = ArrayToSort[i];
			ArrayToSort[i] = ArrayToSort[j];
			ArrayToSort[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);
	if (left < j) sort(ArrayToSort, left, j);
	if (i < right) sort(ArrayToSort, i, right);

}

void QuickSort::show(int * ArrayToSort, int size)
{

}
