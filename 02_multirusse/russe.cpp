#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	// Declaro las variables op1, op2, resultado
	// Pedir op1 y op2 al usuario
	// Poner resultado a 0
	//
	//	 Si op2 es impar
	//	 	acumular op1 en resultado
	//	 Divide op2 / 2
	//	 Duplica op1
	// Repetir si op2 > mayor 0


	int op1, o1;
	int op2, o2;
	int resultado = 0;
	// Declarar variable int + nombre


	printf("Operando 1: ");
	scanf(" %i", &op1);
	o1 = op1;

	printf("Operando 2: ");
	scanf(" %i", &op2);	// Saca todos los whitespace y lea un numero entero " %i"
	o2 = op2;

	do{
	   if (op2 % 2 == 1)
		   resultado += op1;
	  op2 >>= 1; //coge op2 y desplaza los bits a la derecha 1 espacio.
	  op1 <<= 1; //coge op1 y desplaza los bits a la izquierda 1 espacio.

	} while (op1 >0);

	printf (" %i x %i = %i\n", o1, o2, resultado); // Imprime cadena de caracteres, especificador de formato sustituye  "%i" = op1

	return EXIT_SUCCESS;
}
