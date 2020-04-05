#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"



using namespace std;

/*
 * Tu definiujemy pozostale funkcje.
 * Lepiej jednak stworzyc dodatkowy modul
 * i tam je umiescic. Ten przyklad pokazuje
 * jedynie absolutne minimum.
 */


int main()
{
 /* UkladRownanLiniowych   UklRown;*/   // To tylko przykladowe definicje zmiennej
 MacierzKw m2;
 MacierzKw m1;
 MacierzKw m3;
 Wektor w1;
 Wektor w2;
 w1[0]=2;w1[1]=2;w1[2]=2; w2[2]=4;
 m1(0,0)=1; m1(0,1)=2; m1(0,2)=-1;
 m1(1,0)=1; m1(1,1)=0; m1(1,2)=-2;
 m1(2,0)=0;m1(2,1)=1; m1(2,2)=-2; 
 m2(0,2)=5;
 m2(1,1)=8;
 m2(2,0)=11;
 double a=w1.dlugosc();
 cout<<a<<endl;
 cout<<"Odwrotnosc"<<endl;
m1.odwrotnosc();
cout<<m1;
cout<<endl;
if (w1==w2)
cout<<"supel"<<endl;
else cout<<"niesupel"<<endl;
m1.wyznacznikSarrus();
double w8=m1.wyznacznikSarrus();
cout<<"wyznacznikSarrus"<<endl;
cout<<w8;
cout<<endl;
double w=m1.wyznacznikGauss();
cout<<"wyznacznikGauss"<<endl;
cout<<w;
cout<<endl;
double w7=m1.wyznacznikLaplace();
cout<<"wyznacznikLaplace"<<endl;
cout<<w7;
cout<<endl; 
    if(cout.fail()){
    cout<<"Masz blad!"<<endl;
}
else cout<<"Koniec programu"<<endl;
}