class A {
  private: int a;
  public: A f();
};

A A::f(){
  a = 5;
  return *this;
}
