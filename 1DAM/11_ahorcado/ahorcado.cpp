#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 0x100
#define CANTIDAD(x) (sizeof ( (x) ) / sizeof(char *) - 1)

const char *palabra[]={"melifluo","inefable","sonambulo","serendipia","limerencia","etereo","arrebol","irisdencia","epifania","luminiscencia","soledad","aurora","efimero","incandescencia","elocuencia","efervescencia",NULL};

int main(int argc, char *argv[]){

    printf("\nBienvenido al ahorcado\n");

        printf("\nTienes 6 intentos \n");

    char adivinado[MAX], letErroneas[MAX];
    const char *elegida;
    char letra;
    int aleatoria, numLet = 1, Errors = 0;

    srand(time(NULL));
    aleatoria = rand() % CANTIDAD(palabra);
    elegida = palabra[aleatoria];

    numLet = strlen( elegida );

    bzero(adivinado,MAX);
    for (int i=0; i<(int) strlen(elegida); i++)
        adivinado[i] = '-';

    adivinado[0] = ' ';

    printf("\t\n%s\n", adivinado);
//  printf("\t%s\n", elegida); tapando este printf evitamos que salga la palabra seleccionada


    while(numLet && Errors <5){
        printf("Mete una letra: \n");
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



    if(numLet == 0)
        printf("\n GANASTES !\n");
    else if(Errors == 5)
        printf("\n Perdistes !\n");


    }

    return EXIT_SUCCESS;
}
