class orario{
  public: 
    static orario OraDiPranzo();    //  metodo statico
    // il modificatore static non ha senso per un metodo statico
    // perchè il metodo OraDiPranzo() non ha oggetto di invocazione
    ...
};

orario orario::OraDiPranzo() { return orario(13, 15); }
