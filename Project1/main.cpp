#include <iostream>
#include "BubbleSort.h"
#include "InsertSort.h"
#include "MergeSort.h"
#include "Dane.h"
#include "LinearSearch.h"
#include "BinarySearch.h"
#include <Windows.h>
#include "XLS.h"


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
	int dataSize = 1;
	int search = -1;

	// Tworzenie obiektów
	cout << "(przelicznik N * 10) gdzie N jest podane przez uzytkownika\n";
	cout <<"Podaj rozmiar 1 parti danych\n";
	cin >> dataSize;
											
	Dane Data1(dataSize*arraySize);
	cout << "Podaj rozmiar 2 parti danych\n";
	cin >> dataSize;
	Sleep(1000);

	Dane Data2(dataSize * arraySize);
	cout << "Podaj rozmiar 3 parti danych\n";
	cin >> dataSize;
	Sleep(1000);
	Dane Data3(dataSize * arraySize);
													//Sortowanie
	BubbleSort BubbleSortObject;
	InsertSort InsertSortObject;
	MergeSort MergeSortObject;
													//Wyszukiwanie
	LinearSearch LinearSearchObject;
	BinarySearch BinarySearchObject;

	Data2.arraySize;
	Data1.arraySize;
	dataSize;











	//  Program 
	cout << "Sortowanie bombelkowe dla tablicy wypelnionej losowo\n";
	cout << "Przed: \n";
	Data1.printObject(3);
	BubbleSortObject.sort(Data1.randomArray,Data1.arraySize);
	cout << "Po: \n";
	Data1.printObject(3);
	cout << "\n";

	cout << "Sortowanie przez wstawianie dla tablicy wypelnionej losowo\n";
	cout << "Przed: \n";
	Data2.printObject(3);
	InsertSortObject.sort(Data2.randomArray, Data2.arraySize);
	cout << "Po: \n";
	Data2.printObject(3);
	cout << "\n";




	// Merge Nie dziala ?


	cout << "Sortowanie przez wstawianie dla tablicy wypelnionej losowo\n";
	cout << "Przed: \n";
	Data3.printObject(3);
	MergeSortObject.sort(Data3.randomArray, 0, Data3.arraySize-1);
	cout << "Po: \n";
	Data3.printObject(3);
	cout << "\n";

	Data1.sortedArray;

	cout << "Podaj poszukiwana wartosc \n";
	cin >> search;
	cout << " Wyszukiwanie liniowe dla posortowanej tablicy \n";
	cout << "Podglad\n";
	Data1.printObject(1);
	cout <<"Znaleziono poszukiwana wartosc na indexie: "<<LinearSearchObject.search(search, Data1.sortedArray, Data1.arraySize) << "\nLiczba operacji dominujacych dla tablicy o rozmiarze |\t" << Data1.arraySize << "\t| wynosi :\t" << LinearSearchObject.printDominantCouner() << "\n";
	cout << "\n";
	cout << "Podaj poszukiwana wartosc \n";
	search = -1;
	cin >> search;
	cout << " Wyszukiwanie binarnej dla posortowanej tablicy \n";
	cout << "Podglad\n";
	Data2.printObject(1);
	cout << "Znaleziono poszukiwana wartosc na indexie: " << BinarySearchObject.search(Data2.sortedArray,search,0, Data2.arraySize) << "\nLiczba operacji dominujacych dla tablicy o rozmiarze |\t" << Data2.arraySize << "\t| wynosi :\t" << BinarySearchObject.printDominantCouner() << "\n";


}