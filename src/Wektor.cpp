#include "Wektor.hh"
using std::endl;
using std::cerr;
 double & Wektor::operator[] (int index) { 
    if (index < 0 || index >= ROZMIAR) {
      cerr << "poza zakresem" << endl;
      exit(1);
    }
    return tab[index];
        
  }
const double & Wektor::operator[] (int index) const{
  if (index < 0 || index >= ROZMIAR) {
      cerr << "poza zakresem" << endl;
      exit(1);
    }
     return tab[index];
}
std::istream &operator>>(std::istream &strm, Wektor &Wek){
for(int i=0;i<3;i++){
  strm>>Wek[i];
if(strm.fail())
strm.setstate(std::ios::failbit);
}
return strm;
}

std::ostream& operator << (std::ostream &strm, const Wektor &Wek){
for(int i=0;i<3;i++){
strm<<Wek[i]<<" ";
if(strm.fail())
strm.setstate(std::ios::failbit);
 } 
return strm;
}

Wektor Wektor::operator + (const Wektor & W2) const{
Wektor Suma;
for(int ind=0;ind<3;ind++){
  Suma.tab[ind]=tab[ind]+W2.tab[ind];
}
return Suma;
}

Wektor Wektor::operator - (const Wektor & W2) const{
Wektor Suma;
for(int ind=0;ind<3;ind++){
  Suma.tab[ind]=tab[ind]-W2.tab[ind];
}
return Suma;
  }

Wektor Wektor::operator * (const Wektor & W2) const{
Wektor Suma;
for(int ind=0;ind<3;ind++){
  Suma.tab[ind]=tab[ind]*W2.tab[ind];
}
return Suma;
  }
Wektor  Wektor::operator * (double li)const{
 Wektor W2;
 for(int ind=0;ind<3;ind++){
  W2.tab[ind]=tab[ind]*li;
 }
return W2;
  }

bool Wektor::operator == (const Wektor & W2) const{
  for(int i=0;i<3;i++){
    if(W2.tab[i]!=tab[i])
    return false;
    else;
  }
 return true;
  }
bool Wektor::operator != (const Wektor & W2) const{
  for(int i=0;i<3;i++){
    if(W2.tab[i]==tab[i])
    return false;
    else;
  }
 return true;
  }

double Wektor::dlugosc() const{
  Wektor W2;
  double a;
  for(int i=0;i<3;i++){
    double skl=(pow((tab[i]),(2)));
    a+=skl;
  }
  a=sqrt(a);
return a;
  }  
   
Wektor operator * (double l1, Wektor W2){
  for(int ind=0;ind<3;ind++){
  W2[ind]=l1*W2[ind];
}
return W2;
}
