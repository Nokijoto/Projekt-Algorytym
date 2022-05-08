#include <iostream>
#include "MergeSort.h"
using namespace std;

		





void MergeSort::sort(int* arr, int low, int high)
{
    this->dominantCounter = 0;
    int mid;
    if (low < high) {
        //divide the array at mid and sort independently using merge sort
        mid = (low + high) / 2;
        sort(arr, low, mid);
        sort(arr, mid + 1, high);
        //merge or conquer sorted arrays
        merge(arr, low, high, mid);
    }
}

void MergeSort::merge(int* arr, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++) {
        arr[i] = c[i];
    }

}
















												// Deklaracje funkcji sortowania i wyswietlania

//void MergeSort::merge(int *tab, int lewy, int srodek, int prawy,int * pom)
//{
//	int i = lewy, j = srodek + 1;
//
//	//kopiujemy lew¹ i praw¹ czêœæ tablicy do tablicy pomocniczej
//	for (int i = lewy; i <= prawy; i++)
//		this->pom[i] = tab[i];
//
//	//scalenie dwóch podtablic pomocniczych i zapisanie ich 
//	//we w³asciwej tablicy
//	for (int k = lewy; k <= prawy; k++)
//		if (i <= srodek)
//			if (j <= prawy)
//				if (pom[j] < pom[i])
//					tab[k] = pom[j++];
//				else
//					tab[k] = pom[i++];
//			else
//				tab[k] = pom[i++];
//		else
//			tab[k] = pom[j++];
//};
//
//
//void MergeSort::sort(int * arrayToSort, int right, int left,int * pomD)
//{	
//	
//
//	//gdy mamy jeden element, to jest on ju¿ posortowany
//	if (right <= left) return;
//
//	//znajdujemy srodek podtablicy
//	int mid = (right + left) / 2;
//
//	//dzielimy tablice na czêsæ lew¹ i prawa
//	sort(arrayToSort, left, mid,pomD);
//	sort(arrayToSort, mid + 1, right,pomD);
//
//	//scalamy dwie ju¿ posortowane tablice
//	merge(arrayToSort, left, mid, right,pomD);
//
//
//
//
//}
