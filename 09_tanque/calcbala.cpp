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

    printf("Dime la velocidad de vx  \n");
    scanf("%lf",&vx);

    printf("Dime la velocidad de vy \n ");
    scanf("%lf",&vy);


    for(int i=0; i<tiempo; i++)
        vx += ax * tiempo;
      

     for(int k=0; k<tiempo; k++)
        vy += ay * tiempo;
    

    printf("El valor de vx es %lf\n",vx);
    printf("El valor de vy es %lf\n",vy);

  	return EXIT_SUCCESS;
}
