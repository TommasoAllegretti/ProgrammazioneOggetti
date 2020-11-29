orario Somma_Durate(bolletta b){
    orario durata;  // costruttore di default di orario
    while(!b.Vuota()){
        // estrae dal primo nodo della lista
        telefonata t = b.Estrai_Una();
        durata = durata + t.Fine() - t.Inizio();
    }   // vincolo: durata < 24 ore!
    return durata; 
}
