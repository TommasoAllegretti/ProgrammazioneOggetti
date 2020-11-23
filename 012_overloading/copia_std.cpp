C fun(C a) { return a; }

int main(){
  C c;
  fun(c);
  // 2 invocazioni del costruttore di copia
  
  C y = fun(c);
  // 3 invocazioni del costruttore di copia (non 2!)
  
  C z; z = fun(c);
  // 2 invocazioni del costruttore di copia
  
  fun(fun(c));
  // 2 invocazioni del costruttore di copia (non 3!)
}
