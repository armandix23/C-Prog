#include <stdio.h>
#include <stdlib.h>

#define DELTA .1

int main(int argc, char *argv[]){
        double a = -10.; // Aceleracion
        double v =  40.; // Velocidad
        double s =   0.; // Espacio
        double t =   0.; // Tiempo

        /*  Pasen los años */
        for (t=0.; s>=0. ; t+= DELTA){
        printf(" t[%.2lfs] => v: %.2lfm/s => s: %.2lfm\n", t, v, s);
        v += a * DELTA;
        s += v * DELTA;
        }

        return EXIT_SUCCESS;
}

