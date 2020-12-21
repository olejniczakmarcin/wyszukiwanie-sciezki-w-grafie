#pragma once
#include "Node.h"
template<class T>
class lista
{
    node<T>* first;
    node<T>* last;
    int m_size;///rozmiar listy
public:
    node<T>* get_first();
    lista();
    void push_backk(T& v);
    ~lista();
};

template<class T> node<T>* lista<T>::get_first()     ///metoda zwracajaca first'a
{
    return first;
}
template<class T> lista<T>::lista() :first(nullptr), last(nullptr), m_size(0) {}
template<class T> void lista<T>::push_backk(T& v)     /// metoda dodajaca
{
    node<T>* nowy_wezel = new node<T>(v);
    if (m_size == 0)
    {
        first = nowy_wezel;
        last = nowy_wezel;
    }
    else
    {
        nowy_wezel->privius = last;
        last->next = nowy_wezel;
        last = nowy_wezel;
    }
    m_size++;
}
template<class T> lista<T>::~lista()
{
    node<T>* current = first;
    while (current)
    {
        node<T>* current1 = current->next;
        delete current;
        current = current1;
    }
}