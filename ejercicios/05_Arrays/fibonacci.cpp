#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){

	int Numero = 1, NUM = 1, contador = 2, min;

	printf(" %i, %i,",Numero, NUM);

	do{
		min = Numero + NUM;
		printf(" %i",min);

		Numero = NUM;
		NUM = min;
		contador++;

	}while(contador < 100);

	printf(" \n");


	return EXIT_SUCCESS;
}
