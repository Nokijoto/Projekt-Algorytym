#include <iostream>
#include "BinarySearch.h"
using namespace std;

int BinarySearch::search(int *L, int Y, int pocz, int kon)
{

    if (pocz > kon) {
        return -1;
    }

    int sr;
    sr = (pocz + kon) / 2;
    if (Y == L[sr])
    {

        return sr;
    }
    if (Y < L[sr])
    {
        this->dominantCounter++;
        return search(L, Y, pocz, sr - 1);
    }
    else
    {
        this->dominantCounter++;
        return search(L, Y, sr + 1, kon);
       
    }
        

}

int BinarySearch::printDominantCounter()
{
    return this->dominantCounter;
}
