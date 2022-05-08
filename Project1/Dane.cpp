#include "Dane.h"
#include <iostream>
using namespace std;
void Dane::printSort()
{
	cout << "Tablica Posortowana 1-N" << endl;
	for (int i = 0; i < arraySize; i++)
	{
		cout << this->sortedArray[i] << "\t";
	}
	cout << "\n";
}
void Dane::printBackSort()
{
	cout << "Tablica Posortowana od N-1" << endl;
	for (int i = 0; i < arraySize; i++)
	{
		cout << this->backSortedArray[i] << "\t";
	}
	cout << "\n";
}

void Dane::printRandomSort()
{
	cout << "Tablica wygenerowana losowo" << endl;
	for (int i = 0; i < arraySize; i++)
	{
		cout << this->randomArray[i] << "\t";
	}
	cout << "\n";
}
Dane::Dane()
{
	this->sortedArray = nullptr;
	this->backSortedArray = nullptr;
	this->randomArray = nullptr;
	this->pomArray = nullptr;
}
Dane::Dane(int size)
{
	this->arraySize = size;
	 sortedArray = new int[arraySize];
	 backSortedArray = new int[arraySize];
	 randomArray = new int[arraySize];
	 pomArray = new int[arraySize];
	 for (int i = 0; i < arraySize; i++)
	 {
		 sortedArray[i] = 0;
		 backSortedArray[i] = 0;
		 randomArray[i] = 0;
		 pomArray[i] = 0;
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
		randomArray[i] = rand() % arraySize + 1;
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

void Dane::printObject(int flag)
{
	switch (flag)
	{
	case 1: printSort(); break;
	case 2:	printBackSort(); break;
	case 3:	printRandomSort(); break;
	default: printSort(); printBackSort(); printRandomSort(); 
	}

}

void Dane::printArr(int * arr)
{
	for (int  i = 0; i < this->arraySize; i++)
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
