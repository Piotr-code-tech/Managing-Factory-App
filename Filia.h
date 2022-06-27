#include <iostream>


using namespace std;
class CWyrob;
class CMaszyna;

class CFilia
{
private :
    int numer_filii;
    string nazwa;
    int licznik_wyrobow = 0;
    int licznik_maszyn = 0;
    CWyrob* tablica_wyrobow[100];
    CMaszyna* tablica_maszyn[100];


public :

    CFilia(int a,string n);
    ~CFilia();
    int wyswietl_numer_filii();
    string wyswietl_nazwe_filii();
    void modyfikuj_filie(string n);

    void dodaj_wyrob(int a,string n);
    int wyswietl_ilosc_wyrobu();
    string wyswietl_nazwe_wyrobu();
    void kasuj_wyrob();

    void dodaj_maszyne(int a,string n);
    string wyswietl_nazwe_maszyny();
    int wyswietl_ilosc_maszyny();
    void kasuj_maszyne();

};
