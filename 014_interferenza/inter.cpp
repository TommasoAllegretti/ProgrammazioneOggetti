int main(){
    bolletta b1;
    telefonata t1(orario(), orario(), 2121212);
    telefonata t2(orario(), orario(), 3131313);
    b1.Aggiungi_Telefonata(t1);
    b1.Aggiungi_Telefonata(t2);
    cout << b1;
    bolletta b2;
    b2 = b1;
    b2.Togli_Telefonata(t1);
    cout << b1 <<  b2;
}
