#pragma once
#include "List.h"
class wierzcholek
{
    lista<wierzcholek*> nastepniki;    /// lista nastepnikow typu wierzcholek
    int index;
    bool odwiedzony;        /// pomocnicza zmienna ktora bedzie sygnalizowac odwiedzenie
    friend class graf;
};