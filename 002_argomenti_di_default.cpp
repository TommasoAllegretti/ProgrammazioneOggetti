//Gli argomenti di default sono assegnati quando nella dichiarazione non viene specificato un valore per quell'argomento
#include <iostream>

using namespace std;

//Illegale, non è possibile avere un argomento di default seguito da un argomento non di default
void F(double x, int n = 3, string s){...}

//OK
void G(double x, int n = 3, string s = "ciao"){...}

G(3.2);           //OK: G(3.2, 3, "ciao");
G();              //Illegale
G(3, 3);          //OK: G(3, 3, "ciao");
G(3, 3, "pippo"); //OK: G(3, 3, "pippo");
