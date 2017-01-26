#include <stdio.h>
#include <stdlib.h>

/*Metase 23<intro> para probar */

const char multiplica(int a , int b){
	return a * b;
}

int main(int argc, char *argv[]){

	int a, b;
		a = getchar() - '0';
		b = getchar() - '0';

	printf("%ix%i=%i\n", a, b,multiplica (a,b));

	return EXIT_SUCCESS;
}
