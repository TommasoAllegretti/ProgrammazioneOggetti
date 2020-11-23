class orario(){
  public:
  ...
  orario UnOraPiuTardi();
  void AvanzaUnOra();
 private:
  ...
};

orario orario::UnOraPiuTardi(){
  orario aux;
  aux.sec = (sec + 3600) % 86400;
  return aux;
}

void orario::AvanzaUnOra(){
  sec = (sec + 3600) % 86400;
}

int main(){
  orario mezzanotte;
  cout << mezzanotte.Ore();             // stampa: 0
  
  orario adesso(15);
  cout << adesso.Ore();                 // stampa: 15
  
  adesso = mezzanotte.UnOraPiuTardi()
  cout << adesso.Ore();                 // stampa: 1
  cout << mezzanotte.Ore();             // stampa: 0
  
  mezzanotte.AvanzaUnOra();
  cout << mezzanotte.Ore();             // stampa: 1
  
}
