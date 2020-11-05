//Viene usato pf come puntatore a funzione
#include <math.h>
#include <iostream>

using namespcae std;

//math.h contiene le dichiarazioni delle funzioni
//double sin(double)
//double cos(double)

double F(double d){
  return d + 3.14;
}

int main(){
  //pf è un puntatore ad una funzione con lista dei parametri (double) e tipo di ritorno double
  double (*pf) (double);
  
  pf = &sin;
  cout << (*pf) (0) << endl;  //stampa: 0
  
  pf = &cos;
  cout << (*pf) (0) << endl;  //stampa: 1
  
  pf = &F;
  cout << (*pf) (0) << endl;  //stampa: 3.14
}
