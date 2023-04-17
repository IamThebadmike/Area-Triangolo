//PROGRAMMA FATTO DA THEBADMIKE (A SCUOLA)


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //set caratteti italiani
    setlocale(LC_ALL, "italian");

    //dichiarazione delle variabili
    float base;
    float altezza; 
    float area;


    //inizio del programma
cout << "AREA DEL TRIANGOLO" << endl;
cout << "------------------" << endl;

//inseririre dati della base
cout << "Inserisci la base: ";
cin >> base;

//inserire dati dell'altezza 
cout << "Inserisci l'altezza: ";
cin >> altezza;

//calcolare l'area
area = (base * altezza) / 2;

//visualizzare il risultato
cout << "L'area del triangolo è: ";

cout << fixed << setprecision(2) << area << endl;

//interrompiamo l'esecuzione

system("pause");


}
