
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	char palabras[100], palabra1[50], palabra2[50];

	printf("Dime dos palabras que quieras guardar:\n");
	scanf("%s %s",palabra1, palabra2);

	sprintf(palabras,"%s %s", palabra1, palabra2);
	printf("Has escrito: %s \n", palabras);

	return EXIT_SUCCESS;
}
