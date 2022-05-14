#pragma once



class InsertSort
{
private:
	unsigned long long int dominantCounter = 0;// Liczba zdarzen elementarnych
	bool validate(int j,int key, int var);//sprawdzanie warunku +zwiêkszanie op. elementanych
public:
	
	int printDominantCounter();//zwraca liczbe zdarzen elementarnych
	void sort(int* arr, int n);// Funkcja realizujaca sortowanie bombelkowe (tablica,rozmiar)
};