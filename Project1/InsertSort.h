#pragma once



class InsertSort
{
private:
	int dominantCounter = 0;									// Liczba zdarzen elementarnych

public:
	
	int printDominantCouner();
	void sort(int * arrayToSort, int size);			// Funkcja realizujaca sortowanie bombelkowe
};