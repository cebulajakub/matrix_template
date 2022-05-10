#ifndef WEKTOR_HH
#define WEKTOR_HH

#include "rozmiar.h"
#include <iostream>


/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
template<typename TYP, int Rozmiar>
class Wektor {
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich pol i metod prywatnych
   */
  
  public:
  TYP wspolczynniki[ROZMIAR+1];
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich metod publicznych
   */    
  Wektor<TYP,Rozmiar> operator + (const Wektor<TYP,Rozmiar> &L1);
  Wektor<TYP,Rozmiar> operator - (const Wektor<TYP,Rozmiar> &L1);
  Wektor<TYP,Rozmiar> operator * (const TYP &L1);
  Wektor<TYP,Rozmiar> operator / (const TYP &L1);
  const TYP & operator [] (int ind) const {return this-> wspolczynniki[ind];}
  TYP & operator[] (int ind) {return this->wspolczynniki[ind];}

  friend std::ostream& operator << (std::ostream &Strm, Wektor<TYP,Rozmiar> &Wek);
  friend std::istream& operator >> (std::istream &Strm, Wektor<TYP, Rozmiar> &Wek);
};


/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */


/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */


#endif
