#include <stdio.h>

// Fonction pour afficher la chaîne de caractères
void afficherChaine(char str[]) {
    printf("1. La chaîne de caractères est : %s\n", str);
}

// Fonction pour retourner le nombre de caractères dans la chaîne
int nombreCaracteres(char str[]) {
  
    return strlen(str);;
}

// Procédure pour afficher la chaîne caractère par caractère
void afficherCaractereParCaractere(char str[]) {
    printf("3. Affichage caractère par caractère :\n");
    int i ;
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");
}

// Programme principal
int main() {
    // Déclaration et initialisation de la chaîne de caractères
    char str[] = "string";

    // Appel de la fonction pour afficher la chaîne
    afficherChaine(str);

    // Appel de la fonction pour retourner le nombre de caractères
    int nombre = nombreCaracteres(str);
    printf("2. Le nombre de caractères dans la chaîne est : %d\n", nombre);

    // Appel de la procédure pour afficher la chaîne caractère par caractère
    afficherCaractereParCaractere(str);

    return 0;
}

