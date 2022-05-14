#pragma once
#include "deque.h"



class Dijkstra
{
public:
	
	Dijkstra(int size);
	void find();
private:
	int size = 0;
	int** neighborhoodList;
	int** lenghtArray;
	int* previousArray;
	void fillMatrix(int size);
	void printMatrix();
};

