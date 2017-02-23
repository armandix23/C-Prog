#include <stdio.h>
#include <stdlib.h>

#define N 20

int main(int argc, char *argv[]){

      double max_coef, coef[N];
      double resultado = 0, exponente = 1 , x = 0;

      printf("Dime cuantos coeficientes quieres utilizar: \n ");
      scanf(" %lf",&max_coef);

      printf("Dime los coeficientes: \n ");
      for(int i=0; i<=max_coef; i++){
          scanf(" %lf",&coef[i]);
      }


      for(int r=0; r<=max_coef; r++,exponente*=x){
          resultado+=coef[r]*exponente;
      }
          printf("El resultado es %lf \n ",resultado);

	return EXIT_SUCCESS;
}


