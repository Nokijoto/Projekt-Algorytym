#pragma once
class QuickSort
{
private:
	int quickelem=0;
	void quick_swap(int* a, int* b);
public:

	float printDominantCouner()
	{
		return this->quickelem;
	}
	void sort(int* array, int l, int r);
};

