/*
	EXO2 : 

	Écrire un programme qui :

	● Change le signe de tous les éléments d’un tableau d’entiers.
	● Calcul la valeur moyenne des éléments d’un tableau de nombre flottants.
	● Cherche un élément dans un tableau d’entiers et affiche son index.
	● Cherche l’élément le plus grand d’un tableau de nombre flottants.
	● Affiche l’index de l’élément le plus grand du tableau.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int size = 0;
	const int MAX_TAILLE = 5;

	float somme = 0.0;
	int FLAG = 1;

	// 1. Capture valeur utilisateur
	while (FLAG == 1)
	{
		printf("Veuillez saisir la dimension du tableau (MAX = %d)\n", MAX_TAILLE);
		printf(">");
		scanf("%d", &size);
		fflush(stdin);

		if (size == MAX_TAILLE) {FLAG = 0;}
	}

	// Declaration d'un tableau
	// Allocation dynamique d'un tableau
	int Tab[size];

	// ******* Initialisation des éléments du tableau ****** //
	for (int i = 0; i < size; i++)
	{
		printf("Tab[%d]= ", i);
		scanf("%d",&Tab[i]);
		fflush(stdin);
	}


	// ******* Changer signe des éléments du tableau ****** //
	for (int i = 0; i < size; i++)
	{
		if (Tab[i] < 0) 
		{
			Tab[i] = -1 * Tab[i];
		}
		else if (Tab[i] > 0) 
		{
			Tab[i] = -1 * Tab[i];
		}
	}

	// Affiche temporaire
	printf("\nElements du tableau avec changement de signe\n\n");
	for (int i = 0; i < size; i++)
	{
		printf("Tab[%d]= %d\n", i, Tab[i]);
	}


	// Creer un tableau de floatant
	float TabFloatant[size];

	for (int i=0; i < size; i++ )
	{	
		// 1. Copier toutes les valeurs du tableau d'entiers
		// 2. Convertir les int en float
		// 3. Stocker ces valeurs dans le tableau de floatants
		TabFloatant[i] = (float)Tab[i];
	}


	printf("\nElements du tableau de floatant\n\n");
	for (int i = 0; i < size; i++)
	{
		printf("TabFloatant[%d]= %.2f\n", i, TabFloatant[i]);
	}

	printf("\n********* CALCUL DE LA MOYENNE ************\n");
	for (int i=0; i < size; i++)
	{
		somme += TabFloatant[i];
	}

	printf("La Moyenne est egale a %.2f\n", somme/(float)size);
	

	//===== Chercher l'élement dans le tableau d'entier ======//
	int value = 0;
	int indexValue = 0;

	printf("Entrez la valeur a rechercher : ");
	scanf("%d", &value);
	fflush(stdin);

	for (int i=0; i < size; i++)
	{
		if (value == Tab[i]) 
		{
			indexValue = i;
			printf ("index = %d \t value=%d \n", indexValue, Tab[indexValue]);
			break;
		}
		else
		{
			printf ("La valeur n'existe pas.\n");
			break;
		}
	}


	//====== Chercher l'element le plus grand =====//

	/*
		var tab : array := [2, 30, 0, -1, 20]
		var max : entier := tab[0]  // max prend la valeur du premier element du tableau tab

	2      	<--- MAX = 2
	30		i = 1, Tab[1] = 30 et MAX = 2 alors MAX = Tab[1]
	0
	-1
	20
			MAX = 30
	*/

	int max = Tab[0];
	int indexMax = 0;

	for (int i=0; i < size; i++)
	{
		if (max >= Tab[i]) 
		{
			max = Tab[i];
			indexMax = i;
		}
	}

	printf ("Max index = %d \t Max =%d \n", indexMax, max);

	return 0;
}