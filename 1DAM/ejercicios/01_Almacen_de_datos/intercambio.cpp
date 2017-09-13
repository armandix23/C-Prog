#include <stdio.h>
#include <stdlib.h>

int main(){
	int caja1, caja2, almacen; // Nombre variables

	printf("Dime un número para intercambiar:\n");
	scanf(" %i", &caja1);
	printf("Dime otro número para intercambiarlo con el otro;\n");
	scanf(" %i", &caja2);


	printf("Con esto hacemos un intercambio de numeros\n");
	almacen = caja1;
	caja1 = caja2;
	caja2 = almacen;

	printf("Los numeros se han intercambiado, el primero es %i, y el segundo %i\n",caja1, caja2);
	return EXIT_SUCCESS;
}
