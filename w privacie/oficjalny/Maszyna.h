#include <iostream>
using namespace std;

class CMaszyna
{
private :
    int numer_maszyn;
    int ilosc_maszyn;
    string rodzaj_maszyn;
public :
    CMaszyna(int,int,string);
    ~CMaszyna();
    void wpisz_ilosc_maszyn(int);
    void wpisz_rodzaj_maszyn(string);
    int wyswietl_ilosc_maszyn();
    string wyswietl_rodzaj_maszyn();

};
