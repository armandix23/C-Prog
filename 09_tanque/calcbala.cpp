#include <stdio.h>
#include <stdlib.h>

#define tiempo 10
#define DELTA 0.001
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


    for(double i=1; i<tiempo; i++){
        vx += ax * tiempo;
         printf("El %2.0lf valor de vx es %lf\n",i,vx);

    }
     for(double k=1; k<tiempo; k++){
        vy += ay * tiempo;
        printf("El %2.0lf valor de vy es %lf\n",k,vy);
    }

  	return EXIT_SUCCESS;
}
