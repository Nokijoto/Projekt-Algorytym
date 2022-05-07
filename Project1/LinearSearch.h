#pragma once

class LinearSearch
{
private:
	int temp;
	int i;
	int zmiana;
	int zdarzenia_elem;

public:
	void search(int * ArrayToSort, int size);
	void show(int * ArrayToSort, int size);


};