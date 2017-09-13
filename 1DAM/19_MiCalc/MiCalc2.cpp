#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <conio.h>

typedef struct{
    float num1;
    float num2;
    float total;
    float record;
    float memoria;
    char opc;
}numero;

numero num;

void suma();
void resta();
void multiplicacion();
void division();
void potenciacion();
void raiz();
void promedio();
void tablero();
void principal();
void num2();
void menu();
void opcion();
void memoria();
void salir ();

int main(){

    num.num1 = 0;
    num.num2 = 0;
    num.memoria = 0;
    num.total = 0;
    num.record = 0;
    num.memoria = 0;
    system("color 71");
    SetConsoleTitle("CALCULADORA TUKAPLAY EASY 1.0v");
    principal();
    return 0;
}

void suma(){
    tablero();
    num2();
    num.total = num.num1 + num.num2;
    tablero();
    num.num1 = num.total;
    num.record = num.total;
    system ("pause");
}

void resta(){
    tablero();
    num2();
    num.total = num.num1 - num.num2;
    tablero();
    num.num1 = num.total;
    num.record = num.total;
    system ("pause");
}

void multiplicacion(){
    tablero();
    num2();
    num.total = num.num1 * num.num2;
    tablero();
    num.num1 = num.total;
    num.record = num.total;
    system ("pause");
}

void division(){
    tablero();
    num2();
    num.total = num.num1 / num.num2;
    tablero();
    num.num1 = num.total;
    num.record = num.total;
    system ("pause");
}

void potenciacion(){
    int x;
    tablero();
    printf ("\n ELEVADO A LA: ");
    scanf ("%f",&num.num2);
    printf("\a");
    if (num.num2 < 0 || num.num2 > 0){
        num.total = pow (num.num1, num.num2);
        tablero();  
        num.num1 = num.total;
        num.record = num.total;
        system ("pause");
    }
    else{
        tablero();
        printf ("\n\n EL NUMERO INGRESADO NO EXISTE\n\n");
        Sleep (1000);
        fflush (stdin);
        potenciacion();
    }
}

void raiz(){
    num.total = sqrt (num.num1);
    tablero();
    printf (" -------------------------------------------------");
    printf ("\n TOTAL = %2.2f\n\n",num.total);
    printf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n\n");
    num.num1 = num.total;
    num.record = num.total;
    system ("pause");
}

void promedio(){
    int i,j,x;
    tablero();
    do{
        x = 0;
        printf ("\n CUANTOS NUMEROS MAS VAMOS A PROMEDIAR?: ");
        scanf ("%i",&j);
        printf("\a");
        if (i <= 0 || i >= 0){
            for(i = 0;i < j; i++){
                printf ("\n INGRESA EL %i NUMERO: ",i+1);
                scanf ("%f",&num.num2);
                num.num1 += num.num2;
                printf("\a");
            }
            i++;
            num.total = num.num1 / i;
            tablero();
            num.num1 = num.total;
            num.record = num.total; 
            system ("pause");
        }
        else {
            tablero();
            printf ("\n\n EL NUMERO INGRESADO NO EXISTE\n\n");
            Sleep (1000);
            fflush (stdin);
            x = 2;
        }
    }while (x == 2);
}

void porcentaje(){
    float aux, aux2;
    tablero();

    printf ("\n INGRESA EL %s: ","%");
    scanf ("%f",&num.num2);
    printf("\a");
    if (num.num2 < 0 || num.num2 > 0){
        tablero();
        num.total = num.num1 * num.num2 / 100;
        aux = num.num1 + num.total;
        aux2 = num.num1 - num.total;
        tablero();
        printf (" TOTAL SUMADO= %.2f\n",aux);
        printf ("\n TOTAL RESTADO=  %.2f\n\n",aux2);
        num.num1 = num.total;
        num.record = num.total;
        system ("pause");
    }
    else {
        tablero();
        printf ("\n\n LA OPCION INGRESADA ES INCORRECTA\n\n");
        Sleep (1000);
        fflush (stdin);
        porcentaje();
    }
}

