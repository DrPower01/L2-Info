#include <stdio.h>
#include <stdlib.h>

// D�finition de la structure de l'arbre binaire
typedef struct Noeud {
    int valeur;
    struct Noeud *gauche;
    struct Noeud *droit;
} Arbre_B;

// Proc�dure Infixe (parcours de l'arbre de mani�re infixe)
void Infixe(Arbre_B *arbre) {
    if (arbre != NULL) {
        Infixe(arbre->gauche);
        printf("%d ", arbre->valeur);
        Infixe(arbre->droit);
    }
}

// Proc�dure Pr�fixe (parcours de l'arbre de mani�re pr�fixe)
void Prefixe(Arbre_B *arbre) {
    if (arbre != NULL) {
        printf("%d ", arbre->valeur);
        Prefixe(arbre->gauche);
        Prefixe(arbre->droit);
    }
}

// Proc�dure Postfixe (parcours de l'arbre de mani�re postfixe)
void Postfixe(Arbre_B *arbre) {
    if (arbre != NULL) {
        Postfixe(arbre->gauche);
        Postfixe(arbre->droit);
        printf("%d ", arbre->valeur);
    }
}

// Fonction pour retourner la taille de l'arbre
int Taille(Arbre_B *arbre) {
    if (arbre == NULL)
        return 0;
    else
        return 1 + Taille(arbre->gauche) + Taille(arbre->droit);
}

// Fonction pour retourner la valeur de la racine de l'arbre
int Racine(Arbre_B *arbre) {
    if (arbre != NULL)
        return arbre->valeur;
    else
        printf("l'arbre est vide"); // ou une autre valeur par d�faut
}

// Fonction pour tester si l'arbre est vide ou non
int EstArbreVide(Arbre_B *arbre) {
    return arbre == NULL;
}

int main() {
    // Cr�ation de l'arbre binaire T
    Arbre_B *arbre = (Arbre_B*)malloc(sizeof(Arbre_B));
    arbre->valeur = 37;
    arbre->gauche = (Arbre_B*)malloc(sizeof(Arbre_B));
    arbre->gauche->valeur = 41;
    arbre->gauche->droit = NULL;
    arbre->gauche->gauche = (Arbre_B*)malloc(sizeof(Arbre_B));
    arbre->gauche->gauche->valeur = 13;
    arbre->gauche->gauche->gauche = NULL;
    arbre->gauche->gauche->droit = (Arbre_B*)malloc(sizeof(Arbre_B));
    arbre->gauche->gauche->droit->valeur = 3;
    arbre->gauche->gauche->droit->gauche = (Arbre_B*)malloc(sizeof(Arbre_B));
    arbre->gauche->gauche->droit->gauche->valeur = 5;
    arbre->gauche->gauche->droit->gauche->gauche = NULL;
    arbre->gauche->gauche->droit->gauche->droit = NULL;
    arbre->gauche->gauche->droit->droit = (Arbre_B*)malloc(sizeof(Arbre_B));
    arbre->gauche->gauche->droit->droit->valeur = 23;
    arbre->gauche->gauche->droit->droit->gauche = NULL;
    arbre->gauche->gauche->droit->droit->droit = NULL;
    arbre->gauche->droit = NULL;
    
    arbre->droit = (Arbre_B*)malloc(sizeof(Arbre_B));
    arbre->droit->valeur = 2;
    arbre->droit->gauche = (Arbre_B*)malloc(sizeof(Arbre_B));
    arbre->droit->gauche->valeur = 7;
    arbre->droit->gauche->gauche = NULL;
    arbre->droit->gauche->droit = NULL;
    arbre->droit->droit = (Arbre_B*)malloc(sizeof(Arbre_B));
    arbre->droit->droit->valeur = 11;
    arbre->droit->droit->gauche = (Arbre_B*)malloc(sizeof(Arbre_B));
    arbre->droit->droit->gauche->valeur = 19;
    arbre->droit->droit->gauche->gauche = NULL;
    arbre->droit->droit->gauche->droit = NULL;
    arbre->droit->droit->droit = NULL;

    // Appels des proc�dures et fonctions
    printf("Parcours Infixe: ");
    Infixe(arbre);
    printf("\n");

    printf("Parcours Prefixe: ");
    Prefixe(arbre);
    printf("\n");

    printf("Parcours Postfixe: ");
    Postfixe(arbre);
    printf("\n");

    printf("Taille de l'arbre: %d\n", Taille(arbre));
    printf("Valeur de la racine: %d\n", Racine(arbre));
   if (EstArbreVide(arbre)){
   	printf("l'arbre est vide \n");
   }else {
   	printf("l'arbre n'est pas vide \n");}

    // Lib�ration de la m�moire allou�e pour l'arbre
    free(arbre);
    
    
    return 0;
}

