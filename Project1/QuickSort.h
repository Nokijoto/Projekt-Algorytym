#pragma once




class QuickSort
{
private:
	int temp;										// Zmienna tymczasowa
	int i;											// Zmienna do sledzenia iteracji
	bool zmiana;									// Flaga do zamiany
	int elem = 0;									// Liczba zdarzen elementarnych

public:

	// Definicja funkcji sortowania i wyswietlania

	void sort(int * ArrayToSort, int x, int y);			// Funkcja realizujaca sortowanie bombelkowe
	void show(int * ArrayToSort, int size);			// Funkcja wyswietlajaca posortowana tablice
};