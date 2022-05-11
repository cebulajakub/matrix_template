#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH
#include <istream>

/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej 
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
class  LZespolona {
  public:
  double   re;  
  double   im; 

LZespolona operator + (LZespolona  Skl2);
LZespolona operator-(LZespolona Skl2);
LZespolona operator*(LZespolona Skl2);
LZespolona Sprzezenie();
double modul();
LZespolona operator/(LZespolona Skl2);
friend std::istream &operator >> (std::istream & rStrmwe, LZespolona &Arg1);
friend std::ostream & operator <<(std::ostream &rStrmwe, LZespolona &Arg1);
bool operator == (LZespolona Skl2);
bool operator ==(float a); 
};



#endif
