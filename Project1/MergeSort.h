#pragma once




class MergeSort
{
private:

	int* pom;
	int temp;										// Zmienna tymczasowa
	int i;											// Zmienna do sledzenia iteracji
									// Flaga do zamiany
	int dominantCounter = 0;	
	void merge(int* arr, int low, int high, int mid);// Liczba zdarzen elementarnych
	//void merge(int* tab, int lewy, int srodek, int prawy, int* pom);
public:
	int printDominantCouner();
	// Definicja funkcji sortowania i wyswietlania
	void sort(int* arr, int low, int high);
//	void sort(int* arrayToSort, int right, int left,int * pomD);		// Funkcja realizujaca sortowanie bombelkowe

};