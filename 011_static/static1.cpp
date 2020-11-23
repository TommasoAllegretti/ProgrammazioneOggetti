class orario{
  public: 
    orario OraDiPranzo();
  ...
};

orario orario::OraDiPranzo() const { return orario(13, 15); }
