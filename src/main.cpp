#include <iostream>
#include "Wektor.cpp"
#include "Macierz.cpp"
#include "UkladRownanLiniowych.cpp"
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


  cout << endl
       << " --------- Test klasy Wektor<LZespolona," << ROZMIAR << "> ----------" << endl
       << endl;


  Wektor<LZespolona>    W;
  
  for (unsigned int Ind = 0; Ind < ROZMIAR; ++Ind) {
    W[Ind].re = Ind;      W[Ind].im = Ind;
  }

  cout << "  Wyswietlenie wspolrzednych wektora: W" << endl
       << "        " << W << endl
       << endl;

}
