#pragma once


class BubbleSort //Klasa zawieraj¹ca metodê s³u¿ac¹ do sortowania tablicy sortowaniem b¹belkowym
{
private:
	int dominantCounter = 0;// Liczba zdarzen elementarnych
	bool validate(int j,int size, int i);//sprawdzanie warunku +zwiêkszanie op. elementanych
public:
	void sort(int * arrayToSort, int size);// Funkcja realizujaca sortowanie bombelkowe
	int printDominantCounter();//zwraca liczbe zdarzen elementarnych
};