#include <stdio.h>
#include <string.h>

// D�claration de la structure Filiere
typedef struct {
    char nom[50];
    char niveau[5];
} Filiere;

// D�claration de la structure Etudiant
typedef struct {
    char userName[50];
    char lastName[50];
    char firstName[50];
    Filiere filiere;
} Etudiant;

// Proc�dure pour enregistrer un nouvel �tudiant
void saisirNouveau(Etudiant *tab, Etudiant etudiant, int *taille) {
    tab[(*taille)++] = etudiant;
}

// Fonction pour tester si deux �tudiants ont le m�me nom
int test(Etudiant etudiant1, Etudiant etudiant2) {
    return strcmp(etudiant1.userName, etudiant2.userName) == 0;
}

// Proc�dure pour afficher tous les �tudiants
void afficherEtudiants(Etudiant *tab, int taille) {
	int i;
    printf("Liste des etudiants :\n");
    for (i = 0; i < taille; i++) {
        printf("Nom : %s, Prenom : %s, Filiere : %s %s\n", tab[i].lastName, tab[i].firstName, tab[i].filiere.nom, tab[i].filiere.niveau);
    }
}

int main() {
    Etudiant tableauEtudiants[3]; // D�claration d'un tableau de 3 �tudiants
    int taille = 0; // Taille actuelle du tableau
    // D�claration d'objets Filiere
	Filiere filiere1 = {"INFOR", "L2"};
	Filiere filiere2 = {"INFOR", "L3"};
    // D�claration d'objets Etudiant
    Etudiant etudiant1 = {"Ali", "Ahmed", "Ibiro",filiere1};
    Etudiant etudiant2 = {"Ali", "Goumati", "Gona", filiere1};
    Etudiant etudiant3 = {"Warsama", "Hassan", "Daher",filiere2 };

    // Appel de la proc�dure pour enregistrer un nouvel �tudiant
    saisirNouveau(tableauEtudiants, etudiant1, &taille);
    saisirNouveau(tableauEtudiants, etudiant2, &taille);
    saisirNouveau(tableauEtudiants, etudiant3, &taille); // Ajout d'un autre �tudiant

    // Appel de la fonction pour tester si Ali et Goumati ont le meme nom
    if (test(etudiant1, etudiant2)) {
        printf("Les etudiants ont le meme nom.\n");
    } else {
        printf("Les etudiants n'ont pas le meme nom.\n");
    }

    // Appel de la proc�dure pour afficher tous les �tudiants
    afficherEtudiants(tableauEtudiants, taille);

    return 0;
}

