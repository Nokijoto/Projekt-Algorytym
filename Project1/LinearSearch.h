	#pragma once

class LinearSearch
{
	int dominantCounter = 0;//liczba operacji elementarnych
public:
	int search(int searched, int* ArrayToSort, int size);//funkcja szukaj�ca podan� warto�c algorytem liniowym (szukana,tablica,rozmiar)
	int printDominantCounter();//zwraca liczbe zdarzen elementarnych
};