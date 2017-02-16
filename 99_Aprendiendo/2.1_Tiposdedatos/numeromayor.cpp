/* Programa que use 3 variables y las 3 sean numeros reales, y mostrar en pantalla el mayor */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int x , y , z;
    int mayor;

    printf("Dime 3 numeros y te dire el mayor \n ");
    scanf(" %i%i%i",&x,&y,&z);

    if(x>y){
        if(x>z){
            mayor=x;
        }
        else{
            mayor=z;
        }
    }
        else{
        if(y>z){
            mayor=y;
        }
        else{
            mayor=z;
        }
    }
        printf("El numero mayor es %i \n ",mayor);
	return EXIT_SUCCESS;
}
