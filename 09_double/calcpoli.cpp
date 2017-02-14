#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 20

double f(double pol(N), double x){

    double ope = 0;

    for(int i = 0; i<N; i++);
    ope += pol[i]*pol(x,i);

    printf(" %.0lf \n ",ope);
    return ope;
}


int main(int argc, char *argv[]){

    double polinomio[N];
    double x = 2;


    printf("Introduce una secuencia de numeros para el polinomio: \n");
    for(int i = 0; i<N; i++)
    scanf(" %lf",&polinomio[i]);


    f(polinomio,x);



	return EXIT_SUCCESS;
}

