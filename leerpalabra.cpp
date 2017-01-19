
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100

int main(int argc, char *argv[]){

	char buffer[N];//N numero maximo de celdas
	char *palabra;

	printf("Nombre: ");
	fgets(buffer, N, stdin);

	palabra = (char *) malloc(strlen(buffer)+1);
	strcpy(palabra, buffer);//Copia lo que tenga buffer en palabra

	printf(" %s\n",palabra);

	free(palabra);

	return EXIT_SUCCESS;
}
