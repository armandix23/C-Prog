#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define  N 0x15
// Declara un array de N caracteres que se llame buffer
// Declara una variable que sea un puntero a una palabra
// Pidele el nombre al usuario , asegurate que el usuario pueda tener un nombre compuesto
// Reservar el espacio para la palabra que ha metido el usuario
// Copia lo que hay en buffer en palabra
// Imprime lo que contenga palabra
// Libera 

int main(int argc, char *argv[]){

	char buffer[N];
	char *palabra;

	printf("Dime tu nonbre: \n");
	fgets(buffer, N, stdin);

	palabra = (char *) malloc( strlen(buffer)+1 );
	strcpy(palabra, buffer);

	printf(" %s\n",palabra);
	free(palabra);


	return EXIT_SUCCESS;
}
