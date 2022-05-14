#include "Dane.h"
#include <iostream>
using namespace std;
int Dane::objCounter = 1;// zmienna statyczna do zliczania liczby element�w
void Dane::printSort() // funkcja wy�wietlaj�ca tablice porostowan�
{
	cout << "Tablica Posortowana 1-N" << endl;
	for (int i = 0; i < arraySize; i++)
	{
		cout << this->sortedArray[i] << "\t";
	}
	cout << "\n";
}
void Dane::printBackSort()// funkcja wy�wietlaj�ca tablice  malej�co
{
	cout << "Tablica Posortowana od N-1" << endl;
	for (int i = 0; i < arraySize; i++)
	{
		cout << this->backSortedArray[i] << "\t";
	}
	cout << "\n";
} 
void Dane::printRandomSort()// funkcja wy�wietlaj�ca tablice losow�
{
	cout << "Tablica wygenerowana losowo" << endl;
	for (int i = 0; i < arraySize; i++)
	{
		cout << this->randomArray[i] << "\t";
	}
	cout << "\n";
}
int Dane::addtoCounter()//funckja zwi�kszaj�ca liczb� obiekt�w oraz zwracaj�ca ich liczb�
{
	return objCounter++;
}
Dane::Dane()// konstruktor domy�lny
{
	this->sortedArray = nullptr;
	this->backSortedArray = nullptr;
	this->randomArray = nullptr;
}
Dane::Dane(int size)
{
	this->arraySize = size; // ustawianie podanej wartosci jako rozmiar tablic

	 sortedArray = new int[arraySize]; // deklaracja tablicy posortowanej
	 backSortedArray = new int[arraySize];// deklaracja tablicy malej�cej
	 randomArray = new int[arraySize];// deklaracja tablicy losowej
	srand(time(NULL));// pobieranie ziarna do generacji losowych liczb
	for (int i = 0; i < arraySize; i++) // p�tla wype�niaj�ca 3 tablice
	{
		randomArray[i] = rand() % arraySize + 1; //wype�nianie losowej
		sortedArray[i] = i+1;//wype�nianie posorotwanej
		backSortedArray[i]= arraySize -i;//wype�nianie malej�cej
	}
	cout << " Utworzono Obiekt Dane o nr : " << addtoCounter() << "\n";//Powiadomienie o poprawnym utworzeniu obiektru o nr 
}

void Dane::printObject(int flag) // funkcja do wybierania wy�wietlania konkrentej tablicy
{
	switch (flag)
	{
	case 1: printSort(); break;
	case 2:	printBackSort(); break;
	case 3:	printRandomSort(); break;
	default: printSort(); printBackSort(); printRandomSort(); 
	}

}

void Dane::resetObjCounter()//zerowanie liczby obiekt�w
{
	objCounter = 0;
}

void Dane::printArr(int * arr) // wywietlanie przes�anej tablicy
{
	for (int  i = 0; i < this->arraySize; i++)
	{
		cout << arr[i] << "\t";
	}
	cout <<"\n";
}

Dane::~Dane()
{

}

