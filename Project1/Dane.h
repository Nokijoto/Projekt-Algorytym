#pragma once
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
class Dane
{
	
	void printSort();  // wypisanie tablicy posortowanej
	void printBackSort(); // wypisanie tablicy malej¹cej
	void printRandomSort();// wypisanie tablicy losowej
	static int objCounter;   // zmienna ile jest obiektów
public: 
	int addtoCounter();  // zwwiekszanie licznika obiektów
	int arraySize = 0; // rozmiar tablicy pozostaje w zmiennej
	//int* pomArray;
	int* sortedArray;  // tablica posortowana
	int* backSortedArray; // tablica malej¹ca
	int* randomArray; // tablica losowa
	Dane(); // konstruktor domyœlny
 	Dane(int arraySize);// konstruktor tworz¹cy 3 tablice o podanym rozmairze
	~Dane();// dekonstruktor 
	void printArr(int * arr);// wyœwietlanie tablicy ???
	void printObject(int flag=0);// wyswietlanie tablicy zale¿nie od flagi
	void resetObjCounter();
};

