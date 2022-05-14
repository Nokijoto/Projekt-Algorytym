#include "Dijkstra.h"
#include <queue>
#include <iostream>
#include "deque.h"

using namespace std;

Dijkstra::Dijkstra(int size)
{
	this->size = size;
	dq::deque kolejka(size);
	neighborhoodList=new int* [size];
	lenghtArray = new int*[size];
	previousArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		lenghtArray[i] = new int[size];
		neighborhoodList[i] = new int[size];
	}
	cout << "Utworzono pusta macierz sasiedztwa o rozmiarze "<< size<<"\n";
	// wywo³anie wypelnienia macierzy
	fillMatrix(size);
};
void Dijkstra::fillMatrix(int size)
{
	int vertex = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; i++)
		{
			while (vertex == 0 || vertex == 1)
			{
				cout << "Podaj czy wierzcholek " << i << " laczy sie z jednym z tych wierzcholkow\n(0-nie, 1-tak)\n";
				cin >> vertex;
			}
			neighborhoodList[i][j] = vertex;
		}

	}
	printMatrix();
}
void Dijkstra::printMatrix()
{
	cout << "\nPodana macierz wyglada nastepujaco\n";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; i++)
		{
			cout << neighborhoodList[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n";
}

void Dijkstra::find()
{
	
	

	
























	//int lenght = 0;
	//int nodes = 0;
	//int u = 0;
	//int s = 0;
	//int* d = new int[u];
	//int* p = new int[u];
	//int connections;
	//queue<int> nodesQueue;
	//for (int i; i<=nodes;i++)
	//{
	//	d[i] = 2147483647;
	//	p[i] = -1;
	//}
	//d[s] = 0;
	///*
	// dodanie wszystkich wierzcho³ków do kolejki
	//*/

	//while (!nodesQueue.empty())
	//{
	//	int temp=nodesQueue.front();
	//	nodesQueue.pop();
	//	for ( int i = 0; i < connections; i++)
	//	{
	//		if (d[i] > d[u] + w(u, v))
	//		{
	//			d[v] = d[u] + w(u, v);
	//				p[v] = u;
	//		}
	//	}

	//}
}

