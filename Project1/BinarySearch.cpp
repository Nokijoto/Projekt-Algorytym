#include <iostream>
#include "BinarySearch.h"
using namespace std;

int BinarySearch::search(int *arrayToSearch, int searched, int pocz, int kon)// funkcja do wyszukiwania sposobem binarnym(tabarrayToSearchica,szukana,index pocz¹tkowy,index koñcowy)
{

    if (pocz > kon)// sprawdzenie czy index pocz¹tkowy jest wiêkszy od koñcowego , jeœli tak przerywa dzia³anie funkcji
    { 
        return -1;
    }
    int middle; // deklaracja zmiennej przechowuj¹cej index œrodkowy
    middle = (pocz + kon) / 2; // definicja zmiennej œrodkowej 
    if (searched == arrayToSearch[middle]) // sprawdzanie czy œrodkowa jest liczb¹ poszukiwan¹,jeœli tak to zwrócenie indexu œrodkowego
    {
        return middle;
    }
    if (searched < arrayToSearch[middle])//sprawdzenie czy poszukiwana jest mniejsza od œrodkowej
    {
        this->dominantCounter++;
        return search(arrayToSearch, searched, pocz, middle - 1);//wywo³ywanie rekurencyjnie od 0-œrodkowej
    }
    else
    {
        this->dominantCounter++;
        return search(arrayToSearch, searched, middle + 1, kon);//wywo³ywanie rekurencyjnie od œrodkowej-N 
       
    }
        

}

int BinarySearch::printDominantCounter()//zwraca liczbe zdarzen elementarnych
{
    return this->dominantCounter;
}
