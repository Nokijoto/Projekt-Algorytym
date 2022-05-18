#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h> 
#include <Windows.h>
#include <cmath>

#include "BubbleSort.h"
#include "InsertSort.h"
#include "MergeSort.h"
#include "Dane.h"
#include "LinearSearch.h"
#include "BinarySearch.h"
#include "Dijkstra.h"

	

using namespace std;
class ToFile
{
private:
	int countObjects; 
	int* sizeObjects;
	int* sortedTime; 
	int* backTime;
	int* randomTime;

public:
	void saveToFile(string type,int countObjects, int* sizeObjects, int* sortedTime, int* backTime, int* randomTime);
	ToFile(int size);

};

void empiricalBubbleSort();
void empiricalInsertSort();
void empiricalMergeSort();
void empiricalBinarySerach();
void empiricalLinarySearch();
void alghoritmOfDijkstra();
void simpleTextUserInterface()
{
	bool flag = 1;
	while (flag)
	{
		int option = -1;

		cout << "\nObiekty tworzone sa w kolejnosci\nSortowane: 1-N\nMalejaca:N-1\n";
		cout << "\nEmpiryczna analiza algorytmow:\n1.BubbleSort\n2.InserSort\n3.MergeSort\n4.BinarySearch\n5.LinearSearch\n";
		cin >> option;
		switch (option)
		{
		case 1:empiricalBubbleSort(); break;
		case 2:empiricalInsertSort(); break;
		case 3:empiricalMergeSort(); break;
		case 4:empiricalBinarySerach(); break;
		case 5:empiricalLinarySearch(); break;
		case 6:alghoritmOfDijkstra();
		case 0:flag = 0; break;
		}
	}
};

int main()
{
	simpleTextUserInterface();
	
system("PAUSE");
}

