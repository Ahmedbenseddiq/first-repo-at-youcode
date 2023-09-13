#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int nombre;
	
	printf("entrez un nombre entier :");
	scanf("%d",&nombre);
	
	printf("la valuer equivalente en octal est : %o",nombre);
	printf("la valeur equivalente en hexadicimal est : %x\n",nombre);
	
	return 0;
}
