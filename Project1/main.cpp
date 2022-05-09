#include <iostream>
#include "BubbleSort.h"`
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
	int howMuch;

	// Tworzenie obiektów
	cout << "(przelicznik N * 10) gdzie N jest podane przez uzytkownika\n";
	cout <<"Podaj rozmiar 1 parti danych\n";
	//cin >> dataSize;
	//cout << "Podaj iloœæ parti danych\n";
	cin >> howMuch;

	// Tworzenie 3 tablic obiektów dla 3 ró¿nych sortowañ

	Dane** DataBubble = new Dane * [howMuch];
	Dane** DataInsert = new Dane * [howMuch];
	Dane** DataMerge = new Dane * [howMuch];

	// Tworzenie 3 tablic obiektów dla ró¿nych typów danych

	BubbleSort** BubbleSortObjectSorted = new BubbleSort*[howMuch];
	BubbleSort** BubbleSortObjectBack = new BubbleSort*[howMuch];
	BubbleSort** BubbleSortObjectRandom = new BubbleSort*[howMuch];

	// Tworzenie 3 tablic obiektów dla ró¿nych typów danych

	InsertSort** InsertSortObjectSorted = new InsertSort*[howMuch];
	InsertSort** InsertSortObjectBack = new InsertSort*[howMuch];
	InsertSort** InsertSortObjectRandom = new InsertSort*[howMuch];

	// Tworzenie 3 tablic obiektów dla ró¿nych typów danych

	MergeSort** MergeSortObjectSorted = new MergeSort*[howMuch];
	MergeSort** MergeSortObjectBack = new MergeSort*[howMuch];
	MergeSort** MergeSortObjectRandom = new MergeSort*[howMuch];

	// Tworzenie obiektów Sortowañ

	LinearSearch* LinearSearchObject;
	BinarySearch* BinarySearchObject;


	for (int i = 0; i <howMuch; i++)
	{
		DataBubble[i] = new Dane(i*arraySize);
		DataInsert[i] = new Dane(i*arraySize);
		DataMerge[i] = new Dane(i*arraySize);


		BubbleSortObjectSorted[i] = new BubbleSort;
		BubbleSortObjectBack[i] = new BubbleSort;
		BubbleSortObjectRandom[i] = new BubbleSort;


		InsertSortObjectSorted[i] = new InsertSort;
		InsertSortObjectBack[i] = new InsertSort;
		InsertSortObjectRandom[i] = new InsertSort;


		MergeSortObjectSorted[i] = new MergeSort;
		MergeSortObjectBack[i] = new MergeSort;
		MergeSortObjectRandom[i] = new MergeSort;
		Sleep(100);
	}

	for (int  i = 0; i < howMuch; i++)
	{   /// <summary>
		///  Tutaj pasuje dodaæ Wypisanie dominuj¹cych
		/// </summary>
		/// <returns></returns>
		/// 
		cout << "==================================================================\n";
		cout << "\n\n\n\n\n\n\n";
		cout << "==================================================================\n";
		BubbleSortObjectSorted[i]->sort(DataBubble[i]->sortedArray, DataBubble[i]->arraySize);
		cout << "Ilosc operacji dominujacych dla sortowania Bombelkowego dla tablicy posortowanej " << DataBubble[i]->arraySize << " elementowej : " << BubbleSortObjectSorted[i]->printDominantCouner() << endl;
		BubbleSortObjectBack[i]->sort(DataBubble[i]->backSortedArray, DataBubble[i]->arraySize);
		cout << "Ilosc operacji dominujacych dla sortowania Bombelkowego dla tablicy malejacej " << DataBubble[i]->arraySize << " elementowej : " << BubbleSortObjectBack[i]->printDominantCouner() << endl;
		BubbleSortObjectRandom[i]->sort(DataBubble[i]->randomArray, DataBubble[i]->arraySize);
		cout << "Ilosc operacji dominujacych dla sortowania Bombelkowego dla tablicy losowej " << DataBubble[i]->arraySize << " elementowej : " << BubbleSortObjectRandom[i]->printDominantCouner() << endl;
		cout << "==================================================================\n";
		cout << "\n\n\n\n\n\n\n";
		cout << "==================================================================\n";
		InsertSortObjectSorted[i]->sort(DataInsert[i]->sortedArray, DataInsert[i]->arraySize);
		cout << "Ilosc operacji dominujacych dla sortowania przez wstawianie dla tablicy posortowanej " << DataInsert[i]->arraySize << " elementowej : " << InsertSortObjectSorted[i]->printDominantCouner() << endl;
		InsertSortObjectBack[i]->sort(DataInsert[i]->backSortedArray, DataInsert[i]->arraySize);
		cout << "Ilosc operacji dominujacych dla sortowania  przez wstawianiedla tablicy malejacej " << DataInsert[i]->arraySize << " elementowej : " << InsertSortObjectBack[i]->printDominantCouner() << endl;
		InsertSortObjectRandom[i]->sort(DataInsert[i]->randomArray, DataInsert[i]->arraySize);
		cout << "Ilosc operacji dominujacych dla sortowania  przez wstawianie dla tablicy losowej " << DataInsert[i]->arraySize << " elementowej : " << InsertSortObjectRandom[i]->printDominantCouner() << endl;
		cout << "==================================================================\n";
		cout << "\n\n\n\n\n\n\n";
		cout << "==================================================================\n";
		MergeSortObjectSorted[i]->sort(DataMerge[i]->sortedArray,0,DataMerge[i]->arraySize);
		cout << "Ilosc operacji dominujacych dla sortowania przez scalanie dla tablicy posortowanej " << DataMerge[i]->arraySize << " elementowej : " << MergeSortObjectSorted[i]->printDominantCouner() << endl;
		MergeSortObjectBack[i]->sort(DataMerge[i]->backSortedArray,0,DataMerge[i]->arraySize);
		cout << "Ilosc operacji dominujacych dla sortowaniaprzez scalanie  dla tablicy malejacej " << DataMerge[i]->arraySize << " elementowej : " << MergeSortObjectBack[i]->printDominantCouner() << endl;
		MergeSortObjectRandom[i]->sort(DataMerge[i]->randomArray,0,DataMerge[i]->arraySize);
		cout << "Ilosc operacji dominujacych dla sortowania przez scalanie  dla tablicy losowej " << DataMerge[i]->arraySize << " elementowej : " << MergeSortObjectRandom[i]->printDominantCouner() << endl;
		cout << "==================================================================\n";
		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
		cout << "||||||||N||||||E||||||||X|||||||||||T|||||||||||||||||||||||||||||\n";
		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
		cout << "||||||||I||||||T||||||||E|||||||||||R||||||A||||C||||||J||||A|||||\n";
		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
		cout << "==================================================================\n";
	}
	cout << "==================================================================\n";

	//for (int i = 0; i < howMuch; i++)
	//{
	//	cout << " Sortowanie Bombelkowe\n";
	//	DataBubble[i]->printObject();
	//	cout << "==================================================================\n";
	//	cout << " Sortowanie Insert\n";
	//	DataInsert[i]->printObject();
	//	cout << "==================================================================\n";
	//	cout << " Sortowanie Merge\n";
	//	DataMerge[i]->printObject();
	//	cout << "==================================================================\n";
	//}


	/*
	for (int i = 0; i < howMuch; i++)
	{
		Data[i]->printObject();
		cout << "==================================================================\n";
	}
	*/





system("PAUSE");
}