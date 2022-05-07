#include <iostream>
#include "InsertSort.h"
using namespace std;

																// Deklaracje funkcji sortowania i wyswietlania

void InsertSort::sort(int * ArrayToSort, int size)
{
	int i, j, v;
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
	}
}

void InsertSort::show(int * ArrayToSort, int size)
{
	cout << "Tablica po posortowaniu : \n";
	for (i = 0; i < size; i++)
	{
		cout << ArrayToSort[size] << "\t";
	}
}
