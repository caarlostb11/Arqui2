#include <stdio.h>
#include <string.h> 
#include <stddef.h>
#include "salida.h" 
#include <ctype.h>

void Salida_imprimir (const char *mensaje){
    printf( "%s  ",mensaje);

}

void Conversor_mayusculas(char *str){

    if(strcmp(str, "") == 0){ 

    } else{
        for (int i= 0 ; i<strlen(str) ; i++){
            str [i] = toupper(str[i]);
        } 
        
    } 
   
} 

int main (int ac ,char *str[]  ){

    for(int i=1; i< ac; i++){
        char mensaje[20];
        strcpy(mensaje, str[i]);
        

        Conversor_mayusculas(mensaje);
        Salida_imprimir(mensaje);

    } 
    printf(" \n ");


} 

