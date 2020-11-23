class orario{
  explicit orario(int);   //  csotruttore esplicito ad un parametro
  ...
};

orario x = 8;   // Errore, non compila: non vi è una invocazione 
                // implicita del costruttore orario(8)
