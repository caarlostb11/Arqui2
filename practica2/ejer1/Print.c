#include <stdio.h>
#include <unistd.h>
#include "ASlib.h"
//hola que tal

int main(){

    TInit(4,1);
    TPrint("Hola" );

    pid_t mipid= getpid();
    TPrint_int("Este es mi pid:" , mipid);


}
