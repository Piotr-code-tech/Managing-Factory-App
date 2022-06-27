#include <iostream>
#include "Wyrob.h"
using namespace std;

CWyrob :: CWyrob(int a,string n)
{
a = ilosc_wyrobu;
n = nazwa_wyrobu;
};

CWyrob :: ~CWyrob()
{

};

string CWyrob :: wyswietl_nazwe_wyrobu()
{
    return (nazwa_wyrobu);
}

int CWyrob :: wyswietl_ilosc_wyrobow()
{
    return (ilosc_wyrobu);
}

void CWyrob :: wpisz_ilosc_wyrobow(int a)
{
    a = ilosc_wyrobu;
}

void CWyrob ::wpisz_nazwe_wyrobu(string n)
{
    n = nazwa_wyrobu;
}
