#include <iostream>
#include "BubbleSort.h"
using namespace std;

											// Deklaracje funkcji sortowania i wyswietlania

void BubbleSort::sort(int *arrayToSort, int size)
{ 
	bool flag;

	for (int i=size-1; i>0; i--)
	{	
		flag = true;
		for (int j = 0; j<=i; j++)
		{
			dominantCounter++;
			if (arrayToSort[j - 1] > arrayToSort[j])
			{
				int temp = arrayToSort[j-1];
				arrayToSort[j - 1] = arrayToSort[j];
				arrayToSort[j]=temp;
				flag = false;
			}
		}
		if (flag) {
			break;
		}
	}

























	

		////petla dostepu do kazdego elementu tablicy
		//for (int step = 0; step < size - 1; ++step) {

		//	// petla porownujaca 
		//	for (int i = 0; i < size - step - 1; ++i) {

		//		// porownanie elementow
		//		if (array[i] > array[i + 1]) {

		//			// zmiana nastepuje gdy elementy nie sa w poprawnej kolejnosc
		//			int temp = array[i];
		//			array[i] = array[i + 1];
		//			array[i + 1] = temp;
		//		}
		//	}
		//}
	









	/*
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
	} while (zmiana != 0);*/
}

