#include <stdio.h>

void loop (char tab[3][3]); // Prototipo
void Int_Prim (char tab[3][3]); // Prototipo
void tablero(char tab[3][3]); // Prototipo

int main(){

    char tab [3][3];

    loop (tab); //Llama a las funciones y hace un refresco de pantalla

   //  system("pause");
    return 0;
}

void loop (char tab [3][3]){
    Int_Prim (tab);
    tablero (tab);
}

void Int_Prim(char tab[3][3]){ //Introducir primer numero |Parte de la matriz del tablero
    int i, j; // Contadores
    char aux;

    aux = '1';

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            tab[i][j] = aux++;
        }
    }
}

void tablero(char tab[3][3]){ // Encargada de pintar el tablero

    // leer valores de la matriz con 2 bucles
    int i,j; // Contadores

    for( i = 0; i < 3; i++){ // Bucle para separar los numeros
        for( j = 0; j < 3; j++){
            if(j < 2){
                printf(" %c |",tab[i][j]);
            }
            else{
                printf(" %c |",tab[i][j]);
            }
        }// Salimos del bucle para partir el tablero con lineas
        if( i < 2 ){
        printf(" \n-----------\n");
        }
    }
    printf("\n \n");
}
