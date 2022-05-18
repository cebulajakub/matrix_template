#include <iostream>
#include "Wektor.cpp"
#include "Macierz.cpp"
#include "UkladRownanLiniowych.cpp"
#include "LZespolona.cpp"
#include "LZespolona.hh"


using namespace std;

/*
 * Tu definiujemy pozostale funkcje.
 * Lepiej jednak stworzyc dodatkowy modul
 * i tam je umiescic. Ten przyklad pokazuje
 * jedynie absolutne minimum.
 */


int main()
{
//UkladRownanLiniowych   UklRown;   // To tylko przykladowe definicje zmiennej
//cin>>UklRown;
  
  //cout << endl << " Start programu " << endl << endl;
  //cout<<UklRown;
  //UklRown.obliczanie();
  //Wektor<TYP, Rozmiar> w;
char wybor;
     cout<<" z - Uklad rownan liczb zespolonych"<<endl;;
     cout<<" f - Układ równanń liczb rzeczywistych"<<endl;
cin>>wybor;     
switch (wybor)
{
case 'z':
     UkladRownanLiniowych<LZespolona> c;
     cin>>c;
     c.obliczanie();
     break;
case 'f':
     UkladRownanLiniowych<float> b;
     cin>>b;
     b.obliczanie();
     break;
case 'k':
     cout<<"Koniec programu";
     break;

default: cout<<"Bledny znak";
     break;
}
return 0;
}
