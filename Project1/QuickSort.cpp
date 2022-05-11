#include "QuickSort.h"

void QuickSort::quick_swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void QuickSort::sort(int* tab, int lewy, int prawy)
{
	if (prawy <= lewy) return;

	int i = lewy - 1, j = prawy + 1,
		pivot = tab[(lewy + prawy) / 2]; //wybieramy punkt odniesienia

	while (1)
	{
		//szukam elementu wiekszego lub rownego piwot stojacego
		//po prawej stronie wartosci pivot
		while (pivot > tab[++i]);

		//szukam elementu mniejszego lub rownego pivot stojacego
		//po lewej stronie wartosci pivot
		while (pivot < tab[--j]);

		//jesli liczniki sie nie minely to zamieñ elementy ze soba
		//stojace po niewlasciwej stronie elementu pivot
		if (i <= j)
			//funkcja swap zamienia wartosciami tab[i] z tab[j]
			quick_swap(&tab[i], &tab[j]);
		else
			break;
	}

	if (j > lewy)
		sort(tab, lewy, j);
	if (i < prawy)
		sort(tab, i, prawy);
}
