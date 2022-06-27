#include <iostream>
using namespace std;

class CWyrob
{
private :
    int numer_wyrobu;
    int ilosc_wyrobu;
    int cena_wyrobu;
    string nazwa_wyrobu;

public :
    CWyrob(int,int,int,string);
    ~CWyrob();
    int wyswietl_licznosc_wyrobu();
    string wyswietl_NAZWE_wyrobu();
    int wyswietl_cene_wyrobu();
    void wpisz_ilosc_wyrobu(int);
    void wpisz_nazwe_wyrobu(string);
    void wpisz_cene_wyrobu(int);

};
