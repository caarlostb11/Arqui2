#include <stdio.h>
#include <unistd.h>
#include "ASlib.h"


int main(){

    pid_t proceso_padre = getpid();
    TPrint_int("Soy el padre", proceso_padre);


}