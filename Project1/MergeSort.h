#pragma once


class MergeSort
{
private:
	int dominantCounter = 0;
	bool validate();
	void merge(int* array, int left, int middleValue, int right);
public:
	void sort(int* array, int left, int right);
	int printDominantCounter();



};


