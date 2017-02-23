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


    for(double i=1; i<tiempo; i+=1){
        vx += ax * tiempo;
         printf("t[%2.0lfs] ==>>> v: %lfm/s\n",i,vx);

    }
     for(double k=1; k<tiempo; k+=1){
        vy += ay * tiempo;
        printf("t[%2.0lfs] ==>>> v: %lfm/s\n",k,vy);
    }

  	return EXIT_SUCCESS;
}
