#include <stdio.h>
#include "Salida.h"
#include "Conversor.h"

int main (int ac, char**av){
  char *str;
  for (int i = 1; i < ac; i++) {
    str = av[i];
    Conversor_mayusculas(str);
    printf("PRUEBA" );
    Salida_imprimir(str);
  }

}
