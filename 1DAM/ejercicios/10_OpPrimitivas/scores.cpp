
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	FILE * fichero;
	int scores;
	int scoresusuarios;
	char nombre[20];

	printf("Estas son las siguientes puntuaciones:");
	scanf(" %i : %s",&scores, nombre);
	fichero = fopen("scoresusuarios.txt");

	printf("./scoresusuarios.txt");
	scanf("%s",&scoresusuarios);
	return EXIT_SUCCESS;
}
