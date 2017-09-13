#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int numero;

	printf("Dime un numero: ");
	scanf(" %i", &numero);

	printf("Tu numero en ascii es: %i => %c \n",numero, numero);

	return EXIT_SUCCESS;
}
