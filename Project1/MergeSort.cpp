#include <iostream>
#include "MergeSort.h"
using namespace std;

bool MergeSort::validate()
{
    return false;
}

void MergeSort::merge(int* array, int left, int middleValue, int right)
{

    int i, j, k; // definicja zmiennych do indexowania tablic
    int n1 = middleValue - left + 1; // definicja i inicjalizacja zmiennej do rozmiaru 1 tablicy pomocniczej
    int n2 = right - middleValue;// definicja i inicjalizacja zmiennej do rozmiaru 2 tablicy pomocniczej
    /* tablice tymczasowe */
    int* Left = new int[n1];
    int* Right = new int[n2];
    /* Kopiowanie warto�ci z tablicy do tablicy tymczasowej*/
    for (i = 0; i < n1; i++)
        Left[i] = array[left + i];
    for (j = 0; j < n2; j++)
        Right[j] = array[middleValue + 1 + j];
 
    i = 0; // inicializacja indexu pierwszej tablicy pomocniczej 
    j = 0; // inicializacja indexu drugiej tablicy pomocniczej
    k = left; // inicializacja indexu po��czoncych tablic
    /*��czenie tablic tymczasowych do tablicy poczatkowej */
    while (i < n1 && j < n2)
    {
        this->dominantCounter++;
        if (Left[i] <= Right[j])
        {
            array[k] = Left[i];
            i++;
        }
        else
        {
            array[k] = Right[j];
            j++;
        }
        k++;
    }
    /* kopiowanie pozosta�ych element�w z tablicy pomocniczej L je�li s�*/
    while (i < n1)
    {
        array[k] = Left[i];
        i++;
        k++;
    }
    /* kopiowanie pozosta�ych element�w z tablicy pomocniczej R je�li s�*/
    while (j < n2)
    {
        array[k] = Right[j];
        j++;
        k++;
    }


}

void MergeSort::sort(int* array, int left, int right)//funkcja sortuj�ca przesy�amy do niej (tablice,index poczatkowy,index koncowy)
{
    right--;
    if (left < right) // sprawdzenie czy lewa nie jest mniejsza od prawej , je�li tak to algorytm wyszed� poza tablic�
    {
        int middleValue = left + (right - left) / 2; // deklaracja i definicja �rodkowej warto�ci
        
        sort(array, left, middleValue);//wywo�anie rekurencyjne funkcji dla przedzia�u 0 - �rodkowej
        sort(array, middleValue + 1, right);//wywo�anie rekurencyjne funkcji dla przedzia�u �rodkowej - N
        merge(array, left, middleValue, right);// wywo�anie funkcji ��cz�cej 
    }
}

int MergeSort::printDominantCounter()
{
    return this->dominantCounter;
}
