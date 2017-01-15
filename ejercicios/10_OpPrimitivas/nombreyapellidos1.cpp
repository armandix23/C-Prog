#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	char nombre[50], apellidos[50], apellidos1[50];

	printf("Dime tu para nombre y apellidos guardar:\n");
	scanf("%s %s %s",nombre, apellidos, apellidos1);

	printf("Tu nombre es: %s %s %s \n",nombre, apellidos, apellidos1);

	return EXIT_SUCCESS;
}
