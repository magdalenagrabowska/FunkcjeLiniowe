#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH

#include <iostream>
#include "Macierz.hh"
#include "Wektor.hh"
#include "rozmiar.h"
/*
 * jest to klasa uklad rownan i sklada sie z macierzy oraz wyrazow wolnych.
 * Rozwiazuje dane uklady rownan, w tym zadaniu korzystajac z macierzy 3x3 i wetora o 3 wyrazach.
 */
class UkladRownanL {
  MacierzKw A;
  Wektor b;
  public:
 UkladRownanL(){};
 UkladRownanL(MacierzKw _A, Wektor _b): A(_A), b(_b){};
  const MacierzKw & get_A()const;
  const Wektor &get_b() const; 
 void set_A(const MacierzKw & in);
 void set_b(const Wektor & in);
 Wektor operator * (const Wektor & W)const;
 Wektor Oblicz() const; 
 double dwb()const; //obliczenie dlugosci wektora bledu
};


/*
 * Jest to przeciązenie operatora wczytywania. Powinien wczytywać wartosci potrzebnych do rozwiazania
 * ukladow rownan w formie macierzy rozszerzonej o wyrazy wolne.
 * Wczytuje macierz i wektor w tym wypadku podane w pliku
 */
std::istream& operator >> (std::istream &strm, UkladRownanL &UklRown);

/*
 * Przeciazenie strumienia wyjsciowego.Funkcja wyswietla dla uzytkownika
*  podana wartosc.
* 
*  Opis poszczegolnych parametrow wywolania funkcji:
*   ostream &strm  - odwolanie do sturmienia poprzez referencje,
*    const UkladRownanL  &UklRown - wartosc,ktora powinna zostac wyswietlona,
*   bez jej zmiany, w dodatku odwolujac sie do oryginalu
*   
*  Warunki wstepne:
*   strm musi byc strumieniem wyjsciowym, by mozna bylo wyswietlic wartosci,
*   watosci musza byc podane w odpowiedniej formie 
*
*  Warunki koncowe:
*   brak
*
*  Funkcja wyswietla na wyjsciu standardowym wartosci ukladu rownan.
 */
std::ostream& operator << ( std::ostream &strm,const UkladRownanL  &UklRown);


#endif
