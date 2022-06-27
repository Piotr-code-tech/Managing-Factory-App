#include <iostream>
#include "Maszyna.h"
using namespace std;

CMaszyna ::CMaszyna(int a, string n)
{
a = ilosc_maszyny;
n = nazwa_maszyny;
};

CMaszyna ::~CMaszyna()
{

};

void CMaszyna ::wpisz_ilosc_maszyn(int a)
{
    a = ilosc_maszyny;
}

void CMaszyna ::wpisz_nazwe_maszyny(string n)
{
    n = nazwa_maszyny;
}

int CMaszyna ::wyswietl_ilosc_maszyn()
{
    return (ilosc_maszyny);
}

string CMaszyna ::wyswietl_nazwe_maszyny()
{
    return(nazwa_maszyny);
}
