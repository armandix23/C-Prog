#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int lista[10];

	for (int i = 0; i < 10; i++){
		lista[i]=i+1;

		printf("Comprobando: %i\n",lista[1]);
	}

	return EXIT_SUCCESS;
}