void empiricalBubbleSort()
{
	int howMuch = 0;
	
	cout << "Podaj ilosc obiektow do testowania\n";
	cin >> howMuch;
	Dane** DataBubbleArray = new Dane * [howMuch];       // tablica obiektów 
	BubbleSort** BubbleSortSortedObjectArray = new BubbleSort * [howMuch]; // tablica obiektów
	BubbleSort** BubbleSortBackObjectArray = new BubbleSort * [howMuch];// tablica obiektów
	BubbleSort** BubbleSortRandomObjectArray = new BubbleSort * [howMuch];// tablica obiektów
	int arraysSize = 0;
	int *sortedTime = new int[howMuch];
	int *backTime = new int[howMuch];
	int *randomTime = new int[howMuch];
	int	*sizeObjects = new int[howMuch];
	ToFile BubbleDataToFile(howMuch);
	DataBubbleArray[0]->resetObjCounter();
	cout << "Teraz nastapi tworzenie obiektow\n";
	for (int i = 0; i < howMuch; i++)// tworzenie obiektów
	{
		//cout << "\nPodaj rozmiar  " << (i)+1 << " obiektu do testowania\n";
		//cin >> arraysSize;
		//cout << "\n";
		DataBubbleArray[i] = new Dane(i); // tworzenie X obiektów w których s¹ tworzone  3*X tablic  
		sizeObjects[i] = i;

		BubbleSortSortedObjectArray[i] = new BubbleSort; // tablica obiektów dla posortowanych danych
		BubbleSortBackObjectArray[i] = new BubbleSort; // tablica obiektów dla malejacych 
		BubbleSortRandomObjectArray[i] = new BubbleSort; // tablica obiektow dla wygenerowanych losowo
	

	}cout << "\n";
	cout << "\nRozpoczynam sortowanie!\n";
	for (int i = 0; i < howMuch; i++)
	{
		cout << i << ")Partia danych do sortowania\n\n";
		
		BubbleSortSortedObjectArray[i]->sort(DataBubbleArray[i]->sortedArray, DataBubbleArray[i]->arraySize);
		cout << "Dominujace dla Sortowania bubble i dla posortowanej tablicy : " << BubbleSortSortedObjectArray[i]->printDominantCounter() << "\n";
		sortedTime[i] = BubbleSortSortedObjectArray[i]->printDominantCounter();
		
		BubbleSortBackObjectArray[i]->sort(DataBubbleArray[i]->backSortedArray, DataBubbleArray[i]->arraySize);
		cout << "Dominujace dla Sortowania bubble i dla malejacej tablicy : " << BubbleSortBackObjectArray[i]->printDominantCounter() << "\n";
		backTime[i] = BubbleSortBackObjectArray[i]->printDominantCounter();
		
		BubbleSortRandomObjectArray[i]->sort(DataBubbleArray[i]->randomArray, DataBubbleArray[i]->arraySize);
		cout << "Dominujace dla Sortowania bubble i dla losowej tablicy : " << BubbleSortRandomObjectArray[i]->printDominantCounter() << "\n";
		randomTime[i] = BubbleSortRandomObjectArray[i]->printDominantCounter();

		cout << "\n";
		DataBubbleArray[i]->~Dane();
	}
	BubbleDataToFile.saveToFile("Bubble", howMuch, sizeObjects, sortedTime, backTime, randomTime);
	
};
void empiricalInsertSort()
{

	int howMuch = 0;

	cout << "Podaj ilosc obiektow do testowania\n";
	cin >> howMuch;
	Dane** DataInsertArray = new Dane * [howMuch];       // tablica obiektów 
	InsertSort** InsertSortSortedObjectArray = new InsertSort * [howMuch]; // tablica obiektów
	InsertSort** InsertSortBackObjectArray = new InsertSort * [howMuch];// tablica obiektów
	InsertSort** InsertSortRandomObjectArray = new InsertSort * [howMuch];// tablica obiektów
	int arraysSize = 0;
	int* sortedTime = new int[howMuch];
	int* backTime = new int[howMuch];
	int* randomTime = new int[howMuch];
	int* sizeObjects = new int[howMuch];
	ToFile InsertDataToFile(howMuch);
	DataInsertArray[0]->resetObjCounter();
	cout << "Teraz nastapi tworzenie obiektow\n";
	for (int i = 0; i < howMuch; i++)// tworzenie obiektów
	{
		//cout << "\nPodaj rozmiar  " << (i)+1 << " obiektu do testowania\n";
		//cin >> arraysSize;
		//cout << "\n";
		DataInsertArray[i] = new Dane(i); // tworzenie X obiektów w których s¹ tworzone  3*X tablic  
		sizeObjects[i] = i;

		InsertSortSortedObjectArray[i] = new InsertSort; // tablica obiektów dla posortowanych danych
		InsertSortBackObjectArray[i] = new InsertSort; // tablica obiektów dla malejacych 
		InsertSortRandomObjectArray[i] = new InsertSort; // tablica obiektow dla wygenerowanych losowo


	}cout << "\n";
	cout << "\nRozpoczynam sortowanie!\n";
	for (int i = 0; i < howMuch; i++)
	{
		cout << i << ") Partia danych do sortowania\n\n";
		InsertSortSortedObjectArray[i]->sort(DataInsertArray[i]->sortedArray, DataInsertArray[i]->arraySize);
		cout << "Dominujace dla Sortowania Insert i dla posortowanej tablicy : " << InsertSortSortedObjectArray[i]->printDominantCounter() << "\n";
		sortedTime[i] = InsertSortSortedObjectArray[i]->printDominantCounter();
		InsertSortBackObjectArray[i]->sort(DataInsertArray[i]->backSortedArray, DataInsertArray[i]->arraySize);
		cout << "Dominujace dla Sortowania Insert i dla malejacej tablicy : " << InsertSortBackObjectArray[i]->printDominantCounter() << "\n";
		backTime[i] = InsertSortBackObjectArray[i]->printDominantCounter();

		InsertSortRandomObjectArray[i]->sort(DataInsertArray[i]->randomArray, DataInsertArray[i]->arraySize);
		cout << "Dominujace dla Sortowania Insert i dla losowej tablicy : " << InsertSortRandomObjectArray[i]->printDominantCounter() << "\n";
		randomTime[i] = InsertSortRandomObjectArray[i]->printDominantCounter();
		cout << "\n";
	}


	InsertDataToFile.saveToFile("Insert", howMuch, sizeObjects, sortedTime, backTime, randomTime);



};
void empiricalMergeSort()
{
	int howMuch = 0;
	
	cout << "Podaj ilosc obiektow do testowania\n";
	cin >> howMuch;
	Dane** DataMergeArray = new Dane * [howMuch];       // tablica obiektów 
	MergeSort** MergeSortSortedObjectArray = new MergeSort * [howMuch]; // tablica obiektów
	MergeSort** MergeSortBackObjectArray = new MergeSort * [howMuch];// tablica obiektów
	MergeSort** MergeSortRandomObjectArray = new MergeSort * [howMuch];// tablica obiektów
	int arraysSize = 0;
	int* sortedTime = new int[howMuch];
	int* backTime = new int[howMuch];
	int* randomTime = new int[howMuch];
	int* sizeObjects = new int[howMuch];
	ToFile MergeDataToFile(howMuch);
	DataMergeArray[0]->resetObjCounter();
	cout << "Teraz nastapi tworzenie obiektow\n";
	for (int i = 0; i < howMuch; i++)// tworzenie obiektów
	{
		//cout << "\nPodaj rozmiar  " << (i)+1 << " obiektu do testowania\n";
		//cin >> arraysSize;
		//cout << "\n";
		DataMergeArray[i] = new Dane(i); // tworzenie X obiektów w których s¹ tworzone  3*X tablic  
		sizeObjects[i] = i;


		MergeSortSortedObjectArray[i] = new MergeSort; // tablica obiektów dla posortowanych danych
		MergeSortBackObjectArray[i] = new MergeSort; // tablica obiektów dla malejacych 
		MergeSortRandomObjectArray[i] = new MergeSort; // tablica obiektow dla wygenerowanych losowo
	

	}cout << "\n";
	cout << "\nRozpoczynam sortowanie!\n";
	for (int i = 0; i < howMuch; i++)
	{
		cout <<i<<")Partia danych do sortowania\n\n";
		MergeSortSortedObjectArray[i]->sort(DataMergeArray[i]->sortedArray,0, DataMergeArray[i]->arraySize);
		cout << "Dominujace dla Sortowania Merge i dla posortowanej tablicy : " << MergeSortSortedObjectArray[i]->printDominantCounter() << "\n";
		sortedTime[i] = MergeSortSortedObjectArray[i]->printDominantCounter();
		MergeSortBackObjectArray[i]->sort(DataMergeArray[i]->backSortedArray, 0, DataMergeArray[i]->arraySize);
		cout << "Dominujace dla Sortowania Merge i dla malejacej tablicy : " << MergeSortBackObjectArray[i]->printDominantCounter() << "\n";
		backTime[i] = MergeSortBackObjectArray[i]->printDominantCounter();
		MergeSortRandomObjectArray[i]->sort(DataMergeArray[i]->randomArray, 0, DataMergeArray[i]->arraySize);
		cout << "Dominujace dla Sortowania Merge i dla losowej tablicy : " << MergeSortRandomObjectArray[i]->printDominantCounter() << "\n";
		randomTime[i] = MergeSortRandomObjectArray[i]->printDominantCounter();
		cout << "\n";

	}

	MergeDataToFile.saveToFile("Merge", howMuch, sizeObjects, sortedTime, backTime, randomTime);



};
void empiricalLinarySearch()
{
	int howMuch = 0;

	cout << "Podaj ilosc obiektow do testowania\n";
	cin >> howMuch;//100
	Dane** DataLinaryArray = new Dane * [howMuch];       // tablica obiektów 
	LinearSearch** LinarySearchSortedObjectArray = new LinearSearch * [howMuch]; // tablica obiektów
	LinearSearch** LinarySearchBackObjectArray = new LinearSearch * [howMuch];// tablica obiektów
	LinearSearch** LinarySearchRandomObjectArray = new LinearSearch * [howMuch];// tablica obiektów
	int arraysSize = 0;
	int* sortedTime = new int[howMuch];
	int* backTime = new int[howMuch];
	int* randomTime = new int[howMuch];
	int* sizeObjects = new int[howMuch];
	ToFile LinearDataToFile(howMuch);
	DataLinaryArray[0]->resetObjCounter();

	srand(time(NULL));
	cout << "Teraz nastapi tworzenie obiektow\n";
	for (int i = 0; i < howMuch; i++)// tworzenie obiektów
	{
	
		DataLinaryArray[i] = new Dane(i); // tworzenie X obiektów w których s¹ tworzone  3*X tablic  
		sizeObjects[i] = i;

		LinarySearchSortedObjectArray[i] = new LinearSearch; // tablica obiektów dla posortowanych danych
		LinarySearchBackObjectArray[i] = new LinearSearch; // tablica obiektów dla malejacych 
		LinarySearchRandomObjectArray[i] = new LinearSearch; // tablica obiektow dla wygenerowanych losowo
		


	}cout << "\n";
	int search = -1;
	for (int i = 0; i < howMuch; i++)
	{

		srand(time(NULL));
		//cout << i << ") Partia danych do szukania\n\n";
		Sleep(1000);
		//cout <<"\nLiczba do znalezienia dla posortowanej :\n";

		if (i == 0 || i == 1)
		{
			sortedTime[i] = 0;
			backTime[i] = 0;
			randomTime[i] = 0;
			continue;

		}
		cout << "Wyszukiwanie  binarne dla " << i << " elementowej tablicy\n";
		search = rand() % DataLinaryArray[i]->arraySize+1;
		cout << "\nLiczba do znalezienia dla posortowanej :\n";
		cout << search<<"\n";
		LinarySearchSortedObjectArray[i]->search(search,DataLinaryArray[i]->sortedArray, DataLinaryArray[i]->arraySize);
		cout << "Dominujace dla wyszukiwania liniowego dla losowych wartosci o : " << LinarySearchSortedObjectArray[i]->printDominantCounter() << "\n";
		sortedTime[i] = LinarySearchSortedObjectArray[i]->printDominantCounter();




		cout << "\nLiczba do znalezienia dla malejacej :\n";
		search = rand() % DataLinaryArray[i]->arraySize + 1;
		cout << search << "\n";
		LinarySearchBackObjectArray[i]->search(search, DataLinaryArray[i]->backSortedArray, DataLinaryArray[i]->arraySize);
		cout << "Dominujace dla wyszukiwania liniowego dla losowych wartosci : " << LinarySearchBackObjectArray[i]->printDominantCounter() << "\n";
		backTime[i] = LinarySearchBackObjectArray[i]->printDominantCounter();


		cout << "\nLiczba do znalezienia dla posortowanej :\n";
		search = rand() % DataLinaryArray[i]->arraySize + 1;
		cout << search << "\n";
		LinarySearchRandomObjectArray[i]->search(search, DataLinaryArray[i]->randomArray, DataLinaryArray[i]->arraySize);
		cout << "Dominujace dla wyszukiwania liniowego dla losowych wartosci : " << LinarySearchRandomObjectArray[i]->printDominantCounter() << "\n";
		randomTime[i] = LinarySearchRandomObjectArray[i]->printDominantCounter();
		cout << "\n";


	}
	LinearDataToFile.saveToFile("Liniowe", howMuch, sizeObjects, sortedTime, backTime, randomTime);

}

