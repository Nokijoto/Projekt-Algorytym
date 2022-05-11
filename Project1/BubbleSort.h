#pragma once


class BubbleSort
{
private:
	int dominantCounter = 0;						// Liczba zdarzen elementarnych
	bool validate(int j,int size, int i);
public:
	void sort(int * arrayToSort, int size);			// Funkcja realizujaca sortowanie bombelkowe
	int printDominantCounter();
};