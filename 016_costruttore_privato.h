class C{
public: 
    C(){ ... }
private:
    C(const C& c) { ... } // costruttore di copia privato
};

C fun1{...}         // ritorna C per valore

void fun2(const C& c) {...}

void fun3(void){
    fun2(C());      // Illegale: costruttore di copia inaccessibile
    fun2(fun1());   // Illegale: costruttore di copia inaccessibile
    C c;
    fun2(c);        // OK: c ha un l-valore
}
