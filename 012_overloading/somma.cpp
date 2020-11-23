orario orario::Somma(orario o){
  orario aux;
  aux.sec = (sec + o.sec) % 86400;
    // Notare che con o.sec si accede ad un campo
    // dati privato del parametro formale o
    return aux;
}
