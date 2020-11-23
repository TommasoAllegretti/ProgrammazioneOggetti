//  costruttore di default
orario::orario(){
  sec = 0;
}

//  costruttore ore-minuti
orario::orario(int o, int m){
  if (o < 0 || o > 23 || m < 0 || m > 59) sec = 0;
  
  else sec = o * 3600 + m * 60;
}

//  costruttore ore-minuti-secondi
orario::orario(int o, int m, int s){
  if (o < 0 || o > 23 || m < 0 || m > 59 || s < 0 || s > 59) sec = 0;
  
  else sec = o * 3600 + m * 60 + s;
}
