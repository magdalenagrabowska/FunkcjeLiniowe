#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"
#include <fstream>


using namespace std;

int main()
{
UkladRownanL  UklRown;
double blad;
ifstream wczyt;
wczyt.open("funkcja_liniowa.txt");
wczyt>>UklRown;
if(cin.fail()){
       cout<<"Blad sie wkradl"<<endl;
       cin.clear();
       cin.ignore(1000, '\n');
} 
cout<<endl;
cout<<"Oto twoj uklad rownan"<<endl;
cout<<UklRown;
cout<<endl;
Wektor Wynik=UklRown.Oblicz();
cout<<"Oto wynik twych obliczen"<<endl;
cout<<Wynik;
cout<<endl;
blad=UklRown.dwb();
cout<<"Oto dlugosc wektora bledu obliczen"<<endl;
cout<<blad<<endl;
 if(cout.fail()){
    cout<<"Masz blad!"<<endl;
} 
else cout<<"Koniec programu"<<endl;

wczyt.close();
}