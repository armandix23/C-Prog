#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 0x100
#define CANTIDAD(x) (sizeof ( (x) ) / sizeof(char *) - 1)

const char *palabra[]={"melifluo","inefable","sonambulo","serendipia","limerencia","etereo","arrebol","irisdencia","epifania","luminiscencia","soledad","aurora","efimero","incandescencia","elocuencia","efervescencia",NULL};

int main(int argc, char *argv[]){

	char adivinado[MAX], letErroneas[MAX];
	const char *elegida;
	char letra;
	int aleatoria, numLet = 0, Errors = 0;

	srand(time(NULL));
	aleatoria = rand() % CANTIDAD(palabra);
	elegida = palabra[aleatoria];

	bzero(adivinado,MAX);
	for (int i=0; i<(int) strlen(elegida); i++)
		adivinado[i] = '-';

	//adivinado[1] = 'a';

	printf("\t%s\n", adivinado);
	printf("\t%s\n", elegida);


	while(numLet > 0 && Errors <5){
		printf("Mete una letra: ");
		scanf(" %c",&letra);

	int anterior = numLet;
	for(int i=0 ; i<strlen(elegida); i++){
		if(letra == elegida[i]){
			adivinado[i] = letra;
			numLet --;
		}
	}
	if(anterior == numLet)
		letErroneas[Errors++] = letra;

	printf(" %s\n",adivinado);
	printf(" Llevas %i errores \n Te quedan %i errores por realizar",Errors,5-Errors);
	if(Errors > 0)
		printf(" Has dicho estas letras erroneas: %s \n",letErroneas);

	}

	if(numLet == 0)
		printf("\n GANASTES !");
	else if(Errors == 5)
		printf("\n Perdistes !");
	return EXIT_SUCCESS;
}
