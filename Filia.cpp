#include <iostream>
#include "Filia.h"
#include "Wyrob.h"
#include "Maszyna.h"

using namespace std;





CFilia :: CFilia(int a,string n)  //konstruktor do nadawania wartosci poczatkowych obiektom
{
a = numer_filii;
n = nazwa;
}

CFilia :: ~CFilia()
{

}

int CFilia :: wyswietl_numer_filii()
{
return numer_filii;

}

string CFilia :: wyswietl_nazwe_filii()
{
return nazwa;
}

void CFilia :: modyfikuj_filie(string n)
{
    nazwa = n;
}




//METODY DOTYCZACE WYROBU

void CFilia :: dodaj_wyrob(int a,string n )
{
int liczba;
string rodzaj;
tablica_wyrobow[licznik_wyrobow] = new CWyrob(liczba,rodzaj);
tablica_wyrobow[licznik_wyrobow] -> wpisz_ilosc_wyrobow(liczba);
tablica_wyrobow[licznik_wyrobow] -> wpisz_nazwe_wyrobu(rodzaj);
}

int CFilia :: wyswietl_ilosc_wyrobu()
{
int i;
for(i = 0;i<licznik_wyrobow;i++)
{
    cout <<"SZTUK" << tablica_wyrobow[i]->wyswietl_ilosc_wyrobow() << endl;
}
}

string CFilia ::wyswietl_nazwe_wyrobu()
{
int i;
for(i = 0;i<licznik_wyrobow;i++)
{
    cout << i+1 << "." << tablica_wyrobow[i]->wyswietl_nazwe_wyrobu() << endl;
}
}


void CFilia ::kasuj_wyrob()
{

}

//METODY DOTYCZACE MASZYNY

void CFilia ::dodaj_maszyne(int a,string n )
{
int ilosc;
string rodzaj;
tablica_maszyn[licznik_maszyn] = new CMaszyna(ilosc,rodzaj);
tablica_maszyn[licznik_maszyn]->wpisz_nazwe_maszyny(rodzaj);
tablica_maszyn[licznik_maszyn]->wpisz_ilosc_maszyn(ilosc);
licznik_maszyn++;
}

string CFilia ::wyswietl_nazwe_maszyny()
{
int i;
for(i = 0;i<licznik_maszyn;i++)
{
    cout << i+1 << "." << tablica_maszyn[i]->wyswietl_nazwe_maszyny() << endl;
}
}

int CFilia ::wyswietl_ilosc_maszyny()
{
int i;
for(i = 0;i<licznik_maszyn;i++)
{
    cout <<"SZTUK" << tablica_maszyn[i]->wyswietl_ilosc_maszyn() << endl;
}
}



void CFilia ::kasuj_maszyne()
{

}
