
#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *tubo; // Crea un stream  | Conectar tubo=fopen

	tubo = fopen("iberos.txt", "w"); //Conectar tubo a algo, otro archivo (este caso no existe) . Modo queremos abrirlo, w escribir - r leer - a adjuntar (la b significa abierto en binario)

	printf("hola\n");

	fprintf(stdout,"hola\n");
	fprintf(tubo,"hola\n");



	fclose(tubo); //Cerrar tubo

	return EXIT_SUCCESS;
}
