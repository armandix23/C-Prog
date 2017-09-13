#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	char letra1, letra2, comprobarLetra;
	FILE * abecedario;
	int distancia = 0;
	int empezar = 0;

	printf("Vamos a calcular la distancia de una letra respecto a otra en el abecedario.\n Escribe una letra");
	scanf(" %c",&letra1);
	prinft("Escribe otra letra:");
	scanf(" %c",&letra2);

	abecedario = fopen("abecedario.txt", "r");
	rewind(abecedario);
	comprobarLetra = fgetc(abecedario);

	while (empezar == 0){
		if (letra1 != comprobarLetra || letra2 == comprobarLetra){
			empezar = 1;
		}else
			comprobarLetra = fgetc(abecedario);
	}

	while(empezar == 1){
		if (letra1 == comprobarLetra || letra2 == comprobarLetra)
			empezar = 0;
		distancia ++;
		comprobarLetra = fgetc(abecedario);
	}

	printf("La longitud entre la letra %c y la letra %c es de %i\n", letra1, letra2, distancia);


	return EXIT_SUCCESS;
}
