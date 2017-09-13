#include <stdio.h>
#include <stdlib.h>

#define tiempo 0.001
#define DIM 2 // Dimension
#define ax 0 // Aceleracion
#define ay -10

int main(int argc, char *argv[]){

    double vx; // Velocidad
    double vy;
    double caja;

    printf("Dime la velocidad de vx y de vy \n");
    scanf("%lf",&vx);

    printf("Dime la velocidad de vy \n ");
    scanf("%lf",&vy);

    vx=ax+tiempo;

    printf("El valor de vx es %lf \n",vx);


	return EXIT_SUCCESS;
}
