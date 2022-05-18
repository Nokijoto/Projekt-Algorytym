#pragma once


class MergeSort
{
private:
	int dominantCounter = 0;//liczba operacji elementarnych
	bool validate();//sprawdzanie warunku +zwi�kszanie op. elementanych
	void merge(int* array, int left, int middleValue, int right);// funkcja ��cz�ca tablice do algorytmu merge sort(tablica,index pocz�tkowy,index �rodkowy,index ko�cowy)
public:
	void sort(int* array, int left, int right);//funkcja sortuj�ca tablice algorytmem merge sort( tablica,index pocz�tkowy,index ko�cowy)
	int printDominantCounter();//zwraca liczbe zdarzen elementarnych
};


