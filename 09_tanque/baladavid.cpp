#include <stdio.h>
#include <stdlib.h>

#define DIM 2
#define delta 0.1
#define X 0
#define Y 1

double vx (double v, double x, double tiempo){
       for(int i=0; i<tiempo; i++)
                  v += x * delta;
          return v;
}
double vy (double v, double y, double tiempo){
        for(int i=0; i<tiempo; i++)
                    v += y * delta;
            return v;
}

int main(int argc, char *argv[]){

        double tiempo;
            double x;
                double y;
                    double a[DIM] = {0,-10};

                        printf("Introducir el tiempo: \n");
                            scanf(" %lf", &tiempo);

                                printf("Introducir la velocidad de x \n");
                                    scanf(" %lf", &x);

                                        printf("Introducir la velocidad de y: \n");
                                            scanf(" %lf", &y);

                                                printf(" La velocidad de x es: %lf y de y es: %lf\n", vx (x, a[X], tiempo), vy (y, a[Y], tiempo));

                                                    return EXIT_SUCCESS;
}

