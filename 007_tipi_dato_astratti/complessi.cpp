#include "complessi.h"  //  per prendere le informazioni che abbiamno definito sull'altro file
#inlcude <iostream>

using std::cout;

//  definisco i miei metodi per manipolare i numeri complessi
comp inizio_compl(double re, double im){
  comp x;
  x.re = re;
  x.im = im;
  return x;
}

double reale(comp x){
  return x.re;
}

double immag(comp x){
  return x.im;
}

comp somma(comp x, comp y){
  comp z;
  z.re = x.re + y.re;
  z.im = x.im + y.im;
  return z;
}

int main(){
  comp z1;
  comp x1 = inizio_compl(0.3, 3.1);
  comp y1 = inizio_compl(3, 6.3);
  z1 = somma(x1, y1);
  
  // possiamo però usare la rappresentazione interna dell'ADT
  comp z2;
  comp x2 = {0.3, 3.1};
  comp y2 = {3, 6.3};
  z2.re = x2.re + y2.re;
  z2.im = x2.im + y2.im;
    
  cout << "z1 => (" << reale(z1) << "," << immag(z1) << ") \n" << endl;
  cout << "z2 => (" << z2.re << "," << z2.im << ") \n" << endl;
  
}
