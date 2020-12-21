#pragma once
#include "Vector.h"
#include "Node.h"
#include "Verticles.h"

class graf
{
    wektor<wierzcholek*> wierzcholki;     /// wektor wierzcholkow
    bool czy_istnieje_sciezka_2(wierzcholek* poczatek, wierzcholek* koniec);
public:
    void dodaj_wierzcholek();
    void dodaj_luk(int od, int koniec);
    ~graf();
    bool czy_istnieje_sciezka(int poczatek, int koniec);
};

bool graf::czy_istnieje_sciezka_2(wierzcholek* poczatek, wierzcholek* koniec)
{
    if (poczatek == koniec)
        return true;
    if (poczatek->odwiedzony)
        return false;
    poczatek->odwiedzony = true;
    for (node<wierzcholek*>* aktualny = poczatek->nastepniki.get_first(); aktualny; aktualny = aktualny->get_next())
    {
        wierzcholek* v = aktualny->get_val();
        if (czy_istnieje_sciezka_2(v, koniec))
            return true;

    }
    return false;
}
bool graf::czy_istnieje_sciezka(int poczatek, int koniec)
{
    for (int i = 0; i < wierzcholki.size(); i++)
    {
        wierzcholek* v = wierzcholki[i];
        v->odwiedzony = false;
    }
    return czy_istnieje_sciezka_2(wierzcholki[poczatek], wierzcholki[koniec]);
}
void graf::dodaj_wierzcholek()
{
    wierzcholek* nowy = new wierzcholek;
    nowy->index = wierzcholki.size();
    wierzcholki.push_backk(nowy);
}
void graf::dodaj_luk(int od, int koniec)   /// metoda towrzaca polczenia
{
    wierzcholki[od]->nastepniki.push_backk(wierzcholki[koniec]);
}
graf::~graf() /// destruktor
{
    for (int i = 0; i < wierzcholki.size(); i++)
    {
        delete wierzcholki[i];
    }
}