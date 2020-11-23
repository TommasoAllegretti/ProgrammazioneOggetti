class orario{
  public: 
    orario(); // costruttore senza parametri
    ...       // detto anche costruttore di default
};

orario::orario(){ // definizione del costruttore di default
  sec = 0;
}

int main(){
  orario mezzanotte;
  cout << mezzanotte.Ore() << endl; // stampa: 0
}
