#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() 
{
    
    char nom[50]; 
    char prenom[50]; 
    int age; 
    char sexe;
    char numero[15]; 

    // Demande � l'utilisateur de saisir ses informations personnelles
    printf("Entrez votre nom : "); 
    scanf("%c", nom); 
    printf("Entrez votre pr�nom : "); 
    scanf("%c", prenom); 
    printf("Entrez votre �ge : "); 
    scanf("%d", &age); 
    printf("Entrez votre sexe (M ou F) : "); 
    scanf(" %c", &sexe);
    printf("Entrez votre num�ro de t�l�phone : "); 
    scanf("%s", numero);

    // Affiche les informations personnelles de l'utilisateur � l'�cran
    printf("\nVos informations personnelles sont :\n"); 
    printf("Nom : %c\n", nom); 
    printf("Pr�nom : %c\n", prenom); 
    printf("�ge : %d\n", age); 
    printf("Sexe : %c\n", sexe); 
    printf("Num�ro de t�l�phone : %s\n", numero); 
    return 0; 
}
