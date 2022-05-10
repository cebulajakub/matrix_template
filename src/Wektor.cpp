#include "Wektor.hh"


/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Wektor, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */

Wektor Wektor::operator +(const Wektor &L1){
Wektor wynik;

for(int i=0;i<ROZMIAR+1;i++){
wynik[i]=this->wspolczynniki[i]+L1[i];
}
return wynik;
}

Wektor Wektor::operator -(const Wektor &L1){
Wektor wynik;

for(int i=0;i<ROZMIAR+1;i++){
wynik[i]=this->wspolczynniki[i]-L1[i];
}
return wynik;
}

Wektor Wektor::operator *(const double &L1){
    Wektor wyn;

for(int i=0;i<ROZMIAR+1;i++){
wyn[i]=(*this)[i]*L1;
}
return wyn;
}

Wektor Wektor::operator /(const double &L1){
Wektor wyn;

for(int i=0;i<ROZMIAR+1;i++){
wyn[i]=(*this)[i]/L1;
}
return wyn;
}

std::istream &operator>>(std::istream &Strm, Wektor &Wek){
for(int i=0;i<ROZMIAR+1;i++){
    Strm>>Wek[i];    
}
return Strm;
}


std::ostream &operator<<(std::ostream &Strm, Wektor &Wek){
for(int i=0;i<ROZMIAR+1;i++){

    Strm<<Wek[i]<<" ";
}
std::cout<<std::endl;
return Strm;
}