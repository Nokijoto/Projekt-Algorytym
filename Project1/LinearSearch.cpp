#include "LinearSearch.h"
#include <iostream>

int LinearSearch::search(int searched,int* ArrayToSort, int size)
{
	for (int i = 0; i <= size; i++)
	{
		this->dominantCounter++;
		if (ArrayToSort[i] == searched)
		{
			return i;
		}
	}
	return -1;

}

int LinearSearch::printDominantCounter()
{
	return this->dominantCounter;
}
