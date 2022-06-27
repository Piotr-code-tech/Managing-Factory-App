#include <iostream>
#include "Maszyna.h"
using namespace std;

CMaszyna :: CMaszyna(int n,int i,string a)
{
    n = numer_maszyn;
    i = ilosc_maszyn;
    a = rodzaj_maszyn;
}

CMaszyna ::~CMaszyna()
{

}

void CMaszyna ::wpisz_ilosc_maszyn(int i)
{
    ilosc_maszyn = i;
}

void CMaszyna ::wpisz_rodzaj_maszyn(string a)
{
    rodzaj_maszyn = a;
}

int CMaszyna ::wyswietl_ilosc_maszyn()
{
    return ilosc_maszyn;
}

string CMaszyna ::wyswietl_rodzaj_maszyn()
{
    return rodzaj_maszyn;
}
