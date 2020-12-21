#pragma once
template<class T> class lista;
template<class T> class node
{
    node<T>* next;
    node<T>* privius;
    T m_val;
public:
    node<T>* get_next();
    T& get_val();
    node(const T& v);
    friend class lista<T>;
};

template<class T> node<T>* node<T>::get_next()  /// metoda zwracajaca next'a
{
    return next;
}
template<class T> T& node<T>::get_val()    ///metoda zwracajaca wartosc wezla
{
    return m_val;
}
template<class T> node<T>::node(const T& v) :m_val(v), next(nullptr), privius(nullptr) {}