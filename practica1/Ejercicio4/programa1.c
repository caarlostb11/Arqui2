#include "DRAM.h"
#include DEFINICIONES_H

int main (int ac, char**av){

  memoria.tamano=8192;
  Rellenar_memoria(memoria);
  DRAM_Checksum(memoria);


  }

  void Rellenar_memoria(DRAM *memoria){
    FILE *fichero;
    char nombre_fichero[]= av;
    size_t resultado;
    unsigned duracion;


    fichero= fopen ( nombre_fichero, "r");
    if(fichero== NULL){

      printf("El dichero no se ha podido abrir para lectura. \n" );
      return -1;
    }else{

          while (!feof(fichero)){
            fgets(memoria.datos, 50, fichero);
            fclose(fichero);
            //duracion = duracion*125
          }

    }

    //ACUMULAR LA DURACION DE LA OPERACION



    }


    /*
    if(fichero== NULL){

      printf("El dichero no se ha podido abrir para lectura. \n" );
      return -1;
    }
    int num;
    while (!feof(fichero)){

      resultado =fread(&num, sizeof(int), 1 , fichero);
      if(resultado !=1){
        break;
      }
      suma=suma+num;
    }

    memoria.datos= fread()*/
