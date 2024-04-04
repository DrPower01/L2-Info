#include <stdio.h>
#include <string.h>

// Définition de la structure pour une Filiere
typedef struct {
    char nom[50];
    char niveau[5];
} Filiere;

// Définition de la structure pour un Etudiant
typedef struct {
    char userName[50];
    char lastName[50];
    char firstName[50];
    Filiere filiere;
} Etudiant;


// Procédure pour enregistrer un nouvel étudiant
void saisirNouveau(Etudiant *tab, Etudiant etudiant, int *indice) {
    if (*indice < 3) {
        tab[*indice] = etudiant;
        (*indice)++;
        printf("Nouvel etudiant enregistre avec succes.\n");
    } else {
        printf("Impossible d'ajouter un nouvel etudiant, le tableau est plein.\n");
    }
}

// Fonction pour comparer deux étudiants 
int test(Etudiant etudiant1, Etudiant etudiant2) {
     	return strcmp(etudiant1.userName, etudiant2.userName) == 0 ;
        //return strcmp(etudiant1.lastName, etudiant2.lastName) == 0 ;
        //return strcmp(etudiant1.firstName, etudiant2.firstName) == 0 ; 
        //return strcmp(etudiant1.filiere.nom, etudiant2.filiere.nom) == 0 ;
        //return strcmp(etudiant1.filiere.niveau, etudiant2.filiere.niveau) == 0;
        
}

// Procédure pour afficher tous les étudiants
void afficherEtudiants(Etudiant *tab, int taille) {
	int i;
    printf("Liste des etudiants :\n");
    for (i = 0; i < taille; i++) {
        printf("Etudiant %d :\n", i+1);
        printf("   Prenom : %s\n", tab[i].firstName);
        printf("   Nom : %s\n", tab[i].lastName);
        printf("   Username : %s\n", tab[i].userName);
        printf("   Filiere : %s (Niveau : %s)\n", tab[i].filiere.nom, tab[i].filiere.niveau);
    }
}

int main() {
    // Déclaration d'un tableau d'Etudiants
    Etudiant tableauEtudiants[3];
    int indice = 0; // Taille actuelle du tableau
    
    // Déclaration d'objets Filiere
	Filiere filiere1 = {"INFOR", "L1"};
	Filiere filiere2 = {"INFOR", "L2"};
	Filiere filiere3 = {"INFOR", "L3"};
	
	// Déclaration d'objets Etudiant
    Etudiant etudiant1 = {"Ali", "Ahmed", "Ibiro",filiere1};
    Etudiant etudiant2 = {"Ali", "Goumati", "Gona", filiere2};


    // Enregistrer les étudiants suivants  
    saisirNouveau(tableauEtudiants, etudiant1, &indice); 
    saisirNouveau(tableauEtudiants, etudiant2, &indice);

    // Ajouter un autre étudiant de votre choix  
    Etudiant etudiant3 = {"Warsama", "Hassan", "Daher",filiere3 };
    saisirNouveau(tableauEtudiants, etudiant3, &indice);

    // Tester si Ali et Goumati ont le même nom
    if (test(tableauEtudiants[0], tableauEtudiants[2])) {
        printf("%s et %s ont le meme username.\n", tableauEtudiants[0].firstName, tableauEtudiants[2].firstName);
    } else {
        printf("%s et %s n'ont pas le meme username.\n", tableauEtudiants[0].firstName, tableauEtudiants[2].firstName);
    }

    // Affichage des étudiants
    afficherEtudiants(tableauEtudiants, indice);

    return 0;
}

