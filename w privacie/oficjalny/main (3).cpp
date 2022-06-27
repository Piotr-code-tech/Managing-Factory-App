#include <iostream>
#include<string>
#include "Filia.h"
#include "Wyrob.h"
#include "Maszyna.h"
using namespace std;
//TWORZYMY TABLICE FILII
CFilia*tablica_filii[100];
int licznik_filii=0;
int main()
{
string pozwolenie; // zmienna do petli do while pozwalajaca na wznowienie programu
//WCHODZIMY W PETLE KTORA ZAKONCZY SIE GDY ZADECYDUJEMY O TYM NA KONCU
do
{
// WYSWIETLAMY GLOWNE FUNKCJE KTORE MOZEMY WYKONAC W MENU
cout << " __________________________"<<endl;
cout << "WITAMY W MENU !            *"<<endl;
cout << "1 - DODANIE NOWEJ FILII    *"<<endl;
cout << "2 - MODYFIKACJA FILII      *"<<endl;
cout << "3 - WYSWIETLANIE OBIEKTU   *"<<endl;
cout << "4 - KASOWANIE OBIEKTU      *"<<endl;
cout << " __________________________*"<<endl;
cout << "PROGRAM WYKONANY PRZEZ PIOTRA KOWALSKIEGO" << endl;
int u;//DEKLARUJEMY ZMIENNA LOKALNA ODPOWIEDZIALNA ZA WYBOR W GLOWNYM MENU
cout << endl <<"WYBIERZ OPCJE Z MENU :";
cin >> u ;
	switch (u)
	{
		case 1:
			{
				string zgoda ; //zmienna lokalna do petli pozwalajaca na ponowne tworzenie obiektu
				do {
                            cout <<endl << "TWORZENIE NOWEJ FILII" <<endl;
							cout << endl <<"PODAJ NAZWE NOWEJ FILII : ";
							string nazwa;
							cin >> nazwa;
							cout << endl;
							tablica_filii[licznik_filii] = new CFilia(licznik_filii,nazwa);//TWORZYMY OBIEKT DYNAMICZNY KLASY GLOWNEJ
							cout << "ILE NOWYCH WYROBOW CHCESZ STWORZYC W TEJ FILII(PODAJ LICZBE) :";
							int lw;
							cin >> lw ;
							cout << endl;
							for(int t =0;t<lw;t++) // PETLA WYKONUJACA SIE TYLE RAZY ILE PODALISMY WYROBOW,TWORZYMY TYLE NOWYCH OBIEKTOW DYNAMICZNYCH
                                {
                                        cout << "WYROB NR." <<t+1<<endl;
                                        cout << "PODAJ ILOSC SZTUK WYROBU:";
                                        int a;
                                        cin >> a;
                                        cout <<endl << "PODAJ CENE TEGO WYROBU :";
                                        int c;
                                        cin >> c;
                                        cout <<endl << "PODAJ NAZWE TEGO WYROBU :";
                                        string n;
                                        cin >> n;
                                        cout << endl;
                                        tablica_filii[licznik_filii]->stworz_wyrob(a,c,n);//TWORZYMY WYROB DO TEJ FILII I WPISUJEMY WARTOSCI WPISANE WYZEJ
                                }
                            cout << "ILE NOWYCH MASZYN CHCESZ STWORZYC DO TEJ FILII(PODAJ LICZBE) :";
                            int lm;
                            cin >> lm;
                            cout << endl;
                            for(int i =0;i<lm;i++)  // PETLA WYKONUJACA SIE TYLE RAZY ILE PODALISMY MASZYN,TWORZYMY TYLE NOWYCH OBIEKTOW DYNAMICZNYCH
                                {
                                        cout << "MASZYNA NR."<<i+1<<endl;
                                        cout << "PODAJ ILOSC SZTUK TEJ MASZYNY W FILII: ";
                                        int im;
                                        cin >> im;
                                        cout <<endl << "PODAJ NAZWE RODZAJU MASZYNY : ";
                                        string r;
                                        cin >> r;
                                        cout << endl;
                                        tablica_filii[licznik_filii]->stworz_maszyne(im,r);//TWORZYMY MASZYNE DO TEJ FILII I WPISUJEMY WYZEJ PODANE WARTOSCI
                                }
                licznik_filii ++; //ZWIEKSZAMY LICZNIK DO ZLICZANIA ILE OBIEKTOW KLASY FILIA STWORZYLISMY
				cout << "CZY CHCESZ JESZCZE COS STWORZYC (tak/nie) :";
				cin >> zgoda;
                    }while(zgoda == "tak");
					break;
			}
		case 2:
			{
				string zgoda;
				int g;
				do {
                    cout <<endl << "MODYFIKACJA DANYCH" <<endl;
                    cout << "1.EDYTUJ NAZWE WYBRANEJ FILII" <<endl;
                    cout << "2.EDYTUJ WYROBY DANEJ FILII" << endl;
                    cout << "3.EDYTUJ MASZYNY DANEJ FILII" << endl;
                    cout << "4.DODAJ WYROBY DO ISTNIEJACEJ FILII" << endl;
                    cout << "5.DODAJ MASZYNY DO ISTNIEJACEJ FILII" << endl;
                    cout << "WYBIERZ CO CHCESZ EDYTOWAC: " ;
                    cin >> g;
                    switch (g)
                    {
							case 1 :
						{
						    for(int i=0;licznik_filii>i;i++)  //WYSWIETLAMY FILIE Z KTORYCH PO NUMERZE WYBIERZEMY KTORA CHCEMY EDYTOWAC
                            {
                                if(tablica_filii[i] != 0)
                                {
                                 cout <<tablica_filii[i]->wyswietl_numer_filii() << "." <<tablica_filii[i]->wyswietl_nazwe_filii() <<endl;
                                }
                            }
						    cout << "KTORA FILIE CHCESZ EDYTOWAC (PODAJ NUMER) :" << endl;
						    int n;
						    cin >> n;
						    cout << "PODAJ NOWA NAZWE FILII :";
						    string nazwa;
						    cin >> nazwa;
                            tablica_filii[n]->modyfikuj_filie(nazwa);//ZMIENIAMY NAZWE FILII O NUMERZE n W TABLICY NA NAZWE WPISANA DO ZMIENNEJ nazwa
						    break;
						}
							case 2 :
						{
							cout << "EDYTUJ WYROBY DANEJ FILII" << endl;
							for(int i=0;licznik_filii>i;i++) //WYSWIETLAMY WSZYSTKIE  FILIE
                            {
                                   if(tablica_filii[i] != 0)
                                {
                                    cout <<tablica_filii[i]->wyswietl_numer_filii() << "." <<tablica_filii[i]->wyswietl_nazwe_filii() <<endl;
                                }
                            }
							cout << "KTOREJ FILII WYROB CHCESZ EDYTOWAC: ";
							int nf;
							cin >> nf;
							cout << endl;
							int f ;
							f = tablica_filii[nf]->porownaj_licznik_wyrobow();//POBIERAMY LICZNIK WYROBOW Z KLASY FILIA
							for(int k = 0;f>k;k++) //WYSWIETLAMY WSZYSTKIE WYROBY PODANEJ FILII ZA POMOCA LICZNIKA POBRANEGO
                            {
                                cout << k << " NAZWA : " << tablica_filii[nf]->wyswietl_rodzaj_wyrobu(k);
                                cout << "   ILOSC : " << tablica_filii[nf]->wyswietl_ilosc_wyrobu(k);
                                cout << "   CENA : " << tablica_filii[nf]->wyswietl_cene_wyrobu(k) << endl;
                            }
                            cout << "KTORY WYROB CHCESZ EDYTOWAC : ";
                            int nw;
                            cin >> nw;
                            cout << endl << " PODAJ NOWA NAZWE WYROBU : ";
                            string n ;
                            cin >> n;
                            cout << endl << "PODAJ NOWA CENE WYROBU : ";
                            int c;
                            cin >> c;
                            cout << endl << "PODAJ NOWA ILOSC SZTUK WYROBU : ";
                            int il;
                            cin >> il;
                            cout << endl;
                            tablica_filii[nf]->modyfikuj_wyrob(il,c,nw,n);//ZMIENIAMY WARTOSCI PARAMETROW WYROBU PRZYPISANYCH NA POCZATKU NA INNE
							break;
						}
							case 3 :
						{
							cout << "EDYTUJ MASZYNY DANEJ FILII" << endl;
							for(int i =0; licznik_filii>i;i++)
                            {
                                   if(tablica_filii[i] != 0)
                                {
                                 cout <<tablica_filii[i]->wyswietl_numer_filii() << "." <<tablica_filii[i]->wyswietl_nazwe_filii() <<endl;
                                }
                            }
                            cout << "KTOREJ FILII MASZYNE CHCESZ EDYTOWAC :";
                            int nr;
                            cin >> nr;
                            cout << endl;
                            int f;
                            f = tablica_filii[nr]->porownaj_licznik_maszyn();//POBIERAMY LICZNIK MASZYN Z KLASY FILIA
                            for(int y = 0;f>y;y++) // DZIEKI LICZNIKOWI POBRANEMU LINIJKE WYZEJ MOZEMY WYSWIETLIC W PETLI MASZYNY
                            {
                                cout << y << "." << "RODZAJ : " << tablica_filii[nr]->wyswietl_maszyne_rodzaj(y);
                                cout << "   ILOSC : " << tablica_filii[nr]->wyswietl_maszyne_ilosc(y) << endl;
                            }
                            cout << "KTORA MASZYNE CHCESZ EDYTOWAC :";
                            int nm;
                            cin >> nm;
                            cout <<endl << "PODAJ NOWA NAZWE RODZAJU MASZYNY : ";
                            string na;
                            cin >> na;
                            cout << endl<< "PODAJ NOWA ILOSC SZTUK MASZYNY : ";
                            int im;
                            cin >> im;
                            cout << endl;
                            tablica_filii[nr]->modyfikuj_maszyne(nm,im,na);// WYZEJ WPISANE DANE S¥ ZAMIENIANE Z ISTNIEJACYMI DANYMI  MASZNY WYBRANEJ FILII
							break;
						}
                            case 4 :
                        {
                            cout <<"DODAJ WYROBY DO ISTNIEJACEJ FILII" << endl;
                            for(int i=0;licznik_filii>i;i++)
                            {
                                   if(tablica_filii[i] != 0)
                                        {
                                        cout <<tablica_filii[i]->wyswietl_numer_filii() << "." <<tablica_filii[i]->wyswietl_nazwe_filii() <<endl;
                                        }
                            }
                            cout << "DO KTOREJ FILII CHCESZ DODAC WYROB :";
                            int nf;
                            cin >> nf;
                            cout << endl << "PODAJ NAZWE WYROBU: ";
                            string n;
                            cin >> n;
                            cout << endl << "PODAJ ILOSC SZTUK WYROBU : ";
                            int il;
                            cin >> il ;
                            cout << endl << "PODAJ CENE WYROBU : ";
                            int c;
                            cin >> c;
                            tablica_filii[nf]->stworz_wyrob(il,c,n); //TWORZYMY NOWE WYROBY DO WYBRANEJ PRZEZ NAS FILII
                            cout << endl << "DODANO WYROB" << endl;
                            break;
                        }
                            case 5 :
                        {
                                    cout << "DODAJ MASZYNY DO ISTNIEJACEJ FILII:" << endl;
                                    for(int i=0;licznik_filii>i;i++)
                                        {
                                            if(tablica_filii[i] != 0)
                                            {
                                                cout <<tablica_filii[i]->wyswietl_numer_filii() << "." <<tablica_filii[i]->wyswietl_nazwe_filii() <<endl;
                                            }
                                        }
                                    cout << "DO KTOREJ FILII CHCESZ DODAC MASZYNE : ";
                                    int nr;
                                    cin >> nr;
                                    cout << endl << "PODAJ RODZAJ MASZYNY: ";
                                    string rm;
                                    cin >> rm;
                                    cout << endl << "PODAJ ILOSC SZTUK MASZYN : ";
                                    int im;
                                    cin >> im;
                                    cout << endl;
                                    tablica_filii[nr]->stworz_maszyne(im,rm); //TWORZYMY MASZYNY DO WYBRANEJ PRZEZ NAS FILII
                                    break;
                                }
                            default :
							break;
				}

				cout << "CZY CHCESZ JESZCZE COS EDYTOWAC(tak/nie) :";
				cin >> zgoda;
					}while(zgoda =="tak");
					break;
			}
		case 3:
			{
				string zgoda ;
				int q;

				do {
                    cout << endl << "WYSWIETLANIE DANYCH FILII" <<endl;
                    cout << "1.WYSWIETL WSZYSTKIE FILIE" <<endl;
                    cout << "2.WYSWIETL WYROBY DANEJ FILII" << endl;
                    cout << "3.WYSWIETL MASZYNY DANEJ FILII" << endl;
                    cout << "4.WYSWIETL MASZYNY I WYROBY DANEJ FILII" << endl;
                    cout << "5.WYSWIETL WSZYSTKIE FILIE ICH WYROBY I MASZYNY" <<endl;
                    cout << "KTORE DANE CHCESZ WYSWIETLIC: " ;
                    cin >> q;
                    switch (q)
                            {
                            case 1 :
                            {
                            cout <<endl<< "WYSWIETL WSZYSTKIE ISTNIEJACE FILIE" << endl;
                            for(int i=0;licznik_filii>i;i++)//WYSWIETLAMY FILIE W PETLI
                                {
                                if(tablica_filii[i] != 0)//MECHANIZM ZA POMOCA KTOREGO BIERZEMY POD UWAGE TYLKO NIE PUSTE "KOMÓRKI"
                                    {
                                    cout <<tablica_filii[i]->wyswietl_numer_filii() << "." <<tablica_filii[i]->wyswietl_nazwe_filii() <<endl;
                                    }
                                }
							break;
                            }
							case 2 :
                            {
							cout << "WYSWIETL WYROBY DLA DANEJ FILII :" << endl;
							for(int i=0;licznik_filii>i;i++)
                            {
                                   if(tablica_filii[i] != 0)
                                        {
                                        cout <<tablica_filii[i]->wyswietl_numer_filii() << "." <<tablica_filii[i]->wyswietl_nazwe_filii() <<endl;
                                        }
                            }
                            cout << "DLA KTOREJ FILII CHCESZ WYSWIETLIC WYROBY(PODAJ NUMER) :";
                            int nw;
                            cin >> nw;
                            cout << endl;
                            int f;
                            f = tablica_filii[nw]->porownaj_licznik_wyrobow(); //POBIERAMY LICZNIK WYROBOW DO PETLI
                            for(int x = 0;x<f;x++)
                            {
                                cout << x << "." << " NAZWA : " << tablica_filii[nw]->wyswietl_rodzaj_wyrobu(x);
                                cout << "   ILOSC : " << tablica_filii[nw]->wyswietl_ilosc_wyrobu(x);
                                cout << "   CENA : " << tablica_filii[nw]->wyswietl_cene_wyrobu(x) << endl;
                            }
							break;
                            }
                            case 3 :
                            {
							cout << "WYSWIETL MASZYNY DLA DANEJ FILII" << endl;
							for(int i=0;licznik_filii>i;i++)
                            {
                                   if(tablica_filii[i] != 0)
                                        {
                                        cout <<tablica_filii[i]->wyswietl_numer_filii() << "." <<tablica_filii[i]->wyswietl_nazwe_filii() <<endl;
                                        }
                            }
                            cout << "DLA KTOREJ FILII CHCESZ WYSWIETLIC MASZYNY :";
                            int nr;
                            cin >> nr;
                            cout << endl;
                            int g;
                            g = tablica_filii[nr]->porownaj_licznik_maszyn(); //POBIERAMY LICZNIK MASZYN DO PETLI
                            for(int y = 0;g>y;y++)
                            {
                                cout << y << "." << "RODZAJ : " << tablica_filii[nr]->wyswietl_maszyne_rodzaj(y);
                                cout << "   ILOSC : " << tablica_filii[nr]->wyswietl_maszyne_ilosc(y) << endl;
                            }
							break;
                            }
                            case 4 :
                            {
                            cout << "WYSWIETL MASZYNY I WYROBY DLA DANEJ FILII" << endl;
                            for(int i=0;licznik_filii>i;i++)
                            {
                                   if(tablica_filii[i] != 0)
                                        {
                                        cout <<tablica_filii[i]->wyswietl_numer_filii() << "." <<tablica_filii[i]->wyswietl_nazwe_filii() <<endl;
                                        }
                            }
                            cout << "DLA KTOREJ FILII CHCESZ WYSWIETLIC DANE (PODAJ NUMER) :";
                            int nf;
                            cin >> nf;
                            cout << endl << tablica_filii[nf]->wyswietl_nazwe_filii() << endl;
                            cout << "WYROBY : " << endl;
                            int fw;
                            fw = tablica_filii[nf]->porownaj_licznik_wyrobow();
                            for(int l = 0;fw>l;l++)
                            {
                                cout << l << "." << " NAZWA : " << tablica_filii[nf]->wyswietl_rodzaj_wyrobu(l);
                                cout << "   ILOSC : " << tablica_filii[nf]->wyswietl_ilosc_wyrobu(l);
                                cout << "   CENA : " << tablica_filii[nf]->wyswietl_cene_wyrobu(l) << endl;
                            }
                            cout << " MASZYNY : " << endl;
                            int fm;
                            fm = tablica_filii[nf]->porownaj_licznik_maszyn();
                            for(int z = 0;fm>z;z++)
                            {
                                cout << z << "." << "RODZAJ : " << tablica_filii[nf]->wyswietl_maszyne_rodzaj(z);
                                cout << "   ILOSC : " << tablica_filii[nf]->wyswietl_maszyne_ilosc(z) << endl;
                            }
                            break;
                            }
                            case 5 :
                            {
                            cout << "WYSWIETL WSZYSTKIE FILIE I JEJ ZAWARTOSCI" << endl;
                            for(int g=0;licznik_filii>g;g++)
                            {
                                cout << "NR." <<g+1 << "NAZWA FILII : " << tablica_filii[g]->wyswietl_nazwe_filii()<<endl;
                                cout << "WYROBY : " << endl;
                                int fw;
                                fw = tablica_filii[g]->porownaj_licznik_wyrobow();
                                for(int l = 0;fw>l;l++)
                                {
                                cout << l << "." << " NAZWA : " << tablica_filii[g]->wyswietl_rodzaj_wyrobu(l);
                                cout << "   ILOSC : " << tablica_filii[g]->wyswietl_ilosc_wyrobu(l);
                                cout << "   CENA : " << tablica_filii[g]->wyswietl_cene_wyrobu(l) << endl;
                                }
                                cout << "MASZYNY" << endl;
                                int fm;
                                fm = tablica_filii[g]->porownaj_licznik_maszyn();
                                for(int z = 0;fm>z;z++)
                                {
                                cout << z << "." << "RODZAJ : " << tablica_filii[g]->wyswietl_maszyne_rodzaj(z);
                                cout << "   ILOSC : " << tablica_filii[g]->wyswietl_maszyne_ilosc(z) << endl;
                                }
                            }
                            }

							default :
							break;
                            }
				cout << "CZY CHESZ JESZCZE COS WYSWIETLIC (tak/nie) :";
				cin >> zgoda;
                    }while(zgoda =="tak");
					break;
			}
		case 4:
			{
				string zgoda ;
				int i;
				do {
                cout << endl << "KASOWANIE OBIEKTU" <<endl;
				cout << "1.USUN FILIE I JEJ ZAWARTOSCI" <<endl;
				cout << "2.USUN WYROBY Z DANYCH FILII" << endl;
				cout << "3.USUN MASZYNY Z DANEJ FILII" << endl;
				cout << "WYBIERZ CO CHCESZ USUNAC: " ;
				cin >> i;
				switch (i)
				{
							case 1 :
						{
							cout << "USUN FILIE" << endl;
							for(int i=0;licznik_filii>i;i++)
                            {
                                   if(tablica_filii[i] != 0)
                                        {
                                        cout <<tablica_filii[i]->wyswietl_numer_filii() << "." <<tablica_filii[i]->wyswietl_nazwe_filii() <<endl;
                                        }
                            }
                            int k;
                            cout << "KTORA FILIE CHCESZ USUNAC(PODAJ NUMER) :";
                            cin >> k;
                            int fw,fm;
                            fw = tablica_filii[k]->porownaj_licznik_wyrobow();
                            fm = tablica_filii[k]->porownaj_licznik_maszyn();
                            for(int z = 0;z<fw;z++)
                            {
                                tablica_filii[k]->kasuj_wyrob(z);
                            }
                            for(int s = 0;s<fm;s++)
                            {
                                tablica_filii[k]->kasuj_maszyne(s);
                            }
                            delete tablica_filii[k];
                            tablica_filii[k] = NULL;
                            for(int h = k;licznik_filii-1>h;)
                            {
                             tablica_filii[h] = tablica_filii[h+1];
                             h++;
                            }
                            for(int l=k;l<licznik_filii-1;l++)
                            {
                             tablica_filii[l]->modyfikuj_nr_filii(l);
                            }
                            licznik_filii--;
                            cout << endl << "USUNIETO FILIE."<<endl;
							break;
						}
							case 2 :
						{
							cout << "USUN WYROB" << endl;
							for(int i=0;licznik_filii>i;i++)
                            {
                                   if(tablica_filii[i] != 0)
                                        {
                                        cout <<tablica_filii[i]->wyswietl_numer_filii() << "." <<tablica_filii[i]->wyswietl_nazwe_filii() <<endl;
                                        }
                            }
                            cout << "Z KTOREJ FILII CHCESZ USUNAC WYROB (PODAJ NAZWE) :";
                            int nf;
                            cin >> nf;
                            cout << endl;
                            int fw;
                            fw = tablica_filii[nf]->porownaj_licznik_wyrobow();
                            for(int z = 0;z<fw;z++)
                            {
                            cout << z << "." << " NAZWA : " << tablica_filii[nf]->wyswietl_rodzaj_wyrobu(z);
                            cout << "   ILOSC : " << tablica_filii[nf]->wyswietl_ilosc_wyrobu(z);
                            cout << "   CENA : " << tablica_filii[nf]->wyswietl_cene_wyrobu(z) << endl;
                            }
                            cout << " KTORY WYROB CHCESZ USUNAC (PODAJ NAZWE) : ";
                            int nw;
                            cin >> nw;
                            tablica_filii[nf]->kasuj_wyrob(nw);
                            cout << "USUNIETO WYROB." << endl;
							break;
						}
							case 3 :
						{
							cout << "USUN MASZYNE" << endl;
							for(int i=0;licznik_filii>i;i++)
                            {
                                   if(tablica_filii[i] != 0)
                                        {
                                        cout <<tablica_filii[i]->wyswietl_numer_filii() << "." <<tablica_filii[i]->wyswietl_nazwe_filii() <<endl;
                                        }
                            }
                            cout << " Z KTOREJ FILII CHCESZ USUNAC MASZYNE(PODAJ NUMER) : ";
                            int nr;
                            cin >> nr;
                            cout << endl;
                            int f;
                            f = tablica_filii[nr]->porownaj_licznik_maszyn();
                            for(int y = 0;f>y;y++)
                            {
                                cout << y << "." << "RODZAJ : " << tablica_filii[nr]->wyswietl_maszyne_rodzaj(y);
                                cout << "   ILOSC : " << tablica_filii[nr]->wyswietl_maszyne_ilosc(y) << endl;
                            }
                            cout << "KTORA MASZYNE CHCESZ USUNAC (PODAJ NUMER) :";
                            int nm;
                            cin >> nm;
                            tablica_filii[nr]->kasuj_maszyne(nm);
                            cout << endl << "USUNIETO" << endl;
							break;
						}
							default :
							    {
							     break;
							    }
				}
				cout << "CZY CHCESZ JESZCZE COS USUNAC(tak/nie) :";
				cin >> zgoda;
                cout << endl;
					}	while(zgoda =="tak");
					break;
			}
	}
cout << "CZY CHCESZ ZOSTAC W PROGRAMIE (tak/nie) :";
cin >> pozwolenie;
cout << endl;
 }while(pozwolenie == "tak");
}
