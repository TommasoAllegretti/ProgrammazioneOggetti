// file "bolletta.h"

#ifndef BOLLETA_H
#define BOLLETTA_H
#include "telefonata.h"

class bolletta{
    friend class iteratore;
private:
    class nodo{
    public:
        nodo();
        nodo(const telefonata& x, nodo* p) : info(x), next(p) {}
        telefonata info;
        nodo* next;
        ~nodo();
    };
    nodo* first;    //puntatore al primo nodo della lista
    static nodo* copia(nodo*);
    static void distruggi(nodo*);
public:
    class iteratore{
    friend class bolletta;
    private:
        bolletta::nodo* punt;   // nodo puntato dall'iteratore
    public:
        bool operator==(iteratore) const;
        bool operator!=(iteratore) const;
        iteratore& operator++();    // operator++ prefisso
        iteratore operator++(int);  // operator++ postfisso    
    };  // end class iteratore
    bolletta() : first(0) {}
    ~bolletta();    // distruttore profondo
    bolletta(const bolletta&);  // copia profonda
    bolletta& operator=(const bolletta&);   // assegnazione profonda
    bool Vuota() const;
    void Aggiungi_Telefonata(telefonata t);
    void Togli_Telefonata(telefonata t);
    telefonata Estrai_Una();
    // metodi che usano iteratore
    iteratore begin() const;
    iteratore end() const;
    telefonata& operator[](iteratore) const;
};
#endif
