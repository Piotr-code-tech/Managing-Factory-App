#include <iostream>
#include "Filia.h"
#include "Wyrob.h"
#include "Maszyna.h"
using namespace std;

int main()
{
//TWORZYMY TABLICE FILII ORAZ LICZNIK DO ZLICZANIA FILII
CFilia*tablica_filii[100];
int licznik_filii=0;
// WYSWIETLAMY GLOWNE FUNKCJE KTORE MOZEMY WYKONAC
cout << " __________________________"<<endl;
cout << "WITAMY W MENU !"<<endl;
cout << "1 - DODANIE NOWEJ FILII"<<endl;
cout << "2 - MODYFIKACJA DANYCH"<<endl;
cout << "3 - WYSWIETLANIE DANYCH"<<endl;
cout << "4 - KASOWANIE DANYCH"<<endl;
cout << " __________________________"<<endl;
cout << "Program wykonany przez Piotra Kowalskiego" << endl;
string pozwolenie; // zmienna do petli do while pozwalajaca na wznowienie programu
//WCHODZIMY W PETLE KTORA ZAKONCZY SIE GDY ZADECYDUJEMY O TYM NA KONCU

do{
int u;
   //DEKLARUJEMY ZMIENNA LOKALNA ODPOWIEDZIALNA ZA WYBOR W GLOWNYM MENU
cout << endl <<"Wybierz Opcje Z Menu :";
cin >> u ;
cout << endl;
	switch (u)
	{
		case 1:
			{
			    string name;
				cout << "TWORZENIE NOWEJ FILII "<<endl;
				cout << "Podaj nazwe filii : ";
				cin >> name;
				tablica_filii[licznik_filii] = new CFilia(licznik_filii,name);
				licznik_filii++;
                break;
			}

		case 2:
			{
				string zgoda;
				int i;
				cout << endl << "MODYFIKACJA DANYCH" <<endl;
				cout << "1.Edytuj nazwe fili" <<endl;
				cout << "2.Dodaj wyrob do istniejacej filii" << endl;
				cout << "3.Dodaj maszyne do istniejacej filii" << endl;

				do {
				cout << "Wybierz co chcesz edytowac : " ;
				cin >> i;
				switch (i)
				{
							case 1 :
                                {
                                    cout << "EDYTUJ NAZWE FILII" << endl;
                                    break;
                                }

                            case 2 :
                                {
                                    cout << "DODAJ WYROB DO ISTNIEJACEJ FILII" << endl;
                                    break;
                                }
                            case 3 :
                                {
                                    cout << "DODAJ MASZYNE DO ISTNIEJACEJ FILII" << endl;
                                    break;
                                }

							default :
							break;


				}

				cout << "Czy chcesz jeszcze cos edytowac (tak/nie) :";
				cin >> zgoda;

					}while(zgoda =="tak");
					break;

			}

		case 3:
			{
				string zgoda ;
				int i;
				cout << endl << "Wyswietlanie danych" <<endl;
				cout << "1.Wyswietl  filie" <<endl;
				cout << "2.Wyswietl wyroby danej filii" << endl;
				cout << "3.Wyswietl maszyny danej filii" << endl;
				cout << "4.Wyswietl filie i jej elementy" << endl;


				do {
				cout << "Ktore dane chcesz Wyswietlic : " ;
				cin >> i;
				switch (i)
				{
							case 1 :
						{
						    int i;
							cout << "FILIE :" << endl;
							for(i = 0;licznik_filii>i;)
                            {
                                cout << tablica_filii[i]->wyswietl_numer_filii() << endl;
                                i++;
                            }
							break;
						}

							case 2 :
						{
							cout << "Wyswietl dane wyrobu" << endl;
							break;
						}

							case 3 :
						{
							cout << "Wyswietl dane maszyny" << endl;
							break;
						}

                            case 4 :
                        {
                            cout << "Wyswietl filie i jej elementy" << endl;
                            break;
                        }

							default :
							break;


				}

				cout << "Czy chcesz jeszcze cos wyswietlic (tak/nie) :";
				cin >> zgoda;

					}	while(zgoda =="tak");
					break;

			}

		case 4:
			{
				string zgoda ;
				int i;

				cout << endl << "Kasowanie obiektu" <<endl;
				cout << "1.Usun filie" <<endl;
				cout << "2.Usun wyrob" << endl;
				cout << "3.Usus maszyne" << endl;


				do {
				cout << "Wybierz co chcesz usunac : " ;
				cin >> i;
				switch (i)
				{
							case 1 :
						{
							cout << "Usun filie" << endl;
							break;
						}

							case 2 :
						{
							cout << "Usun wyrob" << endl;
							break;
						}

							case 3 :
						{
							cout << "Usun maszyne" << endl;
							break;
						}

							default :
							break;


				}

				cout << "Czy chcesz jeszcze cos usunac (tak/nie) :";
				cin >> zgoda;

					}while(zgoda =="tak");
					break;
			}

	}


	cout << "Czy chcesz zostac w programie (tak/nie) :";
    cin >> pozwolenie;


	}while(pozwolenie == "tak");




 }

