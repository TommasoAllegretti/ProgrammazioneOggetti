//In questo main ai namespace vengono assegnati degli alias per rendere più rapido il processo di scoping 

#include "Lib_UNO.h"
#include "Lib_DUE.h"

//Alias
namespace UNO = SPAZIO_UNO;
namespace DUE = SPAZIO_DUE;

void funzione(){

  UNO::Complex var1;
  UNO::f(var1);
 
  DUE::Complex var2;
  DUE::g(var2); 
  
}
