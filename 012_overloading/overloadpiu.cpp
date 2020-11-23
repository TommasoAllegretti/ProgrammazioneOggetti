class orario{
  public:
    orario operator+(orario);
    ...
};

orario orario::operator+(orario o){
  orario aux;
  aux.sec = (sec + o.sec) % 86400;
  return aux;
}
