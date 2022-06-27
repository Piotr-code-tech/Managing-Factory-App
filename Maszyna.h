#include <iostream>
using namespace std;
class CMaszyna
{
private :
    string nazwa_maszyny;
    int ilosc_maszyny;
public :
    CMaszyna(int a,string n);
    ~CMaszyna();
    void wpisz_ilosc_maszyn(int a);
    void wpisz_nazwe_maszyny(string n);
    string wyswietl_nazwe_maszyny();
    int wyswietl_ilosc_maszyn();
};
