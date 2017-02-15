#include <stdio.h>
#include <stdlib.h>

#define N 20


int main(int argc, char *argv[]){

    double coef[N];
    double resultado = 0;
    double x;
    double max_cof;
    double potencia = 1;

    printf("Dime el maximo de coeficientes que quieres guardar: \n ");
    scanf(" %lf",&max_cof);

    printf("Dime los coeficientes de atras a delante: \n ");
      for(int i=0; i<=max_cof ;i++){
          scanf(" %lf",&coef[i]);
      }

    printf("Dime el valor de x: \n ");
    scanf(" %lf",&x);

    for(int pos=0; pos<=max_cof; pos++, potencia*=x)
        resultado+=coef[pos]*potencia;

    printf("El resultado es %lf \n ",resultado);




	return EXIT_SUCCESS;
}

