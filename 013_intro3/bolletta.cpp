// file "bolletta.cpp"

#include "bolletta.h"

// notare il costruttore di default per il campo dati info
bolletta::nodo::nodo() : next() {}

bolletta::nodo::nodo(const telefonata& t, nodo* s) : info(t), next(s) {}

bool bolletta::Vuota() const { return first == 0; }

void bolletta::Aggiungi_Telefonata(telefonata t){
    first = new nodo(t, first);     // aggiunge in testa alla lista
}

void bolletta::Togli_Telefonata(telefonata t){
    nodo* p = first, *prec = 0;
    while(p && !(p->info == t)){
        prec = p;
        p = p->next;
    }
    if (p){
        if(!prec) 
            first = p->next;
        else
            prec->next = p->next;
        delete p;
    }
}

telefonata bolletta::Estrai_Una(){
    // Precondizione: la bolletta non è vuota
    nodo* p = first;
    first = first->next;
    telefonata aux = p->info;   // costruttore di copia
    delete p;
    return aux;
}
