#include <iostream>

using namespace std;
class CFilia;
class CWyrob
{
friend class CFilia;
private :
string nazwa_wyrobu;
int ilosc_wyrobu;
public :

    CWyrob(int a,string n);
    ~CWyrob();
    void wpisz_nazwe_wyrobu(string n);
    void wpisz_ilosc_wyrobow(int a);
    string wyswietl_nazwe_wyrobu();
    int wyswietl_ilosc_wyrobow();
};
