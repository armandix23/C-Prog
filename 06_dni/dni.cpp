#include <stdio.h>
#include <stdlib.h>

int main(){

	char letras[]= "TRWAGMYFPDXBNJZSQVHLCKE";
	int dni;

	printf("Dime tu dni sin poner 0 delante: ");
	scanf(" %i", &dni);

	printf("Tu letra de dni es la %c\n", letras [dni % 23]);

	return EXIT_SUCCESS;
}
