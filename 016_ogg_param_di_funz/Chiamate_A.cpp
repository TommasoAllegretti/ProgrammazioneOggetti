int main(){
    bolletta b1;
    telefonata t1(orario(9, 23, 12), orario(10, 4, 53), 2121212);
    telefonata t2(orario(11, 15, 4), orario(11, 22, 1), 3131313);
    telefonata t3(orario(12, 17, 5), orario(12,22, 8), 2121212);
    telefonata t4(orario(13, 46, 5), orario(14, 0, 33), 3131313);
    b1.Aggiungi_Telefonata(t4);
    b2.Aggiungi_Telefonata(t3);
    b1.Aggiungi_Telefonata(t2);
    b2.Aggiungi_Telefonata(t1);
    cout << b1;
    bolletta b2 = Chiamate_A(2121212, b1);
    cout << b1;
    cout << b2;
}
