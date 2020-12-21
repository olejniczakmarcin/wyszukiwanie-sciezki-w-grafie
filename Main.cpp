#include <iostream>
#include "Graph.h"
using namespace std;

int main()
{
    graf g;
    g.dodaj_wierzcholek();
    g.dodaj_wierzcholek();
    g.dodaj_wierzcholek();
    g.dodaj_wierzcholek();
    g.dodaj_luk(0, 1);
    g.dodaj_luk(1, 2);
    g.dodaj_luk(3, 2);
    g.dodaj_luk(2, 3);
    g.dodaj_luk(0, 2);
    if (g.czy_istnieje_sciezka(2, 0) == 1)
        cout << "istnieje" << endl;
    else
        cout << "nie istnieje" << endl;
    if (g.czy_istnieje_sciezka(1, 3) == 1)
        cout << "istnieje" << endl;
    else
        cout << "nie istnieje" << endl;
    if (g.czy_istnieje_sciezka(0, 3) == 1)
        cout << "istnieje" << endl;
    else
        cout << "nie istnieje" << endl;
    return 0;
}