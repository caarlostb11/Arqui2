#include "ASlib.h"
//Prueba

void procesoHijo(){
    pid_t pidHijo = getpid();
    TInit(1,pidHijo);
    TPrint_int("Soy el Hijo y mi pid es",pidHijo);
    exit(EXIT_SUCCESS);
}

pid_t Fork(void(*proceso)()){
    pid_t pidFork = fork();
    if(pidFork < 0){
     printf("ERROR\n");
	exit(EXIT_FAILURE);
 }else if (pidFork == 0){  
    procesoHijo();
    exit(EXIT_SUCCESS);
 }

    return pidFork;

}

int main(){
 
 pid_t proceso_padre = getpid();
 pid_t proceso_hijo =Fork(procesoHijo);
 TInit(0,proceso_padre);

TPrint_int("Soy el padre", proceso_padre);

exit(EXIT_SUCCESS);

}


/*
pid_t identificacion_padre = getpid();
    TInit(0,1);
    TPrint_int("Soy el padre con pid: %d", identificacion_padre);

 pid_t mipid= fork();
 pid_t pid_fin; 
 int status;

 if(mipid < 0){
     printf("ERROR\n");
	exit(EXIT_FAILURE);
 }else if (mipid == 0){  
    procesoHijo();
    exit(EXIT_SUCCESS);
 }else if(mipid > 0){
     TInit(0,1);
    printf("Soy el proceso padre: mi pid = %d, mi hijo es %d\n",getpid(), mipid);
    pid_fin = wait(&status);
    if (status == 0)
			{
                TInit(1,1);
			printf("Soy el proceso hijo, mi pid = %d y termino\n", pid_fin);
			 TInit(0,1);
            printf("Soy el proceso padre: mi pid = %d, %d ha terminado\n",getpid(), pid_fin);
			}
		exit(EXIT_SUCCESS);

 }else{
       

 }



}*/