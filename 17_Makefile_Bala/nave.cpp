#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int a,b,resultado;
    printf("Dime valor a y b");
    scanf("%i %i",&a,&b);

    resultado=a+b;
    printf(" %i",resultado);
    
	return EXIT_SUCCESS;
}
