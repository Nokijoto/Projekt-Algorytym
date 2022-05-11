#pragma once

class BinarySearch
{
private:
	int dominantCounter = 0;
public:
	int search(int* L, int Y, int pocz, int kon);
	int printDominantCounter();
};