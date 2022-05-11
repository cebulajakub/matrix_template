#include "LZespolona.hh"
#include <istream>

using namespace std;

/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona LZespolona :: operator+(LZespolona Skl2)
{
  LZespolona Wynik;

  Wynik.re = LZespolona::re + Skl2.re;
  Wynik.im = LZespolona::im + Skl2.im;
  return Wynik;
}

LZespolona LZespolona:: operator-(LZespolona Skl2)
{
  LZespolona Wynik;

  Wynik.re = LZespolona::re - Skl2.re;
  Wynik.im = LZespolona::im - Skl2.im;
  return Wynik;
}

 LZespolona LZespolona:: operator*(LZespolona Skl2)
{
  LZespolona Wynik;

  Wynik.re = (LZespolona::re * Skl2.re)-(LZespolona::im*Skl2.im);
  Wynik.im = (LZespolona::re * Skl2.im) + (LZespolona::im * Skl2.re);

  return Wynik;
}

LZespolona LZespolona:: Sprzezenie()
{
  LZespolona Wynik;
	Wynik.re=re;
	Wynik.im=(-1)*im;
  return Wynik;
}

double LZespolona:: modul()
{
  double mod;
  mod = (((LZespolona::re) * (LZespolona::re)) + ((LZespolona::im) * (LZespolona::im)));
  return mod;
}

LZespolona LZespolona::operator/(LZespolona Skl2)
{
  LZespolona Wynik;
  //LZespolona sprz = Skl2.Sprzezenie();
  double mod = Skl2.modul();

  //if (mod == 0)
    //cout<<"Dzielenie przez 0" << endl;
  //else
  //{
    //Wynik = Skl1 * sprz;
    Wynik= (*this) * Skl2.Sprzezenie();
    Wynik.re = Wynik.re / mod;
    Wynik.im = Wynik.im / mod;
  //}

  return Wynik;
}
std::istream &operator >> (std::istream & rStrmwe, LZespolona &Arg1)
{
  char nawias, i;

  rStrmwe >> nawias;
  if (rStrmwe.fail())
  return rStrmwe;

  if(nawias!='('){
    rStrmwe.setstate(std::ios::failbit);
    return rStrmwe;
  }

  rStrmwe>>Arg1.re;
  if (rStrmwe.fail())
  return rStrmwe;

  rStrmwe>>Arg1.im;
  if (rStrmwe.fail())
  return rStrmwe;

    rStrmwe >> i;
  if (rStrmwe.fail())
  return rStrmwe;

  if(i!='i'){
    rStrmwe.setstate(std::ios::failbit);
    return rStrmwe;
  }
  rStrmwe >> nawias;
  if (rStrmwe.fail())
  return rStrmwe;

  if(nawias!=')'){
    rStrmwe.setstate(std::ios::failbit);
    return rStrmwe;
  }
  return rStrmwe;
}
std::ostream & operator <<(std::ostream &rStrmwe, LZespolona &Arg1)
{
  return rStrmwe <<"("<<Arg1.re << std::showpos << Arg1.im << std::noshowpos <<"i)";
  
}
  
bool LZespolona::operator == (LZespolona Skl2)
{
return (this->re == Skl2.re && this->im ==Skl2.im);
}

bool LZespolona::operator ==(float a){
if(this->re == 0 && this->im ==0)
return 1;
else
return 0;
}
