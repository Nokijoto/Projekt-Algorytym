#pragma once

class BinarySearch
{
private:
	int dominantCounter = 0; // liczba operacji  elementarnych
public:
	int search(int* arrayToSearch, int searched, int pocz, int kon); // funkcja do wyszukiwania sposobem binarnym(tablica,szukana,inex pocz�tkowy,index ko�cowy)
	int printDominantCounter();// funkcja zwracaj�ca liczb� operacji elementarnych
};