#include <stdio.h>

int main() {
    // Déclaration des variables
    char nom[50], prenom[50], adresse[100];

    // Demande à l'utilisateur de saisir son nom
    printf("Entrez votre nom : ");
    gets(nom);

    // Demande à l'utilisateur de saisir son prénom
    printf("Entrez votre prénom : ");
    gets(prenom);

    // Demande à l'utilisateur de saisir son adresse
    printf("Entrez votre adresse : ");
    // Utilisation de getchar() pour consommer le caractère de nouvelle ligne restant dans le buffer

    gets(adresse);

    // Affichage des informations saisies
    printf("\nInformations saisies :\n");
    printf("Nom :\n", nom);
    printf("Prénom : %s\n", prenom);
    printf("Adresse : %s\n", adresse);

    return 0;
}

