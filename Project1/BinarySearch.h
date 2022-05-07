#pragma once

class BinarySearch
{
private:
	int temp;
	int i;
	int zmiana;
	int zdarzenia_elem;

public:
	int search(int * arr, int l, int r, int x);
	void show(int * array, int size);



};