void tablero(){
    system ("cls");
    printf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ");
    printf ("\n CALCULADORA TUKAPLAY EASY 1.5v\n");
    printf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n");
    printf ("\n MEMORIA:ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ> %.2f\n\n",num.memoria);
    if (num.total == num.num1){
        printf ("\n RESULTADO:ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ> %.2f\n",num.total);
        printf("\nÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n");
    }
    else if (num.num1 > 0){
        printf ("\n RESULTADO:ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ> %.2f\n",num.total);
        printf("\nÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n");
        printf ("\n PRIMER NUMERO:  %.2f\n",num.num1);
    }

    switch (num.opc){
        case '1': printf ("\n FUNCION UTILIZADA:  %s\n","PROMEDIO");break;
        case '2': printf ("\n FUNCION UTILIZADA:  %s\n","PORCENTAJE");break;
        case '3': printf ("\n FUNCION UTILIZADA:  %s\n","POTENCIAR");break;
        case '4': printf ("\n FUNCION UTILIZADA:  %s\n","RADIZ CUADRADA");break;
        case '+': printf ("\n FUNCION UTILIZADA:  %s\n","+ SUMAR");break;
        case '-': printf ("\n FUNCION UTILIZADA:  %s\n","- RESTAR");break;
        case '*': printf ("\n FUNCION UTILIZADA:  %s\n","* MULTIPLICAR");break;
        case '/': printf ("\n FUNCION UTILIZADA:  %s\n","/ DIVIDIR");break;
    }

    if (num.num2 > 0){
        printf ("\n SEGUNDO NUMERO: %.2f\n",num.num2);
        printf (" -------------------------------------------------");
        printf ("\n TOTAL = %.2f\n",num.total);
        printf("\nÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n");
    }
}

void principal(){
    int o;
    printf("\a");
    fflush (stdin);
    o = 1;
    tablero();
    printf ("\n INGRESA EL PRIMER NUMERO: ");
    scanf ("%f",&num.num1);
    printf("\a");
    if (num.num1 < 0 || num.num1 > 0){
        menu();
    }
    else {
        tablero();
        printf ("\n\n LA OPCION INGRESADA ES INCORRECTA\n\n");
        Sleep (1000);
        fflush (stdin);
        principal();
    }
}

