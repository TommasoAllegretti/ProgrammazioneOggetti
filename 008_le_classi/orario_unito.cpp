class orario{
public:
  int Ore() { return sec / 3600; }
  int Minuti() { return (sec / 60) % 60; }
  int Secondi() { return sec % 60; }

private:
  int sec;
};
