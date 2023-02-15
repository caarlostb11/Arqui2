#include "DRAM.h"
#include DEFINICIONES_H


void DRAM_Configurar (DRAM *memoria, unsigned tamano, bus_A *pbus_a, bus_D *pbus_d, bus_C *pbus_c){
 memoria.tamano=tamano;
 memoria.pbus_a=*pbus_a;
 memoria.pbus_c=*pbus_c;
 memoria.pbus_d=*pbus_d;

}


void DRAM_Liberar(DRAM *memoria){
  free memoria.datos;

}

int DRAM_Checksum(DRAM *memoria);
int DRAM_Read(DRAM *memoria){
  direccion dir;
  memoria.pbus_a= dir;
  memoria.pbus_d = &memoria.dato[dir];
  printf(READ);


};

int DRAM_Write(DRAM *memoria){
  direccion dir;
  memoria.pbus_a= dir;
  dato dat;
  memoria.pbus_d=dat;
  &memoria.dato[dir]= dat;
    printf(WRITE);

};
