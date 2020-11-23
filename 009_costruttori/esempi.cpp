//  uso il costruttore ore-minuti-secondi
orario adesso_preciso(14, 25, 47);

//  uso il costruttore ore-minuti
orario adesso(14, 25);

//  uso il costruttore senza parametri
orario mezzanotte;

//  uso il costruttore senza parametri
orario mezzanotte2;

//  uso il costruttore ore-minuti
orario troppo(27, 25);

cout << adesso_preciso.Secondi() << endl; //  stampa: 47
cout << adesso.Minuti() << endl;          //  stampa: 25
cout << mezzanotte.Ore() << endl;         //  stampa: 0
cout << troppo.Ore() << endl;             //  stampa: 0
