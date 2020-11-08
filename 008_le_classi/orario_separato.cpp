class orario{
public:           // metodi della classe
  int Ore();      // selettore delle ore
  int Minuti();   // selettore dei minuti
  int Secondi();  // selettore dei secondi

private:          // unico campo dati della classe
  int sec;        // scegliamo di rappresentare un orario mediante 
                  // il numero di secondi trascorsi dalla mezzanotte
};


int orario::Ore() { return sec / 3600; }

int orario::Minuti() { return (sec / 60) % 60; }

int orario::Secondi() { return sec % 60; }
