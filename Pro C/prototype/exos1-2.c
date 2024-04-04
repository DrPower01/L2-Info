#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
/* 
Ce programme en langage C définit une structure appelée Personne, 
qui représente les informations sur une personne, 
telles que le nom, le prénom, l'adresse et l'âge. Ensuite, le programme 
comporte deux procédures (affiche et afficheTableauPersonne) et 
une fonction principale (main).

Procédure affiche : Cette procédure prend une structure Personne en paramètre et
					 affiche ses propriétés.
					 
Procédure afficheTableauPersonne : Cette procédure prend un tableau de 
	structures Personne et sa taille en paramètres,
 	puis affiche les propriétés de chaque personne dans le tableau. remarque 
    faut faire attention car il ya une erreur d'affichage,on affiche les information
    de la personne et non pas le nom seulement. La correction consiste à 
	remplacer les messages répétitifs de "le nom de la personne" par d'autres 
	propriétés de la structure, comme le prénom, l'adresse et l'âge. 
     
Fonction main : La fonction principale commence par afficher les informations 
	d'une seule personne (p1). Ensuite, elle demande à l'utilisateur de saisir les 
	informations pour un tableau de 5 personnes (tab) à l'aide d'une boucle. 
	Enfin, elle appelle la procédure afficheTableauPersonne pour afficher 
	les informations du tableau de personnes.

Note : Il y a une petite erreur dans le message d'affichage pour l'âge dans 
		la fonction affiche, où le "ans" est mentionné deux fois. 


 */ 



/* run this program using the console pauser or add your own getch, 
system("pause") or input loop */ 
struct Personne{ 
	char nom[25]; 
	char prenom[25]; 
	char adress[25]; 
	int age; 
}; 
//Procedure permettant d’afficher une personne 
void affiche(struct Personne personne){ 
	printf("votre est Nom: %s \n",personne.nom); 
	printf("votre est Prenom: %s \n",personne.prenom); 
	printf("votre est Adress: %s \n",personne.adress); 
	printf("votre est Age: %d ans \n",personne.age, " ans"); 
} 
//Procedure permettant d’affiche un tableau de personne 
void afficheTableauPersonne(struct Personne personnes[], int taille){ 
	int i; 
	for(i = 0 ; i < taille ; i++){ 
		printf("le nom de la personne %d est %s \n", i +1, 
		personnes[i].nom); 
		printf("le nom de la personne %d est %s \n", i +1, 
		personnes[i].prenom); 
		printf("le nom de la personne %d est %s \n", i +1, 
		personnes[i].adress); 
		printf("le nom de la personne %d est %d \n", i +1, 
		personnes[i].age); 
		printf("\n\n"); 
  } 
} 
//Programme principal 
int main(int argc, char *argv[]) { 
	printf("affichage des informations d\'une seul personne"); 
	struct Personne p1; 
	strcpy(p1.nom, "hassan"); 
	strcpy(p1.prenom, "Houssein"); 
	strcpy(p1.adress, "Einguella"); 
	p1.age = 23; 
	affiche(p1); 
	printf("\n\n"); 
	printf("sasie des information d'un tableau des personnes \n\n"); 
	int i; 
	struct Personne tab[5]; 
	for(i = 0 ; i < 5 ; i ++){ 
		printf("veuillez saisir votre nom:"); 
		scanf("%s",&tab[i].nom); 
		printf("veuillez saisir votre prenom:"); 
		scanf("%s",&tab[i].prenom); 
		printf("veuillez saisir votre adress:"); 
		scanf("%s",&tab[i].adress); 
		printf("veuillez saisir votre age:"); 
		scanf("%d",&tab[i].age); 
	} 
	afficheTableauPersonne(tab, 5); 
	return 0; 
}
