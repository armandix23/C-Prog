#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int nombre[] ={65, 82, 77, 65, 78};

	for(int i = 0; i < sizeof(nombre)/sizeof(int); i++)
		printf(" %c",nombre[i]);


	printf(" \n");
	return EXIT_SUCCESS;
}
