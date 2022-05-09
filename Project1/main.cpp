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
	BubbleSort BubbleSortObject;
	InsertSort InsertSortObject;
	MergeSort MergeSortObject;

	LinearSearch LinearSearchObject;
	BinarySearch BinarySearchObject;

	int arraySize = 10;
	int dataSize = 1;
	int search = -1;
	int howMuch;

		// Tworzenie obiektów
	cout << "(przelicznik N * 10) gdzie N jest podane przez uzytkownika\n";
	cout <<"Podaj rozmiar 1 parti danych\n";
	cin >> dataSize;
	cout << "Podaj iloœæ parti danych\n";
	cin >> howMuch;

	Dane** Data = new Dane * [howMuch];
	for (int i = 0; i <howMuch; i++)
	{
		Data[i] = new Dane(dataSize*arraySize);
		Sleep(100);
	}
	for (int i = 0; i < howMuch; i++)
	{
		Data[i]->printObject();
		cout << "==================================================================\n";
	}
	//Data[0].arraySize;
	
	//LinearSearchObject.printDominantCouner();
	
	//Dane Data1(dataSize * arraySize);
	/*Dane Data2(dataSize * arraySize);
	Dane Data3(dataSize * arraySize);
	Dane Data4(dataSize * arraySize);
	Dane Data5(dataSize * arraySize);
	Dane Data6(dataSize * arraySize);
	Dane Data7(dataSize * arraySize);
	Dane Data8(dataSize * arraySize);
	Dane Data9(dataSize * arraySize);
	Dane Data10(dataSize * arraySize);*/

								
	//Dane Data1(dataSize*arraySize);
	//cout << "Podaj rozmiar 2 parti danych\n";
	//cin >> dataSize;
	//Sleep(100);

	//Dane Data2(dataSize * arraySize);
	//////cout << "Podaj rozmiar 3 parti danych\n";
	//////cin >> dataSize;
	//////Sleep(100);
	//////Dane Data3(dataSize * arraySize);
	//												//Sortowanie
	
	//												//Wyszukiwanie

	/*Data1.printObject(1);
	BubbleSortObject.sort(Data1.backSortedArray,Data1.arraySize);
	cout << "\n";
	cout << " Wykonano " << BubbleSortObject.printDominantCouner() << " dominujacych operacji\n";
	cout << "\n";*/
	/*BubbleSortObject.sort(Data2.backSortedArray,Data2.arraySize);
	cout << "\n";
	cout << " Wykonano " << BubbleSortObject.printDominantCouner() << " dominujacych operacji\n";
	cout << "\n";
	BubbleSortObject.sort(Data3.backSortedArray,Data3.arraySize);
	cout << "\n";
	cout << " Wykonano " << BubbleSortObject.printDominantCouner() << " dominujacych operacji\n";
	cout << "\n";
	BubbleSortObject.sort(Data4.backSortedArray,Data4.arraySize);
	cout << "\n";
	cout << " Wykonano " << BubbleSortObject.printDominantCouner() << " dominujacych operacji\n";
	cout << "\n";
	BubbleSortObject.sort(Data5.backSortedArray,Data5.arraySize);
	cout << "\n";
	cout << " Wykonano " << BubbleSortObject.printDominantCouner() << " dominujacych operacji\n";
	cout << "\n";
	BubbleSortObject.sort(Data6.backSortedArray, Data6.arraySize);
	cout << "\n";
	cout << " Wykonano " << BubbleSortObject.printDominantCouner() << " dominujacych operacji\n";
	cout << "\n";
	BubbleSortObject.sort(Data7.backSortedArray, Data7.arraySize);
	cout << "\n";
	cout << " Wykonano " << BubbleSortObject.printDominantCouner() << " dominujacych operacji\n";
	cout << "\n";
	BubbleSortObject.sort(Data8.backSortedArray, Data8.arraySize);
	cout << "\n";
	cout << " Wykonano " << BubbleSortObject.printDominantCouner() << " dominujacych operacji\n";
	cout << "\n";
	BubbleSortObject.sort(Data9.backSortedArray, Data9.arraySize);
	cout << "\n";
	cout << " Wykonano " << BubbleSortObject.printDominantCouner() << " dominujacych operacji\n";
	cout << "\n";
	BubbleSortObject.sort(Data10.backSortedArray, Data10.arraySize);
	cout << "\n";
	cout << " Wykonano " << BubbleSortObject.printDominantCouner() << " dominujacych operacji\n";
	cout << "\n";

*/



	////  Program 
	//cout << "Sortowanie bombelkowe dla tablicy wypelnionej losowo\n";
	//cout << "Przed: \n";
	//Data1.printObject(3);
	//BubbleSortObject.sort(Data1.randomArray,Data1.arraySize);
	//cout << "Po: \n";
	//Data1.printObject(3);
	//cout << "\n";
	//cout << " Wykonano " << BubbleSortObject.printDominantCouner() << " dominujacych operacji\n";
	//cout << "\n";




	//cout << "Sortowanie przez wstawianie dla tablicy wypelnionej losowo\n";
	//cout << "Przed: \n";
	//Data2.printObject(3);
	//InsertSortObject.sort(Data2.randomArray, Data2.arraySize);
	//cout << "Po: \n";
	//Data2.printObject(3);
	//cout << "\n";
	//cout << " Wykonano " << InsertSortObject.printDominantCouner() << " dominujacych operacji\n";
	//cout << "\n";




	// Merge Nie dziala ?


	//cout << "Sortowanie przez wstawianie dla tablicy wypelnionej losowo\n";
	//cout << "Przed: \n";
	//Data3.printObject(3);
	//MergeSortObject.sort(Data3.randomArray, 0, Data3.arraySize-1);
	//cout << "Po: \n";
	//Data3.printObject(3);
	//cout << "\n";











	// Wyszukiwanie gotowe









	//cout << "Podaj poszukiwana wartosc \n";
	//cin >> search;
	//cout << " Wyszukiwanie liniowe dla posortowanej tablicy \n";
	//cout << "Podglad\n";
	//Data1.printObject(1);
	//cout << "Znaleziono poszukiwana wartosc na indexie: " << LinearSearchObject.search(search, Data1.sortedArray, Data1.arraySize);
	//cout<<"\nLiczba operacji dominujacych dla tablicy o rozmiarze |\t" << Data1.arraySize << "\t| wynosi :\t"<< LinearSearchObject.printDominantCouner() << "\n";
	//cout << "\n";

	//cout << "Podaj poszukiwana wartosc \n";
	//search = -1;
	//cin >> search;
	//cout << " Wyszukiwanie binarnej dla posortowanej tablicy \n";
	//cout << "Podglad\n";
	////Data2.printObject(1);
	//cout << "Znaleziono poszukiwana wartosc na indexie: " << BinarySearchObject.search(Data2.sortedArray, search, 0, Data2.arraySize);
	//cout<< "\nLiczba operacji dominujacych dla tablicy o rozmiarze |\t" << Data2.arraySize << "\t| wynosi :\t" << BinarySearchObject.printDominantCouner() << "\n";


}