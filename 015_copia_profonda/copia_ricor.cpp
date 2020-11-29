bolletta::nodo* bolletta::copia(nodo* p){
    if(!p) return 0; // caso base: lista vuota
    
    else
        // passo induttivo:
        // per induzione copia(p->next) è la copia della coda
        // di p e quindi inserisco il primo nodo di p in testa
        // alla lista copia(p->next)
        return new nodo(p->info, copia(p->next));
}

void bolletta::distruggi(nodo* p){
    // caso base: lista vuota, niente da fare

    if(p){
        // passo induttivo
        // per induzione distruggi(p->next) dealloca la coda di p e
        // quindi rimane de deallocare solamente il primo nodo di p
        distruggi(p->next);
        delete p;
    }
}
