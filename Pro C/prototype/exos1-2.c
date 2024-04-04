#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
/* 
Ce programme en langage C d�finit une structure appel�e Personne, 
qui repr�sente les informations sur une personne, 
telles que le nom, le pr�nom, l'adresse et l'�ge. Ensuite, le programme 
comporte deux proc�dures (affiche et afficheTableauPersonne) et 
une fonction principale (main).

Proc�dure affiche : Cette proc�dure prend une structure Personne en param�tre et
					 affiche ses propri�t�s.
					 
Proc�dure afficheTableauPersonne : Cette proc�dure prend un tableau de 
	structures Personne et sa taille en param�tres,
 	puis affiche les propri�t�s de chaque personne dans le tableau. remarque 
    faut faire attention car il ya une erreur d'affichage,on affiche les information
    de la personne et non pas le nom seulement. La correction consiste � 
	remplacer les messages r�p�titifs de "le nom de la personne" par d'autres 
	propri�t�s de la structure, comme le pr�nom, l'adresse et l'�ge. 
     
Fonction main : La fonction principale commence par afficher les informations 
	d'une seule personne (p1). Ensuite, elle demande � l'utilisateur de saisir les 
	informations pour un tableau de 5 personnes (tab) � l'aide d'une boucle. 
	Enfin, elle appelle la proc�dure afficheTableauPersonne pour afficher 
	les informations du tableau de personnes.

Note : Il y a une petite erreur dans le message d'affichage pour l'�ge dans 
		la fonction affiche, o� le "ans" est mentionn� deux fois. 


 */ 



/* run this program using the console pauser or add your own getch, 
system("pause") or input loop */ 
struct Personne{ 
	char nom[25]; 
	char prenom[25]; 
	char adress[25]; 
	int age; 
}; 
//Procedure permettant d�afficher une personne 
void affiche(struct Personne personne){ 
	printf("votre est Nom: %s \n",personne.nom); 
	printf("votre est Prenom: %s \n",personne.prenom); 
	printf("votre est Adress: %s \n",personne.adress); 
	printf("votre est Age: %d ans \n",personne.age, " ans"); 
} 
//Procedure permettant d�affiche un tableau de personne 
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
