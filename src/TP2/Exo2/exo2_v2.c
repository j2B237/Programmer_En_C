/*
    Exercice 2. Voyelles consonnes
    Faites saisir une variable de type caractère et indiquez à l'utilisateur 
    si celle-ci est une voyelle ou une consonne. On considérera que le caractère 
    saisi est en minuscule.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{

    char listeVoyelles[] = {'A', 'E', 'I', 'U', 'O', 'Y'};
    char lettre = '\0';     // lettre est egale au caractère nul

    // Debut

    // Afficher, saisir, lire et enfin stocker valeur dans lettre
    printf("Saisir une lettre >");
    scanf("%c", &lettre); 


    for (int i=0; i < 12; i++)
    {
        //printf("listeVoyelles[%d]=%c\n", i, listeVoyelles[i]);
        if (lettre == listeVoyelles[i])
        {
            printf("%c est une voyelle.\n", lettre);
            exit(0);
        }
        else
        {
            printf("%c est une consonne.\n", lettre);
        }
    }

    // Fin

    return 0;
}