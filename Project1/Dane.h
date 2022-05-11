#pragma once
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
class Dane
{
	
	void printSort();  // wypisanie tablicy posortowanej
	void printBackSort(); // wypisanie tablicy malej�cej
	void printRandomSort();// wypisanie tablicy losowej
	static int objCounter;   // zmienna ile jest obiekt�w
public: 
	int addtoCounter();  // zwwiekszanie licznika obiekt�w
	int arraySize = 0; // rozmiar tablicy pozostaje w zmiennej
	//int* pomArray;
	int* sortedArray;  // tablica posortowana
	int* backSortedArray; // tablica malej�ca
	int* randomArray; // tablica losowa
	Dane(); // konstruktor domy�lny
 	Dane(int arraySize);// konstruktor tworz�cy 3 tablice o podanym rozmairze
	~Dane();// dekonstruktor 
	void printArr(int * arr);// wy�wietlanie tablicy ???
	void printObject(int flag=0);// wyswietlanie tablicy zale�nie od flagi
	void resetObjCounter();
};

