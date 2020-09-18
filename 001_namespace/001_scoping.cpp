//In questo main i namespace SPAZIO_UNO e SPAZIO_DUE vengono acceduti tramite l'operatore di scoping

#include "Lib_UNO.h"
#include "Lib_DUE.h"

void funzione(){

//La parte SPAZIO_UNO:: serve ad indicare che il namespace di riferimento è SPAZIO_UNO come definito in Lib_UNO.h
  SPAZIO_UNO::Complex var1;
  SPAZIO_UNO::f(var1);
 
//Qua si effettua invece lo scoping sul namespace SPAZIO_DUE
  SPAZIO_DUE::Complex var2;
  SPAZIO_DUE::g(var2); 
  
//Errore in compilazione
  SPAZIO_DUE::g(var1);
  
}
