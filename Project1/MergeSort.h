#pragma once




class MergeSort
{
private:

	int* pom;
	int temp;										// Zmienna tymczasowa
	int i;											// Zmienna do sledzenia iteracji
									// Flaga do zamiany
	int dominantCounter = 0;										// Liczba zdarzen elementarnych
	void merge(int* tab, int lewy, int srodek, int prawy, int* pom);
public:

	// Definicja funkcji sortowania i wyswietlania

	void sort(int* arrayToSort, int right, int left,int * pomD);		// Funkcja realizujaca sortowanie bombelkowe

};