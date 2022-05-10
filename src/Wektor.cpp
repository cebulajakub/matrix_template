#include "Wektor.hh"


/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Wektor, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */
template<typename TYP,int Rozmiar>
Wektor<TYP,Rozmiar> Wektor<TYP,Rozmiar>::operator +(const Wektor<TYP,Rozmiar> &L1){
Wektor<TYP> wynik;

for(int i=0;i<ROZMIAR+1;i++){
wynik[i]=this->wspolczynniki[i]+L1[i];
}
return wynik;
}

template<typename TYP,int Rozmiar>
Wektor<TYP,Rozmiar> Wektor<TYP,Rozmiar>::operator -( const Wektor<TYP,Rozmiar> &L1){
Wektor<TYP,Rozmiar> wynik;

for(int i=0;i<ROZMIAR+1;i++){
wynik[i]=this->wspolczynniki[i]-L1[i];
}
return wynik;
}

template<typename TYP,int Rozmiar>
Wektor<TYP,Rozmiar> Wektor<TYP,Rozmiar>::operator *(const TYP &L1){
Wektor<TYP> wyn;

for(int i=0;i<ROZMIAR+1;i++){
wyn[i]=(*this)[i]*L1;
}
return wyn;
}

template<typename TYP,int Rozmiar>
Wektor<TYP,Rozmiar> Wektor<TYP,Rozmiar>::operator /(const TYP &L1){
Wektor<TYP,Rozmiar> wyn;

for(int i=0;i<ROZMIAR+1;i++){
wyn[i]=(*this)[i]/L1;
}
return wyn;
}

template<typename TYP,int Rozmiar>
std::istream &operator>>(std::istream &Strm, Wektor<TYP,Rozmiar> &Wek){
for(int i=0;i<ROZMIAR+1;i++){
    Strm>>Wek[i];    
}
return Strm;
}

template<typename TYP,int Rozmiar>
std::ostream &operator<<(std::ostream &Strm, Wektor<TYP,Rozmiar> &Wek){
for(int i=0;i<ROZMIAR+1;i++){

    Strm<<Wek[i]<<" ";
}
std::cout<<std::endl;
return Strm;
}