#include "deque.h"
#include <iostream>
using namespace std;
using namespace dq;

deque::deque(int rozmiar) :
	size(rozmiar),
	deQ(new char[size])
{}

bool deque::empty() {
	return (head == tail) ? true : false;
	/*if(head ==tail)
	{
		return true;
	}
	else
	{
		return false;
	}*/
}

bool deque::filled() {
	if (head == tail + 1 || (head == 0 && tail == size - 1))
	{
		return true;
	}
	return false;
}

void deque::enqueue_head(char element) {		//dodawanie elementu na pocz¹tku kolejki
	if (filled())
	{
		cout << "\nBlad przepelnienia\n";
		return;
	}
	else
	{
		if (head == 0)
		{
			head = size;
			deQ[head] = element;
		}
		else
		{
			head--;
			deQ[head] = element;
		}
	}
}

void deque::enqueue_tail(char element) {		//dodawanie elementu na koncu kolejki 

	if (filled())
	{
		cout << "\nBlad przepelnienia\n";
		return;
	}
	else
	{
		deQ[tail] = element;
		if (tail == size - 1)
		{
			tail = 0;
		}
		else
		{
			tail++;
		}
	}
}

char deque::dequeue_head()		//usuwanie elementu z pocz¹tku kolejki
{
	if (empty())
	{
		cout << "\nBlad niedomiaru\n";
		return '\0';
	}
	else
	{
		char temp = deQ[head];
		if (head == size)
		{
			head = 0;
		}
		else
		{
			head++;
		}
		return temp;
	}

}

char deque::dequeue_tail() {		//usuwanie elementu z koñca kolejki
	if (empty())
	{
		cout << "\nBlad niedomiaru\n";
		return '\0';
	}
	else
	{

		if (tail == 0)
		{
			tail = size - 1;
		}
		else
		{
			tail--;
		}
		return deQ[tail];
	}
}

char deque::front() {
	return deQ[head];
}

char deque::back() {
	//return(tail == 0) ? deQ[size - 1] : deQ[tail - 1];
	if (tail == 0)
		return deQ[size - 1];
	return  deQ[tail - 1];
}

void deque::print() {
	int i = head;
	if (head < tail)
		while (i < tail)
			cout << deQ[i++] << ' ';

	if (tail < head)
	{
		while (i < size)
			cout << deQ[i++] << ' ';
		i = 0;
		while (i < tail) cout << deQ[i++] << ' ';
	}
	cout << endl;
}