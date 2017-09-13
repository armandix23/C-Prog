/*Otra forma con un array*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int numIntroducido = 0, numMayor = 0;

    printf("Dime 5 numeros: \n ");
      for(int i=0; i<5 ; i++){
      printf("Numero %i:   ",i+1);
        scanf(" %i",&numIntroducido);

    if(numIntroducido>numMayor)
        numMayor=numIntroducido;
      }
    printf("El numero mayor es %i \n ",numMayor);

	return EXIT_SUCCESS;
}


