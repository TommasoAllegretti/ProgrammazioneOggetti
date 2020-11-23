class orario(){
  public: 
    operator int() { return sec; }  //  conversione orario -> int
    ...
};

orario o(14, 27);
int x = 0;            //  OK: viene richiamato implicitamente l'operatore
                      //  int() sull'oggetto o
