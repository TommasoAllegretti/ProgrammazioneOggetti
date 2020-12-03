// file "bolletta.cpp"
#include "bolletta.h"

bool bolletta::iteratore::operator==(iteratore i) const{
    return punt = i.punt;
}

bool bolletta::iteratore::operator!=(iteratore i) const{
    return punt != i.punt;
}

// incremento prefisso
bolletta::iteratore& bolletta::iteratore::operator++(){
    if(punt) punt = punt->next; // side-effect
    return *this;
}   // NB: se punt==0 non fa nulla

// incremento postfisso
bolletta::iteratore bolletta::iteratore::operator++(int){
    iteratore aux = *this;
    if(punt) punt = punt->next; // side-effect
    return aux;
}

bolletta::iteratore bolletta::begin() const{
    iteratore aux;
    aux.punt = first;   // per amicizia
    return aux;
}

bolletta::iteratore bolletta::end() const{
    iteratore aux;
    aux.punt = 0;   // per amicizia
    return aux;
}

telefonata& bolletta::operator[](bolletta::iteratore it) const{
    return (it.punt)->info; // per amicizia
    //NB: nessun controllo i.punt != 0
}
