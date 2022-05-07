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
        return sr;
    if (Y < L[sr])
        return search(L, Y, pocz, sr - 1);

    else
        return search(L, Y, sr + 1, kon);

}

int BinarySearch::printDominantCouner()
{
    return this->dominantCounter;
}


//{
//    if (r >= l) {
//        int mid = l + (r - l) / 2;
//
//        // If the element is present at the middle
//        // itself
//        if (arr[mid] == x)
//            return mid;
//
//        // If element is smaller than mid, then
//        // it can only be present in left subarray
//        if (arr[mid] > x)
//            return search(arr, l, mid - 1, x);
//
//        // Else the element can only be present
//        // in right subarray
//        return search(arr, mid + 1, r, x);
//    }
//
//    // We reach here when element is not
//    // present in array
//    return -1;
//}
