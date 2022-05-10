#include "UkladRownanLiniowych.hh"



/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy UkladRownanLiniowych, ktore zawieraja 
 *  wiecej kodu niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */
std::ostream& operator<<(std::ostream &Strm, UkladRownanLiniowych &ukrown){
    Strm<<ukrown.macierz;
    return Strm;
}

std::istream& operator>>(std::istream &Strm, UkladRownanLiniowych &ukrown){
    Strm>>ukrown.macierz;
    return Strm;
}

bool UkladRownanLiniowych::obliczanie(){
double  wspolczynnik;

void zerowaniekolumn();{
for(int i=0;i<ROZMIAR;i++){
    for (int j = i+1; j < ROZMIAR; j++)
    {
        wspolczynnik=(*this).macierz(j,i)/(*this).macierz(i,i);

        (*this).macierz.wektor[j]=(*this).macierz.wektor[j]-((*this).macierz.wektor[i]*wspolczynnik);
        std::cout<<"Od wiersza "<<(j+1)<<" odejmuje "<<(i+1);
        std::cout<<std::endl;
        std::cout<<(*this);
    }
    for(int z=0;z<ROZMIAR;z++){
        if((*this).macierz(i,i)==0){
            int k=0;
            for(k=i+1;k<ROZMIAR;k++){
            if((*this).macierz(k,i)!=0){
                (*this).macierz.zamienwiersz(i,k);
                std::cout<<"Zamieniamy wiersz "<<(i+1)<<" z "<<(k+1);
                std::cout<<(*this);
                break;
                }
            }
            if(k==ROZMIAR){
                std::cout<<"Brak rozwiazan jednoznacznych";
                return 1;
            }
        }
    }
}
}
void zerowaniekolumnpowk();{
for(int i=(ROZMIAR-1);i>=0;i--){
    for (int j = i-1; j>=0; j--)
    {
        wspolczynnik=(*this).macierz(j,i)/(*this).macierz(i,i);

        (*this).macierz.wektor[j]=(*this).macierz.wektor[j]-((*this).macierz.wektor[i]*wspolczynnik);
        std::cout<<"Od wiersza "<<(j+1)<<" odejmuje "<<(i+1);
        std::cout<<std::endl;
        std::cout<<(*this);
    }
}
}
void wynik();{
    double wyn;
    
    for(int l=0;l<ROZMIAR;l++){
        wyn=(*this).macierz(l,ROZMIAR)/(*this).macierz(l,l);
        std::cout<<"x"<<(l+1)<<"="<<wyn<<std::endl;
    }
}
    return 0;
}