void empiricalBinarySerach()
{
	int howMuch = 0;

	cout << "Podaj ilosc obiektow do testowania\n";
	cin >> howMuch;
	Dane** DataBinaryArray = new Dane * [howMuch];       // tablica obiektów 
	BinarySearch** BinarySearchSortedObjectArray = new BinarySearch * [howMuch]; // tablica obiektów
	BinarySearch** BinarySearchBackObjectArray = new BinarySearch * [howMuch];// tablica obiektów
	int arraysSize = 0;
	int* sortedTime = new int[howMuch];
	int* backTime = new int[howMuch];
	int* randomTime = new int[howMuch];
	int* sizeObjects = new int[howMuch];
	ToFile BinaryDataToFile(howMuch);
	DataBinaryArray[0]->resetObjCounter();
	srand(time(NULL));
	cout << "Teraz nastapi tworzenie obiektow\n";
	for (int i = 0; i < howMuch; i++)// tworzenie obiektów
	{
		//cout << "\nPodaj rozmiar  " << (i)+1 << " obiektu do testowania\n";
		//cin >> arraysSize;
		//cout << "\n";

		DataBinaryArray[i] = new Dane(i); // tworzenie X obiektów w których s¹ tworzone  3*X tablic  
		sizeObjects[i] = i;

		BinarySearchSortedObjectArray[i] = new BinarySearch; // tablica obiektów dla posortowanych danych
		BinarySearchBackObjectArray[i] = new BinarySearch; // tablica obiektów dla malejacych 
		


	}
	cout << "\n";
	int search = -1;
	for (int i = 0; i < howMuch; i++)
	{
		/*int search = -1;
		cout << i << "\tPartia danych do szukania\n\n";
		cout << "\nLiczba do znalezienia dla posortowanej :\n\n";
		cin >> search;*/
		srand(time(NULL));
		Sleep(1000);
		if (i == 0 || i == 1)
		{
			sortedTime[i] = 0;
			backTime[i] = 0;
			randomTime[i] = 0;
			continue;

		}
		cout << "Wyszukiwanie  binarne dla " << i << " elementowej tablicy\n";

		cout << "\nLiczba do znalezienia dla posortowanej:\n";
		search = rand() % i + 1;
		cout << search << "\n";
		BinarySearchSortedObjectArray[i]->search(DataBinaryArray[i]->sortedArray, search, 0, DataBinaryArray[i]->arraySize);
		cout << "Dominujace dla wyszukiwania binarnego dla rosnacych : " << BinarySearchSortedObjectArray[i]->printDominantCounter() << "\n";
		sortedTime[i] = BinarySearchSortedObjectArray[i]->printDominantCounter();


		cout << "\nLiczba do znalezienia dla malejacej:\n";
		search = rand() % i + 1;
		cout << search << "\n";
		BinarySearchBackObjectArray[i]->search(DataBinaryArray[i]->backSortedArray,search,0, DataBinaryArray[i]->arraySize);
		cout << "Dominujace dla wyszukiwania binarnego dla malejacych : " << BinarySearchBackObjectArray[i]->printDominantCounter() << "\n";
		backTime[i] = BinarySearchBackObjectArray[i]->printDominantCounter();
		randomTime[i] = 0;
		cout << "\n";


	}
	BinaryDataToFile.saveToFile("Binarne", howMuch, sizeObjects, sortedTime, backTime, randomTime);


	
	

};
void ToFile::saveToFile(string type,int countObjects, int* sizeObjects, int* sortedTime, int* backTime, int* randomTime)
{
	string PATH = "dane/data" + type + ".txt";
	
	fstream plik(PATH);
	plik.open(PATH, ios::app);
	if (plik.good())
	{
		cout << " Uwtorzono plik z danymi o nazwie " << PATH << "\n";
	}
	else
	{
		cout << " Blad tworzenia pliku\n";
	}
	plik << "Rozmiar Danych " << type << " ;";
	for (int i = 0; i < countObjects; i++)
	{
		plik << sizeObjects[i] << ";";
	}
	plik << "\n";
	plik << "Posortowane "<<type<<" ;";
	for (int i = 0; i < countObjects; i++)
	{
		plik <<sortedTime[i]<<";";
	}
	plik << "\n";
	plik << "Malejaca " << type << " ;";
	for (int i = 0; i < countObjects; i++)
	{
		plik <<backTime[i]<<";";
	}
	plik << "\n";
	plik << "Losowo " << type << " ;";
	for (int i = 0; i < countObjects; i++)
	{
		plik <<randomTime[i]<<";";
	}
	plik << "\n";
	plik << "Pomocnicza(najgorszy przypadek) " << type << " ;";
	for (int i = 0; i < countObjects; i++)
	{
		if (type == "Binarne")
		{
			if (i == 0)
			{
				plik << 0 << ";";
			}
			else
			{
				plik << ceil(log2(i)) << ";";
			}
			
		}
		else if(type=="Liniowe")
		{
			plik <<i << ";";
		}
		else if (type == "Bubble"|| type == "Insert")
		{
			plik << pow(i, 2) << ";";
		}
		else if (type == "Merge")
		{
			if (i == 0)
			{
				plik << 0 << ";";
			}
			else
			{
				plik << ceil(i * log2(i)) << ";";
			}
			
		}

	}
	plik << "\n";
	plik.close();
};

ToFile::ToFile(int size)
{


	sizeObjects = new int[size];
	sortedTime = new int[size];
	backTime = new int[size];
	randomTime = new int[size];
}

void alghoritmOfDijkstra()
{
	int size = 0;
	cout << "Podaj ilosc wierzcholkow\n";
	cin >> size;
	Dijkstra Obiekt(size);
	//Obiekt.find();
};