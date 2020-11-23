// la definizione 
int orario::Secondi() { return sec % 60 }

// esplicitando il this diventerebbe
in orario::Secondi(orario* this) { return ((*this).sec) % 60 }


// mentre la chiamata 
int s = mezzanotte.Secondi();

// esplicitando il parametro diventerebbe
int s = Secondi(&mezzanotte);
