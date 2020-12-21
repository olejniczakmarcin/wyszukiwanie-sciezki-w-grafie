#pragma once
template<class T>
class wektor
{
    T* m_array;
    int m_size;
public:
    wektor();
    void push_backk(const T& v);
    ~wektor();
    T& operator[](int index);
    int size();
};

template<class T> wektor<T>::wektor() :m_array(nullptr), m_size(0) {}
template<class T> void wektor<T>::push_backk(const T& v)
{
    T* new_array = new T[m_size + 1]; ///nowa tablica wieksza o 1 wiecej w celu dodania nowej wart.
    if (m_array)
    {
        for (int i = 0; i < m_size; i++)
            new_array[i] = m_array[i];
        delete[] m_array;
    }
    new_array[m_size] = v;
    m_array = new_array;
    m_size++;
}
template<class T> wektor<T>::~wektor()   ///destruktor niszczacy tablice
{
    if (m_array)
    {
        delete[] m_array;
    }
}
template<class T> T& wektor<T>::operator[](int index)    ///przeladowany operator [] dla wektora
{
    return m_array[index];
}
template<class T> int wektor<T>::size()
{
    return m_size;
}