#include "Dane.h"
#include <iostream>
using namespace std;
Dane::Dane()
{
	this->sortedArray = nullptr;
	this->backSortedArray = nullptr;
	this->randomArray = nullptr;
}
Dane::Dane(int size)
{
	this->arraySize = size;
	 sortedArray = new int[arraySize];
	 arraySize;
	 backSortedArray = new int[arraySize];
	 randomArray = new int[arraySize];
	 for (int i = 0; i < arraySize; i++)
	 {
		 sortedArray[i] = 0;
		 backSortedArray[i] = 0;
		 randomArray[i] = 0;
	 }
	 
	 //cout << "Sorted:\n";
	 //printArr(sortedArray, size);
	 //cout << "BackSorted:\n";
	 //printArr(backSortedArray, size);
	 //cout << "Random:\n";
	 //printArr(randomArray, size);


	srand(time(NULL));
	for (int i = 0; i < arraySize; i++)
	{
		randomArray[i] = rand() % 10 + 1;
		sortedArray[i] = i+1;
		backSortedArray[i]= arraySize -i;
	}

	/*cout << "Sorted:\n";
	printArr(sortedArray, size);
	cout << "BackSorted:\n";
	printArr(backSortedArray, size);
	cout << "Random:\n";
	printArr(randomArray, size);*/

}

void Dane::printArr(int arr[], int arraySize)
{
	for (int  i = 0; i < arraySize; i++)
	{
		cout << arr[i] << "\t";
	}
	cout <<"\n";
}

Dane::~Dane()
{
	delete []sortedArray;
	delete []backSortedArray;
	delete []randomArray;
}
