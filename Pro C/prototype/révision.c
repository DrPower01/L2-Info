#include <stdio.h>
#include <stdlib.h>

// Définition de la structure du nœud
typedef struct Noeud {
    int valeur;
    struct Noeud* gauche;
    struct Noeud* droit;
} Noeud;

// Fonction pour créer une feuille avec une valeur donnée
Noeud* creer_feuille(int valeur) {
    Noeud* feuille = (Noeud*)malloc(sizeof(Noeud));
    feuille->valeur = valeur;
    feuille->gauche = NULL;
    feuille->droit = NULL;
    return feuille;
}

// Fonction pour créer un nouvel arbre avec une valeur et deux sous-arbres donnés
Noeud* creer_arbre(int valeur, Noeud* sousArbreGauche, Noeud* sousArbreDroit) {
    Noeud* nouvelArbre = (Noeud*)malloc(sizeof(Noeud));
    nouvelArbre->valeur = valeur;
    nouvelArbre->gauche = sousArbreGauche;
    nouvelArbre->droit = sousArbreDroit;
    return nouvelArbre;
}

int main() {
    // Création des feuilles
    Noeud* feuille8 = creer_feuille(8);
    Noeud* feuille9 = creer_feuille(9);
    Noeud* feuille10 = creer_feuille(10);
    Noeud* feuille11 = creer_feuille(11);
    Noeud* feuille12 = creer_feuille(12);
    Noeud* feuille13 = creer_feuille(13);
    Noeud* feuille14 = creer_feuille(14);
    Noeud* feuille15 = creer_feuille(15);

    // Construction de l'arbre
    Noeud* sousArbreGauche1 = creer_arbre(4, feuille8, feuille9);
    Noeud* sousArbreDroit1 = creer_arbre(5, feuille10, feuille11);
    Noeud* sousArbreGauche2 = creer_arbre(6, feuille12, feuille13);
    Noeud* sousArbreDroit2 = creer_arbre(7, feuille14, feuille15);
    Noeud* sousArbreGauche3 = creer_arbre(2, sousArbreGauche1, sousArbreDroit1);
    Noeud* sousArbreDroit3 = creer_arbre(3, sousArbreGauche2, sousArbreDroit2);
    Noeud* arbre = creer_arbre(1, sousArbreGauche3, sousArbreDroit3);

    // Affichage de l'arbre
    printf("                    %d\n", arbre->valeur);
    printf("                 /     \\ \n");
    printf("               %d         %d\n", arbre->gauche->valeur, arbre->droit->valeur);
    printf("             /  \\      /   \\ \n");
    printf("           %d     %d    %d     %d\n", arbre->gauche->gauche->valeur, arbre->gauche->droit->valeur,
                                                  arbre->droit->gauche->valeur, arbre->droit->droit->valeur);
    printf("          / \\   / \\  / \\   / \\ \n");
    printf("        %d   %d %d %d %d %d %d %d\n", arbre->gauche->gauche->gauche->valeur, arbre->gauche->gauche->droit->valeur,
                                                arbre->gauche->droit->gauche->valeur, arbre->gauche->droit->droit->valeur,
                                                arbre->droit->gauche->gauche->valeur, arbre->droit->gauche->droit->valeur,
                                                arbre->droit->droit->gauche->valeur, arbre->droit->droit->droit->valeur);

    // Libération de la mémoire allouée
    free(feuille8);
    free(feuille9);
    free(feuille10);
    free(feuille11);
    free(feuille12);
    free(feuille13);
    free(feuille14);
    free(feuille15);
    free(sousArbreGauche1);
    free(sousArbreDroit1);
    free(sousArbreGauche2);
    free(sousArbreDroit2);
    free(sousArbreGauche3);
    free(sousArbreDroit3);
    free(arbre);

    return 0;
}

