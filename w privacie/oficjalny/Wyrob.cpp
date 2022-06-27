#include <iostream>
#include "Wyrob.h"
using namespace std;


CWyrob ::CWyrob(int k,int a,int c, string n)
{
    k = numer_wyrobu;
    a = ilosc_wyrobu;
    c = cena_wyrobu;
    n = nazwa_wyrobu;
}

CWyrob ::~CWyrob()
{

}

void CWyrob ::wpisz_ilosc_wyrobu(int a)
{
    ilosc_wyrobu = a;
}

void CWyrob ::wpisz_nazwe_wyrobu(string n)
{
    nazwa_wyrobu = n;
}

void CWyrob :: wpisz_cene_wyrobu(int k)
{
    cena_wyrobu = k;
}

int CWyrob ::wyswietl_licznosc_wyrobu()
{
    return ilosc_wyrobu ;
}

string CWyrob ::wyswietl_NAZWE_wyrobu()
{
    return nazwa_wyrobu ;
}

int CWyrob ::wyswietl_cene_wyrobu()
{
    return cena_wyrobu;
}
