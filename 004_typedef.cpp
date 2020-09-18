//La keyword typedef permette di dichiarare un alias per un tipo già esistente

typedef unsigned short int Intero;

typedef const int* PuntCostante;

typedef long double ArrayReale[20];

typedef struct{
  double parte_reale;
  double parte_immaginaria;
} Complesso;

typedef enum{lun, mar, mer, gio, ven, sab, dom} Giorno;
