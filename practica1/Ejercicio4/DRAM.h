
#define DRAM_h
#define READ 125
#define WRITE 150

typedef struct DRAM{
  unsigned tamano;

  bus_A *pbus_a;
  bus_D *pbus_d;
  bus_C *pbus_c;

  Dato *datos
}DRAM;


void DRAM_Configurar (DRAM *memoria, unsigned tamano, bus_A *pbus_a, bus_D *pbus_d, bus_C *pbus_c);
void DRAM_Liberar(DRAM *memoria);
int DRAM_Checksum(DRAM *memoria);
int DRAM_Read(DRAM *memoria);
int DRAM_Write(DRAM *memoria);
