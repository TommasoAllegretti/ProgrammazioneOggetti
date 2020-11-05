int main(){
  // esempio funzione find()
  string st, st1;
  int pos;
  
  getline(cin, st); // prende riga in input e la memorizza in st
  
  pos = st.find("rosso");
  
  if(pos == string::npos){
    cout << "rosso non è sottostringa di st" << endl;
  }
  
  else{
    cout << "pos è la posizione del carattere 'p' della prima occorrenza di 'rosso' come sottostringa di st" << endl;
  }
  
  // prendiamo come esempio che st1 = "FLAG: rosso bianco verde";
  // esempio funzione substr()
  
  st1 = st.substr(pos, 5);
  // ritorna la sottostringa di st di lunghezza 5 a partire
  // dalla posizione pos
  // In questo caso st1 == "rosso"
  
  // esempio funzione replace()
  
  st.replace(pos, 5, "blu");
  // sostituisce in st i 5 caratteri a partire dalla 
  // posizione pos con la stringa "blu"
  // In questo caso st == "FLAG: blu bianco verde"
  
}
