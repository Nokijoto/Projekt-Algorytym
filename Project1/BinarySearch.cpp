#include <iostream>
#include "BinarySearch.h"
using namespace std;

void BinarySearch::search(int ArrayToSort[], int size)
{

	int i, n, x, l, p, s;
	int a[100];
	l = 0;
	p = n - 1;
	while (l <= p)
	{
		s = (l + p) / 2;

		if (a[s] == x)
		{
			//podaj wynik
			cout<<"Odnaleziono element %d pod indeksem %d\n"<< x<<" " << s;
			//zakoncz program
			return;
		}

		if (a[s] < x)
			l = s + 1;
		else
			p = s - 1;
	}
	cout << "Nie znalezino szukanego elementu" << endl;
}

void BinarySearch::show(int ArrayToSort[], int size)
{
	
}
