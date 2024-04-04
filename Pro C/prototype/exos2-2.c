#include <stdio.h>
#include <string.h>

// Définition de la structure Joueur
struct Joueur {
    int numero;
    char nom[25];
    char prenom[25];
    char position[25];
    float prix;
    char nomEquipe[25];
};

// Fonction pour enregistrer les informations d'un joueur
struct Joueur enregistrerJoueur(int numero,char nom[],char prenom[], char position[], float prix, char nomEquipe[]) {
    struct Joueur j;
    j.numero = numero;
    strcpy(j.nom, nom);
    strcpy(j.prenom, prenom);
    strcpy(j.position, position);
    j.prix = prix;
    strcpy(j.nomEquipe, nomEquipe);
    return j;
}

// Fonction pour vérifier si deux joueurs appartiennent à la même équipe
int memeEquipe(struct Joueur j1, struct Joueur j2) {
    return strcmp(j1.nomEquipe, j2.nomEquipe) == 0;
}

// Fonction pour vérifier si deux joueurs appartiennent à la même équipe
int memeEquipe2(struct Joueur j1, struct Joueur j2) {
    int i = 0;
    while (j1.nomEquipe[i] != '\0' && j2.nomEquipe[i] != '\0') {
        if (j1.nomEquipe[i] != j2.nomEquipe[i]) {
            return 0; // Les équipes sont différentes
        }
        i++;
    }
    // Vérification de la longueur des deux noms d'équipe
    return j1.nomEquipe[i] == j2.nomEquipe[i];
}



int main() {
    // Enregistrement des informations pour deux joueurs
    struct Joueur j1 = enregistrerJoueur(1, "Messi", "Lionel", "Attaquant", 120.5, "Barcelona");
    struct Joueur j2 = enregistrerJoueur(10, "Ronaldo", "Cristiano", "Attaquant", 110.0, "Juventus");

    // Affichage des informations des joueurs
    printf("Informations du joueur 1:\n");
    printf("Numéro: %d\nNom: %s\nPrénom: %s\nPosition: %s\nPrix: %.2f\nNom d'équipe: %s\n\n",
           j1.numero, j1.nom, j1.prenom, j1.position, j1.prix, j1.nomEquipe);

    printf("Informations du joueur 2:\n");
    printf("Numéro: %d\nNom: %s\nPrénom: %s\nPosition: %s\nPrix: %.2f\nNom d'équipe: %s\n\n",
           j2.numero, j2.nom, j2.prenom, j2.position, j2.prix, j2.nomEquipe);

    // Vérification si les joueurs appartiennent à la même équipe
    if (memeEquipe2(j1, j2)) {
        printf("Les deux joueurs appartiennent à la même équipe.\n");
    } else {
        printf("Les deux joueurs n'appartiennent pas à la même équipe.\n");
    }

    return 0;
    printf("enciuler tu me verra jammais");
}

