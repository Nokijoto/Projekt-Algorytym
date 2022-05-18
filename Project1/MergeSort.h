#pragma once


class MergeSort
{
private:
	int dominantCounter = 0;//liczba operacji elementarnych
	bool validate();//sprawdzanie warunku +zwiêkszanie op. elementanych
	void merge(int* array, int left, int middleValue, int right);// funkcja ³¹cz¹ca tablice do algorytmu merge sort(tablica,index pocz¹tkowy,index œrodkowy,index koñcowy)
public:
	void sort(int* array, int left, int right);//funkcja sortuj¹ca tablice algorytmem merge sort( tablica,index pocz¹tkowy,index koñcowy)
	int printDominantCounter();//zwraca liczbe zdarzen elementarnych
};


