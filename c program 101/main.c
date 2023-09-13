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

    // Demande à l'utilisateur de saisir ses informations personnelles
    printf("Entrez votre nom : "); 
    scanf("%c", nom); 
    printf("Entrez votre prénom : "); 
    scanf("%c", prenom); 
    printf("Entrez votre âge : "); 
    scanf("%d", &age); 
    printf("Entrez votre sexe (M ou F) : "); 
    scanf(" %c", &sexe);
    printf("Entrez votre numéro de téléphone : "); 
    scanf("%s", numero);

    // Affiche les informations personnelles de l'utilisateur à l'écran
    printf("\nVos informations personnelles sont :\n"); 
    printf("Nom : %c\n", nom); 
    printf("Prénom : %c\n", prenom); 
    printf("Âge : %d\n", age); 
    printf("Sexe : %c\n", sexe); 
    printf("Numéro de téléphone : %s\n", numero); 
    return 0; 
}
