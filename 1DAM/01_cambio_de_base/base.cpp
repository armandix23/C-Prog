#include <stdio.h>
#include <stdlib.h>

int main(){
	int decimal;

	printf("Decimal: ");
	scanf(" %i", &decimal); //saca del buffer un entero

	// Hacer
	//	Mientras decimal / 2 > 0
	//	Imprimir decimal % 2
	//Mientras decimal = decimal / 2

	do {
		printf("%i",decimal % 2);
		decimal /= 2;
	} while (decimal>0);

	printf("\n"); // imprimir salto de linea

	return EXIT_SUCCESS;
}
