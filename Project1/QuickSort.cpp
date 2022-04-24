#include <iostream>
#include "QuickSort.h"
using namespace std;

														// Deklaracje funkcji sortowania i wyswietlania


void QuickSort::sort(int ArrayToSort[], int x, int y)
{
	int i, j, v, temp;
	i = x;
	j = y;
	v = ArrayToSort[div(x + y, 2).quot];
	do
	{
		while (ArrayToSort[i] < v) i++;
		while (v < ArrayToSort[j]) j--;
		if (i <= j)
		{
			temp = ArrayToSort[i];
			ArrayToSort[i] = ArrayToSort[j];
			ArrayToSort[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);
	if (x < j) sort(ArrayToSort, x, j);
	if (i < y) sort(ArrayToSort, i, y);

}

void QuickSort::show(int ArrayToSort[], int size)
{

}
