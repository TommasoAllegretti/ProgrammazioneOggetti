orario *ptr = new orario;
orario *ptr1 = new orario(14, 25);

cout << ptr->Ore() << endl;         //  stampa: 0
cout << ptr1->Ore() << endl;        //  stampa: 14

//  si ricordi che ptr->Ore() è un abbreviazione di (*ptr).Ore()
