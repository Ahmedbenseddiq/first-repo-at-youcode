#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int nombre , inverse;
	
	printf("saisir un nombre de 3 chiffres:");
	scanf("%d",&nombre);
	
	if (nombre<100 || nombre>999){
		printf("saisir un nombre de 3 chiffres:\n");
	return 1;	
	}
    
    inverse = (nombre % 10) * 100 + ((nombre / 10) % 10) * 10 + (nombre / 100);
    
    printf("l'inverse est : %d",inverse);
	return 0;
}
