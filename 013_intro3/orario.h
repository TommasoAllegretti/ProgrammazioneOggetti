// file "orario.h"

#ifndef ORARIO_H
#define ORARIO_H

class orario{
    public:
        orario(int = 0, int = 0, int = 0);
        int Ore();
        int Minuti();
        int Secondi();
    private:
        int sec;
};

orario::orario(int o, int m, int s){
    if(o < 0 || o > 23 || m < 0 || m > 59 || s < 0 || s > 59){
        sec = 0;
    }

    else{
        sec = o * 3600 + m * 60 + s;
    }
}

int orario::Ore() { return sec / 3600; }

int orario::Minuti() { return (sec / 60) % 60; }

int orario::Secondi() { return sec % 60; }

#endif
