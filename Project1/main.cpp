#include <iostream>
#include "BubbleSort.h"
#include "InsertSort.h"
#include "QuickSort.h"
#include "Dane.h"


using namespace std;

void printArrMain(int * arr, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n";
}

int main()
{
	int arraySize = 10;
	Dane nowe(arraySize);
	BubbleSort objekt;







	//BubbleSort ok;
	
	//cout << " TEST " << endl;
	//printArrMain(nowe.backSortedArray, arraySize);


	// Wyœwietlanie testowe tablic
	//cout << "BackSorted:\n"; 
	//nowe.printArr(nowe.backSortedArray, arraySize);
	//cout << "Sorted:\n";
	//nowe.printArr(nowe.sortedArray, arraySize);
	//cout << "Random:\n";
	//nowe.printArr(nowe.randomArray, arraySize);















	//int n = 10;
	///* Struktury danych do sortowañ */
	//Dane* DataToBubbleSort;
	//Dane DataToQuickSort;
	//Dane DataToInsertSort;

	///* Obiekty s³u¿¹ce do sortowañ */
	//BubbleSort BS;
	//QuickSort	QS;
	//InsertSort	IS;

	/* Obiekty do wyszukiwañ */
	//BinarySearch BinSearch;
	//LinearSearch LinSearch;





}