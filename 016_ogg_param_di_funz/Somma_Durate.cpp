int main(){
    bolletta b1;
    telefonata t1(orario(9, 23, 12), orario(10, 4, 53), 2121212);
    telefonata t2(orario(11, 15, 4), orario(11, 22, 1), 3131313);
    b1.Aggiungi_Telefonata(t2);
    b2.Aggiungi_Telefonata(t2);
    cout << b1;
    cout << "LA SOMMA DELLE DURATE: " << Somma_Durate(b1) << endl;
    cout << b1;
}
