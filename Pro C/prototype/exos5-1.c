#include <stdio.h>

// Fonction pour afficher la cha�ne de caract�res
void afficherChaine(char str[]) {
    printf("1. La cha�ne de caract�res est : %s\n", str);
}

// Fonction pour retourner le nombre de caract�res dans la cha�ne
int nombreCaracteres(char str[]) {
  
    return strlen(str);;
}

// Proc�dure pour afficher la cha�ne caract�re par caract�re
void afficherCaractereParCaractere(char str[]) {
    printf("3. Affichage caract�re par caract�re :\n");
    int i ;
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");
}

// Programme principal
int main() {
    // D�claration et initialisation de la cha�ne de caract�res
    char str[] = "string";

    // Appel de la fonction pour afficher la cha�ne
    afficherChaine(str);

    // Appel de la fonction pour retourner le nombre de caract�res
    int nombre = nombreCaracteres(str);
    printf("2. Le nombre de caract�res dans la cha�ne est : %d\n", nombre);

    // Appel de la proc�dure pour afficher la cha�ne caract�re par caract�re
    afficherCaractereParCaractere(str);

    return 0;
}

