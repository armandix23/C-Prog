#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
    int contador; // Creamos un contador.
                  // Paracontrolar los hilos que queremos crear
    for(contador = 0; contador < 10; contador++){ // Para crear 10 y el padre

        if(fork()==0){//Creamos
          printf("PID del HIJO %i proceso = %i Pid Padre = %i \n ",getpid(),contador,getpid());
          //Imprimimos PID del hijo y el numero de proceso con el PID del padre

        }else{ // Si lo devuelve el fork(distinto de 0

          wait(2);// esperamos a que termine el hijo
              printf("PID del Hijo %i = %i Pid padre = %i \n",getpid(),contador,getpid());

          exit(0); // Elimina 
        }

    }

}
