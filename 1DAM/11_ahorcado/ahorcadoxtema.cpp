#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXERRORES 6
/******************************************
 ******************************************
 **************** AHORCADO ****************
 ******************************************
 ******************************************
 *****************************************/

const char *lista[] = {
	"hidroavion",
	"grefusa",
	NULL
};

// 1.- Averiguar la cantidad de palabras que hay en la lista.
// 2.- Escoger un numero aleatorio.
// 3.- Ver con que celda corresponde.
// 4.- Devolver lo que hay en la celda correspondiente.
	const char *elegir(){
	int n_palabras;
	int aleatorio;

	for (n_palabras=0; lista[n_palabras] !=NULL; n_palabras++ );
	aleatorio = rand() % n_palabras;

	return lista[aleatorio];
	}

	char usuario(){
	int car;
		printf("Letra: ");
		scanf(" %c", &car);

	return car;
	}

	bool distinta(const char *palabra1, char *palabra2){
		return	!!strcmp(palabra1,palabra2);
	}

int main(int argc, char *argv[]){

	int vidas = MAXERRORES;
	srand(time(NULL));
	const char *palabra = elegir();

	//2.- Poner una celda vacia por cada letra.
	int longitud = strlen(palabra);
	char *adivinando = (char *) malloc(longitud + 1); //Memoria dinamica

	memset(adivinando, '-', longitud);
	adivinando[longitud] = '\0';


	do{
	char letra = usuario();


	for(int n=0; palabra[n] != '\0'; n++)
	if( letra == palabra[n] )
		adivinando[n] = letra;

	} while(distinta(palabra,adivinando) && vidas);

	free(adivinando);

	return EXIT_SUCCESS;
}


/***********************************************************************
 * 			INSTRUCCIONES                                  *
 ***********************************************************************

 1.- Elegir una palabra
 2.- Poner una celda vacia por cada letra.
 3.- Preguntarle una letra al usuario.
 4.- Comparas la letra del usuario con la n letra de la palabra de referencia y si son iguales lo pongo en la celda n lo buscado.
 5.- n++ => paso 4 (hasta la ultima letra)
 6.- => paso 3 (hasta que la palabra este adivinada o lim errores)*/


