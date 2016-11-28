#include <stdio.h>
#include <stdlib.h>

#define rojo 1
#define azul 2
#define amarillo 3


int main(){

	int color1, color2, color3;

	printf ("Ves el color rojo ? [1. SI 4. NO]");
	scanf (" %i", &color1);

	printf ("Ves el color azul? [2. SI 5. NO]");
        scanf (" %i", &color2);

	printf ("Ves el color amarillo [3. SI 6. NO]");
        scanf (" %i", &color3);

system ("clear");

	if (color1 == rojo  and color2 == azul);
		printf ("Su color es morado\n");

	if (color1 == rojo and color3 == amarillo);
		printf ("Su color es naranja\n");

	if (color1 == rojo  and color1 == rojo);
		printf ("No se puede repetir\n");



	if (color2 == azul and color2 == azul);
		printf ("No se puede repetir\n");

	if (color2 == azul  and color3 == amarillo);
		printf ("Su color es verde\n");

	//if (color2 == 2 and color1 == 1)
	//	printf ("Su color es morado\n");



//	if (color1 == 1 and color2 == 2)
	//	printf ("Su color es naranja\n");

//	if (color1 == 1 and color3 == 3)
//		printf ("Su color es verde\n");

//	if (color1 == 1 and color1 == 1)
	//	printf ("No se puede repetir\n");


	return EXIT_SUCCESS;
}


