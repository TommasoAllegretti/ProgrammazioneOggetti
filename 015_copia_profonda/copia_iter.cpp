bolletta::nodo* bolletta::copia(nodo* p){
    if(!p) return 0;
    nodo* primo = new nodo;
    // invocazione del costruttore di default di nodo
    // primo punta al primo nodo della copia della lista
    primo->info = p->info;
    nodo* q = primo;
    // q punta all'ultimo nodo della lista finora copiata
    while(p->next){
        q->next = new nodo;
        p = p->next;
        q = q->next;
        q->info = p->info;
    }
    q->next = 0;
    return primo;
}

void bolletta::distruggi(nodo* p){
    // scorro tutta la lista deallocando ogni nodo
    nodo* q;
    while(p){
        q = p;
        p = p->next;
        delete q;
    }
}
