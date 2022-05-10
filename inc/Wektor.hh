#ifndef WEKTOR_HH
#define WEKTOR_HH

#include "rozmiar.h"
#include <iostream>


/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Wektor {
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich pol i metod prywatnych
   */
  
  public:
  double wspolczynniki[ROZMIAR+1];
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich metod publicznych
   */    
  Wektor operator + (const Wektor &L1);
  Wektor operator - (const Wektor &L1);
  Wektor operator * (const double &L1);
  Wektor operator / (const double &L1);
  const double & operator [] (int ind) const {return this-> wspolczynniki[ind];}
  double & operator[] (int ind) {return this->wspolczynniki[ind];}

  friend std::ostream& operator << (std::ostream &Strm, Wektor &Wek);
  friend std::istream& operator >> (std::istream &Strm, Wektor &Wek);
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
