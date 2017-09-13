#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int sumTotal = 0, nIntroducido;

	printf("Introduce 10 números para realizar su media");

	for(int i = 0; i < 10; i++){
		printf("Numero %i:", i+1);
		scanf(" %i", &nIntroducido);

		sumTotal += nIntroducido;

	}
	printf("Tu media sera de: %i.\n", sumTotal/10);

	return EXIT_SUCCESS;
}
