#include "UkladRownanLiniowych.hh"
using std::endl;
using std::cout;
std::istream& operator >> (std::istream &strm, UkladRownanL &UklRown){
   MacierzKw A;
   Wektor b;
    strm>>A;
    UklRown.set_A(A);
    strm>>b;
    UklRown.set_b(b);
    if(strm.fail())
    strm.setstate(std::ios::failbit);
    return strm;
}

std::ostream& operator << ( std::ostream &strm,const UkladRownanL  &UklRown){
  MacierzKw A=UklRown.get_A();
  Wektor b=UklRown.get_b(); 
    strm<<"Macierz poczatkowa"<<endl;
    strm<<A; 
    strm<<"Wektor wyrazow wolnych"<<endl;
    strm<<b;
    if(strm.fail())
    strm.setstate(std::ios::failbit);
    return strm;
} 
const MacierzKw &UkladRownanL::get_A()const{
for(int i=0;i<ROZMIAR;i++){
    for(int j=0;j<ROZMIAR;j++){
    A[i][j];
    }
}
return A;
}
const Wektor &UkladRownanL::get_b() const {
 for(int i=0;i<ROZMIAR;i++){
     b[i];
 }
 return b;
 }
 void UkladRownanL::set_A(const MacierzKw & in){
   for(int i=0;i<ROZMIAR;i++){
    for(int j=0;j<ROZMIAR;j++){
    A[i][j]=in[i][j];
    }
 }
  A.transpozycja();

 }
 void UkladRownanL::set_b(const Wektor & in){
  for(int i=0;i<ROZMIAR;i++){
     b[i]=in[i];
 }
 }
Wektor UkladRownanL::Oblicz() const{
Wektor Wynik;
MacierzKw M=A;
M.odwrotnosc();
Wynik=M*b;
return Wynik;
}

double UkladRownanL::dwb()const{
Wektor W=Oblicz();
MacierzKw M=A;
Wektor Wynik=M*W;
Wektor blad=Wynik-b;
double wynikwynik=blad.dlugosc();
return wynikwynik;
}
