#include "Macierz.hh"
#include "Wektor.hh"


/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Macierz, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */
std::istream& operator >> (std::istream &Strm, Macierz &Mac){

for(int i=0; i<ROZMIAR;i++)
Strm>>Mac.wektor[i];

return Strm;

}

std::ostream& operator<<(std::ostream &Strm, Macierz &Mac){

for(int i=0; i<ROZMIAR;i++)
Strm<<Mac.wektor[i];

return Strm;

}

void Macierz::zamienwiersz(int w1, int w2){
    Wektor  x;
x=(*this).wektor[w1];
(*this).wektor[w1]=(*this).wektor[w2];
(*this).wektor[w2]=x;
}