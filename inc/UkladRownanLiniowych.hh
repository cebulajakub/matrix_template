#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH
#include "Macierz.hh"
#include <iostream>


/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
template<typename TYP>
class UkladRownanLiniowych {
  
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich pol i metod prywatnych
   */
  public:
  Macierz<TYP> macierz;
  bool obliczanie();
  void wynik();
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich metod publicznych
   */
 
friend std::ostream& operator<<(std::ostream &Strm, UkladRownanLiniowych<TYP> &ukrown){
    Strm<<ukrown.macierz;
    return Strm;
}

friend std::istream& operator>>(std::istream &Strm, UkladRownanLiniowych<TYP> &ukrown){
    Strm>>ukrown.macierz;
    return Strm;
}

};


/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
/*std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych &UklRown);*/

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
/*std::ostream& operator << ( std::ostream &Strm, const UkladRownanLiniowych    &UklRown);*/


#endif
