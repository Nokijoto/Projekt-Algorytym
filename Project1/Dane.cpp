#include "Dane.h"


#include <iostream>
using namespace std;
int Dane::objCounter = 1;
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
int Dane::addtoCounter()
{
	return objCounter++;
}
Dane::Dane()
{
	this->sortedArray = nullptr;
	this->backSortedArray = nullptr;
	this->randomArray = nullptr;
	//this->pomArray = nullptr;
}
Dane::Dane(int size)
{
	this->arraySize = size;

	 sortedArray = new int[arraySize];
	 backSortedArray = new int[arraySize];
	 randomArray = new int[arraySize];
	// pomArray = new int[arraySize];
	// for (int i = 0; i < arraySize; i++)
	// {
	//	 /*if (i == 0)
	//	 {
	//		 continue;
	//	 }*/
	//	 sortedArray[i] = 0;
	//	 backSortedArray[i] = 0;
	//	 randomArray[i] = 0;
	////	 pomArray[i] = 0;
	// }
	 
	


	srand(time(NULL));
	for (int i = 0; i < arraySize; i++)
	{
		/*if (i == 0)
		{
			continue;
		}*/
		randomArray[i] = rand() % arraySize + 1;
		sortedArray[i] = i+1;
		backSortedArray[i]= arraySize -i;
	}

	cout << " Utworzono Obiekt Dane o nr : " << addtoCounter() << "\n";
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

void Dane::resetObjCounter()
{
	objCounter = 0;
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
	//	delete [] this->sortedArray;
	//	delete [] this->backSortedArray;
	//	delete [] this->randomArray;
	//
}

