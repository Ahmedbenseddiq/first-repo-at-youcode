#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	float a, b, c, d, somme, moyenne; 
  
    printf("Entrez le premier nombre: "); 
    scanf("%f", &a); 
    printf("Entrez le deuxieme nombre: "); 
    scanf("%f", &b);
    printf("Entrez le troisieme nombre: "); 
    scanf("%f", &c);
    printf("Entrez le quatrieme nombre: "); 
    scanf("%f", &d);
    
    
    
    somme = a + b + c + d;
    moyenne = somme / 4;

 	
    printf("La somme des quatre nombres est %.2f\n", somme); 
    printf("La moyenne des quatre nombres est %.2f\n", moyenne); 
	
	return 0;
}
