#include <iostream>
using namespace std;


class CWyrob;
class CMaszyna;

class CFilia
{
private :
    int numer;
    string nazwa;
    int licznik_wyrobow;
    CWyrob*tablica_wyrobow[100];
    int licznik_maszyn;
    CMaszyna*tablica_maszyn[100];
public :
//MEODY DOTYCZACE FILII-KLASY GLOWNEJ
    CFilia(int ,string);
    ~CFilia();
    void modyfikuj_filie(string);
    void modyfikuj_nr_filii(int);
    int wyswietl_numer_filii();
    string wyswietl_nazwe_filii();

//METODY DOTYCZACE WYROBU
    void stworz_wyrob(int,int,string);
    void modyfikuj_wyrob(int,int,int,string);
    void kasuj_wyrob(int);
    int wyswietl_ilosc_wyrobu(int);
    string wyswietl_rodzaj_wyrobu(int);
    int wyswietl_cene_wyrobu(int);
    int porownaj_licznik_wyrobow();
//METODY DOTYCZACE MASZYNY
    void stworz_maszyne(int ,string );
    void modyfikuj_maszyne(int,int ,string );
    void kasuj_maszyne(int);
    int wyswietl_maszyne_ilosc(int);
    string wyswietl_maszyne_rodzaj(int);
    int porownaj_licznik_maszyn();



};
