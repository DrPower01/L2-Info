#include <stdio.h>

int main() {
    // D�claration des variables
    char nom[50], prenom[50], adresse[100];

    // Demande � l'utilisateur de saisir son nom
    printf("Entrez votre nom : ");
    gets(nom);

    // Demande � l'utilisateur de saisir son pr�nom
    printf("Entrez votre pr�nom : ");
    gets(prenom);

    // Demande � l'utilisateur de saisir son adresse
    printf("Entrez votre adresse : ");
    // Utilisation de getchar() pour consommer le caract�re de nouvelle ligne restant dans le buffer

    gets(adresse);

    // Affichage des informations saisies
    printf("\nInformations saisies :\n");
    printf("Nom :\n", nom);
    printf("Pr�nom : %s\n", prenom);
    printf("Adresse : %s\n", adresse);

    return 0;
}

