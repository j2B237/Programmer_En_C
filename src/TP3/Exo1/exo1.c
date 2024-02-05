
/*
	Écrire un programme en langage C qui lit la dimension N d'un tableau T du type int
	(dimension maximale: 50 composantes), remplit le tableau par des valeurs entrées
	au clavier et affiche le tableau. Calculer et afficher ensuite la somme des éléments
	du tableau

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int n;
	const int TAILLE = 5;
	int FLAG = 1;

	// Declaration d'un tableau
	int Tab[TAILLE];

	/*

		Un tableau en programmation est une suite continue
		d'élements de meme type.
		Cela correspond à une réservation d'un  bloc mémoire
		dans votre ordinateur.
	*/
	int somme = 0;

	/*printf("Veuillez saisir la dimension du tableau (MAX = 5)\n");
	printf(">");
	scanf("%d", &n);*/

	// 1. Premiere approche : Mettre en place des controles pour vérifier
	// les valeurs saisies par l'utilisateur et arreter le programme si
	// non conforme aux conditions spécifiées.

	/*if (n < 5)
	{
		printf("%d est inferieur a Taille du tableau\n", n);
		exit(0);
	}
	else if (n > 5) 
	{
		printf("%d est superieur a Taille du tableau\n", n);
		exit(0);
	}*/

	// 2. Deuxieme approche

	// Boucle infinie
	while (FLAG == 1)
	{
		printf("Veuillez saisir la dimension du tableau (MAX = 5)\n");
		printf(">");
		scanf("%d", &n);

		if (n == 5) {FLAG = 0;}
	}

	for (int i = 0; i < n; i++)
	{
		printf("Tab[%d]= ", i);
		scanf("%d", &Tab[i]);
	}

	printf("\n");

	for (int i = 0; i < TAILLE; i++)
	{
		printf("Tab[%d]= %d\n", i, Tab[i]);
	}


	/*printf("********* TABLEAU UNE DIMENSION ***********\n\n");
	printf("Veuillez remplir un tableau de %d valeurs entieres.\n\n", n);

	for (int i=0; i < n; i++)
	{
		printf("Tab[%d] = ", i);
		scanf("%d", &Tab[i]);
		fflush(stdin);			// Vider le buffer
	}


	printf("\n****** AFFICHAGE DU TABLEAU	************\n");
	for (int i=0; i < n; i++)
	{
		printf("Tab[%d] = %d\n", i, Tab[i]);
	}
*/

	printf("\n********* CALCUL DE LA SOMME ************\n");
	for (int i=0; i < TAILLE; i++)
	{
		somme += Tab[i];
	}

	printf("La somme est egale a %d\n", somme);
	

	return 0;
}