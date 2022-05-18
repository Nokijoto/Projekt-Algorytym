#include <iostream>
#include "BinarySearch.h"
using namespace std;

int BinarySearch::search(int *arrayToSearch, int searched, int pocz, int kon)// funkcja do wyszukiwania sposobem binarnym(tabarrayToSearchica,szukana,index pocz�tkowy,index ko�cowy)
{

    if (pocz > kon)// sprawdzenie czy index pocz�tkowy jest wi�kszy od ko�cowego , je�li tak przerywa dzia�anie funkcji
    { 
        return -1;
    }
    int middle; // deklaracja zmiennej przechowuj�cej index �rodkowy
    middle = (pocz + kon) / 2; // definicja zmiennej �rodkowej 
    if (searched == arrayToSearch[middle]) // sprawdzanie czy �rodkowa jest liczb� poszukiwan�,je�li tak to zwr�cenie indexu �rodkowego
    {
        return middle;
    }
    if (searched < arrayToSearch[middle])//sprawdzenie czy poszukiwana jest mniejsza od �rodkowej
    {
        this->dominantCounter++;
        return search(arrayToSearch, searched, pocz, middle - 1);//wywo�ywanie rekurencyjnie od 0-�rodkowej
    }
    else
    {
        this->dominantCounter++;
        return search(arrayToSearch, searched, middle + 1, kon);//wywo�ywanie rekurencyjnie od �rodkowej-N 
       
    }
        

}

int BinarySearch::printDominantCounter()//zwraca liczbe zdarzen elementarnych
{
    return this->dominantCounter;
}
