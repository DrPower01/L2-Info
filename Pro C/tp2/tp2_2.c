#include <stdio.h>
#include <string.h>

// D�finition de la structure Filiere
typedef struct {
    char nom[50];
    char niveau[5]; // Le niveau est L1, L2, L3, ou LL
} Filiere;

// D�finition de la structure Etudiant
typedef struct {
    char userName[50];
    char lastName[50];
    char firstName[50];
    Filiere filiere; // Un �tudiant est li� � une fili�re
} Etudiant;

// D�claration d'une proc�dure pour saisir un nouvel �tudiant
void saisirNouveau(Etudiant *tab, int index) {
    printf("Entrez le nom d'utilisateur: ");
    scanf("%s", tab[index].userName);
    printf("Entrez le nom de famille: ");
    scanf("%s", tab[index].lastName);
    printf("Entrez le pr�nom: ");
    scanf("%s", tab[index].firstName);
    printf("Entrez le nom de la fili�re: ");
    scanf("%s", tab[index].filiere.nom);
    printf("Entrez le niveau de la fili�re (L1, L2, L3, LL): ");
    scanf("%s", tab[index].filiere.niveau);
}

// D�claration d'une fonction pour tester si deux �tudiants ont le m�me nom d'utilisateur
int test(Etudiant etudiant1, Etudiant etudiant2) {
    return strcmp(etudiant1.userName, etudiant2.userName) == 0;
}

// D�claration d'une proc�dure pour afficher tous les �tudiants
void afficherEtudiants(Etudiant *tab, int size) {
    printf("\nListe des �tudiants :\n");
    int i;
    for (i = 0; i < size; i++) {
        printf("Etudiant %d :\n", i+1);
        printf("Nom d'utilisateur : %s\n", tab[i].userName);
        printf("Nom de famille : %s\n", tab[i].lastName);
        printf("Prenom : %s\n", tab[i].firstName);
        printf("Filiere : %s\n", tab[i].filiere.nom);
        printf("Niveau : %s\n", tab[i].filiere.niveau);
        printf("-------------------------\n");
    }
}

int main() {
    // D�claration d'un objet de type Etudiant
    Etudiant etudiant1;
    // D�claration d'un objet de type Filiere
    Filiere filiere1;

    // Mettre en relation le Filere et Etudiant
    strcpy(filiere1.nom, "Informatique");
    strcpy(filiere1.niveau, "L3");
    strcpy(etudiant1.userName, "user1");
    strcpy(etudiant1.lastName, "Doe");
    strcpy(etudiant1.firstName, "John");
    etudiant1.filiere = filiere1;

    // D�claration d'un tableau de N Etudiant
    const int N = 2;
    Etudiant tableau[N];

    // Appel de la proc�dure pour saisir un nouvel �tudiant
    saisirNouveau(tableau, 0);
    saisirNouveau(tableau, 1);

    // Affichage de tous les �tudiants
    afficherEtudiants(tableau, N);

    // Test si deux �tudiants ont le m�me nom d'utilisateur
    if (test(tableau[0], tableau[1])) {
        printf("Les deux etudiants ont le meme nom d'utilisateur.\n");
    } else {
        printf("Les deux etudiants n'ont pas le meme nom d'utilisateur.\n");
    }

    return 0;
}

