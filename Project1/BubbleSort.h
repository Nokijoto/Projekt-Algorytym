#pragma once


class BubbleSort //Klasa zawieraj�ca metod� s�u�ac� do sortowania tablicy sortowaniem b�belkowym
{
private:
	int dominantCounter = 0;// Liczba zdarzen elementarnych
	bool validate(int j,int size, int i);//sprawdzanie warunku +zwi�kszanie op. elementanych
public:
	void sort(int * arrayToSort, int size);// Funkcja realizujaca sortowanie bombelkowe
	int printDominantCounter();//zwraca liczbe zdarzen elementarnych
};