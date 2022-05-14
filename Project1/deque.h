#pragma once
namespace dq{
class deque
{
private:
    const int size;     // rozmiar tablicy
    int head = 0;       // indeks pocz¹tku kolejki
    int tail = 0;       // indeks koñca kolejki
    char* deQ;         // tablica dynamiczna
public:
    deque(int); // konstruktor
    ~deque() { delete[] deQ; }

    bool empty();
    bool filled();

    void enqueue_head(char element);    //dodawanie elementu na poczatku kolejki
    void enqueue_tail(char element);    //dodawanie elementu na koncu kolejki
    char dequeue_head();                //usuwanie elementu z poczatku kolejki
    char dequeue_tail();                //usuwanie elementu z koñca kolejki

    char front();                       //zwraca element znajdujacy siê na pocza¹tku kolejki
    char back();                        //zwraca element znajdujacy siê na koñcu kolejki
    void print();
};
}