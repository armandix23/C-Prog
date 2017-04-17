#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void loop (char tab[3][3]); // Prototipo de las funciones declaradas abajo
void Int_Prim(char tab[3][3]);
void tablero(char tab[3][3]);
void Int_Yo(char tab[3][3]);
void Int_CPU(char tab[3][3]);

int main(){

    char tab [3][3];

    loop (tab); //Llama a las funciones y hace un refresco de pantalla

    system("pause");
    return 0;
}

void loop (char tab [3][3]){

    int i; // Hacemos un contador de 10 tiradas para salirse

    i = 0;

    Int_Prim (tab);

    do{
      system ("clear");

      tablero(tab);
      if(i % 2 == 0){
        Int_Yo (tab);
      }
      else{
          Int_CPU (tab);
      }
      i++;

    }while (i <= 9);
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

void Int_Yo(char tab[3][3]){ // Introducimos los valores
    char ficha;
    int i,j,k;

    do{
        do{
            printf("Coloca una ficha: ");
           //  fflush (stdin);
            scanf(" %c",&ficha);
        }while (ficha < '1' || ficha > '9'); // Para que solo meta ficha en mayor que 1 y menor que 9

        k = 0; // Dar un via diferente al comprobar

        switch (ficha){  // Comprobar que el numero no este repetido
          case '1':{
                  i = 0;
                  j = 0;
                  if(tab[i][j] == 'X' || tab[i][j] == 'O' ){
                      k = 1;
                      printf("La casilla esta ocupada \n \n ");
                  }
                  break;
             }

            case '2':{
                  i = 0;
                  j = 1;
                  if(tab[i][j] == 'X' || tab[i][j] == 'O' ){
                      k = 1;
                      printf("La casilla esta ocupada \n \n ");
                  }
                  break;
             }

            case '3':{
                  i = 0;
                  j = 2;
                  if(tab[i][j] == 'X' || tab[i][j] == 'O' ){
                      k = 1;
                      printf("La casilla esta ocupada \n \n ");
                  }
                  break;
             }

            case '4':{
                  i = 1;
                  j = 0;
                  if(tab[i][j] == 'X' || tab[i][j] == 'O' ){
                      k = 1;
                      printf("La casilla esta ocupada \n \n ");
                  }
                  break;
             }

            case '5':{
                  i = 1;
                  j = 1;
                  if(tab[i][j] == 'X' || tab[i][j] == 'O' ){
                      k = 1;
                      printf("La casilla esta ocupada \n \n ");
                  }
                  break;
             }

            case '6':{
                  i = 1;
                  j = 2;
                  if(tab[i][j] == 'X' || tab[i][j] == 'O' ){
                      k = 1;
                      printf("La casilla esta ocupada \n \n ");
                  }
                  break;
             }

            case '7':{
                  i = 2;
                  j = 0;
                  if(tab[i][j] == 'X' || tab[i][j] == 'O' ){
                      k = 1;
                      printf("La casilla esta ocupada \n \n ");
                  }
                  break;
             }

            case '8':{
                  i = 2;
                  j = 1;
                  if(tab[i][j] == 'X' || tab[i][j] == 'O' ){
                      k = 1;
                      printf("La casilla esta ocupada \n \n ");
                  }
                  break;
             }

            case '9':{
                  i = 2;
                  j = 2;
                  if(tab[i][j] == 'X' || tab[i][j] == 'O' ){
                      k = 1;
                      printf("La casilla esta ocupada \n \n ");
                  }
                  break;
             }
        }
    }while (k == 1);

    tab[i][j] = 'X';
}

void Int_CPU(char tab[3][3]){
    int i,j,k;

    srand (time(NULL));

    do{
        i = rand() % 3; // Nos da un numero del 0-2 aleatoriamente
        j = rand() % 3;
        k = 0;

        if(tab[i][j] == 'X' || tab[i][j] == 'O'){
          k = 1;
        }
    }while (k == 1);

    tab[i][j] = 'O';
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
