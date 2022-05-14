#include <iostream>
#include "MergeSort.h"
using namespace std;

bool MergeSort::validate()
{
    return false;
}

void MergeSort::merge(int* array, int left, int middleValue, int right)
{

    int i, j, k;
    int n1 = middleValue - left + 1;
    int n2 = right - middleValue;
    int* Left = new int[n1];
    int* Right = new int[n2];
    for (i = 0; i < n1; i++)
        Left[i] = array[left + i];
    for (j = 0; j < n2; j++)
        Right[j] = array[middleValue + 1 + j];
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2)
    {
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
    while (i < n1)
    {
        this->dominantCounter++;
        array[k] = Left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        this->dominantCounter++;
        array[k] = Right[j];
        j++;
        k++;
    }


}

void MergeSort::sort(int* array, int left, int right)
{
    right--;
    if (left < right)
    {
        int middleValue = left + (right - left) / 2;
        
        sort(array, left, middleValue);
        sort(array, middleValue + 1, right);
        merge(array, left, middleValue, right);
    }
}

int MergeSort::printDominantCounter()
{
    return this->dominantCounter;
}
