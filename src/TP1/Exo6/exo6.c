/*
    Le plus grand et le plus petit d’une suite d’entiers.
    Considérons la suite suivante : int tab[] = {10, 11, 2, 4, 5, 7, 0}

    Écrire un programme affiche le plus grand et le plus petit d’une suite d’entier 
    contenu dans un tableau tab.

*/

#include <stdio.h>

int main (int argc, char* argv[])
{
    // tab est un tableau a une dimension composé d'éléments du meme type
    int tab[] = {100, 1, 2, 4, 5, 7, 30};


    /*
        L'instruction sizeof retourne la taille en octet
        d'un type ou d'une variable.

        Ici on utilise size_t car c'est un type plus adapté
        que le type int.
    */
    size_t len = sizeof(tab)/sizeof(int);

    /*
        Les deux variables max et min sont initialisés 
        avec les élements du tableau Tab.
    */

    int max = tab[0];            // max = 100
    int min = tab[len-1];       // min  = 30

    /*
        La boucle For permet de repeter une suite d'instructions
        un certain nombre de fois. Ici nous connaissons le nombre
        d'elements du tableau qui represente la taille du tableau.
    */
    for (int i = 0; i <= len - 1; i++)
    {
        // Recherche le meximum
        if (max < tab[i]) 
        { 
            max = tab[i];
        }

        // Recherche le minimum
        if (min > tab[i]) 
        { 
            min = tab[i];
        }
    }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    return 0;
}