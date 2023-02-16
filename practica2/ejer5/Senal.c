#include <stdio.h>
#include <unistd.h>
#include "ASlib.h"
#include <signal.h>
#include <string.h>
#include <sys/wait.h>


void procesoHijo(pid_t proceso);


int main(){
   // pid_t pid_fin;
    int status;
    pid_t proceso_padre = getpid();
    TPrint("Soy el padre");
    TPrint_int("Mi pid es ", proceso_padre);
    //Poner bonito luego porque bueno

    Line_init();

    pid_t proceso_hijo = fork();
    //TPrint("Soy el hijo");
   // TPrint_int("Mi pid es ", proceso_hijo);

   //Invoco a proceso_hijo 
   procesoHijo(proceso_hijo);

    //codigo comando
    printf("\ndime algo bonito");
    char *mensaje;
    mensaje = Line_get();
    printf("\nIMPRIMO: %s", mensaje);
    
    //while(!success)
    if(strcmp(mensaje, "cancel") == 0) {
        printf("antes del kill");
        kill(proceso_hijo,SIGINT);
        printf("despues del kill");

        proceso_hijo = wait(&status); //wait devuelve el pid del hijo que acaba
        TPrint_int("Esto es pid_fin: ", proceso_hijo);
   
		printf("Soy el proceso hijo, mi pid = %d y termino\n", proceso_hijo);
		printf("Soy el proceso padre: mi pid = %d, %d ha terminado\n",getpid(), proceso_hijo);
		
		exit(EXIT_SUCCESS);
        

    } else {
        kill(proceso_hijo, SIGUSR1);
        printf("\nya he hecho el kill");
    }


   }

void procesoHijo(pid_t proceso){
    printf("\nEstoy en el void");

}

void recibirMensaje(){
    printf("He ");
}

void recibirFin(){

}