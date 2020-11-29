bolletta Chiamate_A(int num, bolletta& b){
    bolletta selezionate, resto;    // oggetti locali
    while(!b.Vuota()){
        telefonata t = b.Estrai_Una();
        if(t.Numero() == num)
            selezionate.Aggiungi_Telefonata(t);
        else
            resto.Aggiungi_Telefoanta(t);
    }
    b = resto;  // overloading di operator= in bolletta
    return selezionate;
}
