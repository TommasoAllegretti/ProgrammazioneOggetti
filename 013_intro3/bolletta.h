#ifndef BOLLETTA_H
#define BOLLETA_H

#include "telefonata.h"

class bolletta{
    public:
        bolletta() : first(0) {}    // definizione inline
        bool Vuota() const;
        void Aggiungi_Telefonata(telefonata);
        void Togli_Telefonata(telefonata);
        telefonata Estrai_Una();
    
    private:
        class nodo{     // la classe nodo è interna e privata
            public:
                nodo();
                nodo(const telefonata&, nodo*);
                telefonata info;
                nodo* next;
        };

        nodo* first;
};

#endif
