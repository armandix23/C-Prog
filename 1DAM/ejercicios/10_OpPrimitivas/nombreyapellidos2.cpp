
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	char nombre[50], apellidos[15], apellidos1[15], suma[100];

	printf("Dime tu para nombre y apellidos guardar:\n");
	scanf("%s %s %s",nombre, apellidos, apellidos1);

	sprintf(suma,"%s %s %s",nombre,apellidos, apellidos1);
	printf("Tu nombre y apellidos es: %s \n",suma);

	return EXIT_SUCCESS;
}
