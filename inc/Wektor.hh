#ifndef WEKTOR_HH
#define WEKTOR_HH

#include "rozmiar.h"
#include <iostream>
#include <string.h>
#include<math.h>
/*
 *  Ta klasa opisuje wektor.
 *  Wektor jest rozmiarow tablicy 1xwartosc zdefiniowana ROZMIAR.
 *  Moze byc uzyty przy wyrazach wolnych albo przy niewiadomych.
 *  
 */
class Wektor {
  double tab[ROZMIAR];
  public:
  Wektor(){
   tab[0]=0;tab[1]=0;tab[2]=0;
  };
  Wektor operator + (const Wektor & W2) const;
  Wektor operator - (const Wektor & W2) const;
 
  double operator * (const Wektor & W2) const;

  Wektor  operator * (double li) const;

  bool operator == (const Wektor & W2) const;
  bool operator != (const Wektor & W2) const;

  double dlugosc() const;   
   
  const double & operator[] (int index) const; 
  double & operator[] (int index);
  
};


/*
  *  Przeciazenie strumienia wejsciowego.Funkcja wczytuje podana wartosc od
  *  uzytkownika.
  * 
  *  Opis poszczegolnych parametrow wywolania funkcji:
  *   istream &strm  - odwolanie do sturmienia poprzez referencje,
  *   Wektor &Wek  - wartosc,ktora powinna zostac wczytana i zapisana
  *   w strukturze Wektor
  *   
  *   
  *  Warunki wstepne:
  *   strm musi byc strumieniem wejsciowym, by mozna bylo wczytac wartosci,
  *   podane watosci musza byc podane w odpowiedniej formie (tutaj za pomoca tablicy)
  *
  *  Warunki koncowe:
  *   wszystko musi byc poprawnie wczytane, w przeciwnym wypadku strumien jest bledny
  *
  *  Funkcja wczytuje do klasy wektor podane wartosci
  */
 std::istream& operator >> (std::istream &Strm, Wektor &Wek);

/*
  *  Przeciazenie strumienia wyjsciowego.Funkcja wyswietla dla uzytkownika
  *  podana wartosc.
  * 
  *  Opis poszczegolnych parametrow wywolania funkcji:
  *   ostream &strm  - odwolanie do sturmienia poprzez referencje,
  *   const Wektor &Wek  - wartosc,ktora powinna zostac wyswietlona,
  *   bez jej zmiany, w dodatku odwolujac sie do oryginalu
  *   
  *  Warunki wstepne:
  *   strm musi byc strumieniem wyjsciowym, by mozna bylo wyswietlic wartosci,
  *   watosci musza byc podane w odpowiedniej formie (tutaj za pomoca tablicy)
  *
  *  Warunki koncowe:
  *   brak
  *
  *  Funkcja wyswietla na wyjsciu standardowym wartosci wektora.
  */
std::ostream& operator << (std::ostream &strm, const Wektor &Wek);

Wektor operator * (double l1, Wektor W2);
#endif
