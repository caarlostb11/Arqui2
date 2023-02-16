
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>


void procesoHijo(){

    printf("Soy el proceso hijo, mi pid = %d\n", getpid());
		_exit(EXIT_SUCCESS);
}

int main(){

pid_t identificacion_padre = getpid();
    TPrint("Soy el padre con pid: %d", identificacion_padre);

 pid_t mipid= fork();
 pid_t pid_fin; 
 int status;

 if(mipid < 0){
     printf("ERROR\n");
	exit(EXIT_FAILURE);
 }else if (mipid == 0){  
    procesoHijo();
 }else if(mipid > 0){
    
    printf("Soy el proceso padre: mi pid = %d, mi hijo es %d\n",getpid(), mipid);
    pid_fin = wait(&status);
    if (status == 0)
			{
			printf("Soy el proceso hijo, mi pid = %d y termino\n", pid_fin);
			printf("Soy el proceso padre: mi pid = %d, %d ha terminado\n",getpid(), pid_fin);
			}
		exit(EXIT_SUCCESS);

 }else{
       

 }



}