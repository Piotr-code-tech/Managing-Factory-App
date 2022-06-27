#include <iostream>
#include "Filia.h"
#include "Wyrob.h"
#include "Maszyna.h"
using namespace std;
//METODY DO KLASY FILIA
CFilia :: CFilia(int a, string n)
{
numer = a;
nazwa = n;
licznik_maszyn =0;
licznik_wyrobow = 0;
}

CFilia :: ~CFilia()
{

}

void CFilia :: modyfikuj_filie(string n)
{
    nazwa = n;
}

void CFilia :: modyfikuj_nr_filii(int a)
{
    numer = a;
}

int CFilia :: wyswietl_numer_filii()
{
    return numer;
}

string CFilia ::wyswietl_nazwe_filii()
{
    return nazwa;
}


//METODY ODNOSZACE DO KLASY WYROB

void CFilia :: stworz_wyrob(int a,int c,string n)
{
    tablica_wyrobow[licznik_wyrobow] = new CWyrob(licznik_wyrobow,a,c,n);//TWORZYMY OBIEKT DYNAMICZNY - WYROB I WPISUJEMY DANE ZA POMOCA KONSTRUKTORA
    tablica_wyrobow[licznik_wyrobow]->wpisz_ilosc_wyrobu(a);
    tablica_wyrobow[licznik_wyrobow]->wpisz_cene_wyrobu(c);
    tablica_wyrobow[licznik_wyrobow]->wpisz_nazwe_wyrobu(n);
    licznik_wyrobow++;
}



void CFilia ::modyfikuj_wyrob(int a,int c,int m,string n)
{
    tablica_wyrobow[m]->wpisz_ilosc_wyrobu(a);
    tablica_wyrobow[m]->wpisz_cene_wyrobu(c);
    tablica_wyrobow[m]->wpisz_nazwe_wyrobu(n);
}

void CFilia ::kasuj_wyrob(int a)
{

    delete tablica_wyrobow[a];//KASYUJEMY OBIEKT DYNAMICZNY O NUMERZE a
    tablica_wyrobow[a] = NULL;
    for(int n = a;licznik_wyrobow-1>n;n++)  //MECHANIZM DO PRZESOWANIA OBIEKTOW W TABLICY
    {
     tablica_wyrobow[n] = tablica_wyrobow[n+1];
    }
    licznik_wyrobow--;

}

int CFilia ::porownaj_licznik_wyrobow()
{
return licznik_wyrobow;
}

int CFilia ::wyswietl_ilosc_wyrobu(int a)
{
    if(tablica_wyrobow[a]!=0)  //MECHANIZM KTORY BIERZE POD UWAGE WSKAZNIKI ROZNE OD 0
    {
     return tablica_wyrobow[a]->wyswietl_licznosc_wyrobu();
    }
}

string CFilia ::wyswietl_rodzaj_wyrobu(int a)
{
    if(tablica_wyrobow[a]!= 0)
    {
       return tablica_wyrobow[a]->wyswietl_NAZWE_wyrobu();
    }
}

int CFilia ::wyswietl_cene_wyrobu(int a)
{
    if(tablica_wyrobow[a]!=0)
    {
        return tablica_wyrobow[a]->wyswietl_cene_wyrobu();
    }
}

//METODY DOTYCZACE MASZYNY

void CFilia ::stworz_maszyne(int il,string na)
{
    tablica_maszyn[licznik_maszyn] = new CMaszyna(licznik_maszyn,il,na);
    tablica_maszyn[licznik_maszyn]->wpisz_ilosc_maszyn(il);
    tablica_maszyn[licznik_maszyn]->wpisz_rodzaj_maszyn(na);
    licznik_maszyn++;
}



void CFilia ::modyfikuj_maszyne(int nr,int il,string na)
{
    tablica_maszyn[nr]->wpisz_ilosc_maszyn(il);
    tablica_maszyn[nr]->wpisz_rodzaj_maszyn(na);
}

void CFilia ::kasuj_maszyne(int nr)
{
 delete tablica_maszyn[nr];
 tablica_maszyn[nr] = NULL;
 for(int n = nr;licznik_maszyn-1>n;n++)
    {
     tablica_maszyn[n] = tablica_maszyn[n+1];
    }
 licznik_maszyn--;
}

int CFilia::wyswietl_maszyne_ilosc(int a)
{
    if(tablica_maszyn[a]!=0)
       {
        return tablica_maszyn[a]->wyswietl_ilosc_maszyn();
       }

}

string CFilia ::wyswietl_maszyne_rodzaj(int a)
{
    if(tablica_maszyn[a]!=0)
    {
      return tablica_maszyn[a]->wyswietl_rodzaj_maszyn();
    }

}

int CFilia ::porownaj_licznik_maszyn()
{
    return licznik_maszyn;
}

