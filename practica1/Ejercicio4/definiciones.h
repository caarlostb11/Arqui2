#ifndef DEFINICIONES_H
#define DEFINICIONES_H

unsigned char Dato;
unsigned int direccion;

unsigned direccion bus_A;
unsigned dato bus_D;

typedef struct{
  int (*read)(void);
  int (*write)(void);

}bus_C;



#endif