void num2(){
    system ("cls");
    tablero();
    printf ("\n INGRESA EL SEGUNDO NUMERO: ");
    scanf ("%f",&num.num2);
    printf("\a");
    if (num.num2 < 0 || num.num2 > 0){
    }
    else {
        tablero();
        printf ("\n\n LA OPCION INGRESADA ES INCORRECTA\n\n");
        Sleep (1000);
        fflush (stdin);
        num2();
    }
}
void menu(){

    int o;

    do{
        o = 1;
        tablero();

        printf("\n ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
        printf("\n º º");
        printf("\n º + = Suma 1 = Promedio º");
        printf("\n º º");
        printf("\n º - = Resta 2 = Porcentaje º");
        printf("\n º º");
        printf("\n º * = Multiplicacion 3 = Potenciacion º");
        printf("\n º º");
        printf("\n º / = Division 4 = Raiz Cuadrada º");
        printf("\n º º");
        printf("\n º 5 = Salir º");
        printf("\n ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
        printf("\n\n OPCION: ");

        fflush (stdin);
        //scanf ("%c",&num.opc);
        //num.opc = getch();
        //printf("\a");
        //switch (num.opc){
        //case '+': suma();break;
        //case '-': resta();break;
        //case '*': multiplicacion();break;
        //case '/': division();break;
        //case '1': promedio();break;
        //case '2': porcentaje();break;
        //case '3': potenciacion();break;
        //case '4': raiz();break;
        //case '5': salir();;break;
        //default: {
        //tablero();
        //printf ("\n\n LA OPCION INGRESADA ES INCORRECTA\n\n");
        //Sleep (1000);
        //fflush (stdin);
        //o = 2;
        //break;
        //}
        //}
        //num.opc = ' ';
        //num.num2 = 0;
        //}while(o == 2);
        //opcion ();
        //}
        //
        //void opcion(){
        //
        //int o;
        //do{
        //printf("\a");
        //tablero();
        //
        //printf("\n ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
        //printf("\n º QUE DESEAS HACER? º");
        //printf("\n ºÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍº");
        //printf("\n º º");
        //printf("\n º 1 = USAR RESULTADO 2 = NO USAR RESULTADO º");
        //printf("\n º º");
        //printf("\n º 3 = MEMORIZAR 4 = SALIR º");
        //printf("\n º º");
        //printf("\n ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
        //printf("\n\n OPCION: ");
        //
        ////printf ("\n QUE DESEAS HACER?\n\n 1 = USAR RESULTADO\n 2 = NO USAR RESULTADO\n \n \n\nÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n\n OPCION: ");
        //scanf ("%i",&o);
        //printf("\a");
        //switch (o){
        //case 1: menu();break;
        //case 2: num.total = 0;num.num1 = 0;principal();break;
        //case 3: memoria();break;
        //case 4: salir();break;
        //default: {
        //tablero();
        //printf ("\n\n LA OPCION INGRESADA ES INCORRECTA\n\n");
        //Sleep (1000);
        //fflush (stdin);
        //o = 2;
        //break;
        //}
        //}
        //}while (o > 0 && o < 5);
        //}
        //
        //void memoria(){
        //
        //int o;
        //
        //do{
        //tablero();
        //printf("\n ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
        //printf("\n º OPCIONES DE MEMORIA º");
        //printf("\n ºÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍº");
        //printf("\n º º");
        //printf("\n º 1 = SUMAR RESULTADO 2 = RESTAR RESULTADO º");
        //printf("\n º º");
        //printf("\n º 3 = RESETEAR 4 = SALIR º");
        //printf("\n º º");
        //printf("\n ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
        //printf("\n\n OPCION: ");
        //
        ////printf ("\n OPCIONES DE MEMORIA\n\n 1 = SUMAR RESULTADO A LA MEMORIA\n 2 = RESTAR RESULTADO A LA MEMORIA\n 3 = PONER LA MEMORIA EN 0\n 4 = NO MODIFICAR LA MEMORIA\n\nÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n\n OPCION: ");
        //scanf ("%i",&o);
        //printf("\a");
        //tablero();
        //
        //switch (o){
        //case 1: {
        //num.memoria += num.record;
        //tablero();
        //printf("\n SUMADO A LA MEMORIA\n\n");
        //printf("\nÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n");
        //break;
        //}
        //case 2: {
        //num.memoria -= num.record;
        //tablero();
        //printf("\n RESTADO A LA MEMORIA\n\n");
        //break;
        //}
        //case 3: {
        //num.memoria = 0;
        //tablero();
        //printf("\n RESETEADO DE LA MEMORIA\n\n");
        //break;
        //}
        //case 4: printf("\n NO SE MODIFICO LA MEMORIA\n\n");break;
        //default: {
        //tablero();
        //printf ("\n\n LA OPCION INGRESADA ES INCORRECTA\n\n");
        //Sleep (1000);
        //fflush (stdin);
        //memoria();
        //break;
        //}
        //}
        //
        //}while(o < 1 || o > 4);
        //
        //Sleep (800);
        //
        //opcion();
        //}
        //
        //void salir (){
        //tablero();
        //printf ("\n ES UN GUSTO ESTAR A TU SERVICIO!!\n\n");
        //printf("\nÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n");
        //printf ("\a\a");
        //Sleep (1500);
        //exit(0);
        //}
        //}
        //}
        //}
        //}
        //}
        //}
        //}
        //}
        //}
        //}
        //}
        //}
        //}
        //}
    }
}
    }
    }
}
    }
    }
}
    }
    }
    }
    }
}
    }
    }
}
        }
            }
        }
    }
}
}
    }
    }
}
}
}
}
}
}
}
