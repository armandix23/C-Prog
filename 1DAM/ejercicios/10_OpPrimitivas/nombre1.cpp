

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	char palabra[50];
	
	printf("Dime tu para  guardar:\n");
	scanf("%s",palabra);

	printf("Tu nombre es: %s \n", palabra);

	return EXIT_SUCCESS;
}
