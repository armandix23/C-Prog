#include <stdio.h>
#include <stdlib.h>

#define NUM_INTENTOS 6

int main(void){

	char palabra[] = {'melifluo','inefable','sonambulo','serendipia','limerencia','etereo','arrebol','irisdencia','epifania','luminiscencia','soledad','aurora','efimero','incandescencia','elocuencia','efervescencia'};
	char estado[sizeof palabra];
	int adivinado;
	int longitud;
	int i;
	int j;
	char letra;

	adivinado = 0;
	for(i = 0; palabra[i] != '\0'; i++){
		if(palabra[i] == ' ')
			estado[i] = ' ';
	else{
		estado[i] = '*';
		adivinado++;
	}
	estado[i] = '\0';
	longitud = i;

	for(i = 0; i < NUM_INTENTOS; i++){
		printf("Estado: %s\n",estado);
		printf("Introduce una letra: ");
		fflush(stdout);
		if(scanf(" %c", &letra) !=1)
			return EXIT_FAILURE;

	for(j = 0; j < longitud; j++)
		if(estado[j] == '*' && palabra[j] == letra){
			estado[j] = palabra [j];
			adivinado--;
		}
	if (adivinado == 0){
		printf("Estado: %s\n",estado);
		puts("GANO!");
	}else
		puts("Perdio!");
	}
	}
return EXIT_SUCCESS;
}
