/*
    Écrire un programme qui affiche les 50 premiers nombres pairs (2, 4,6,...), de trois
    façons différentes :
        – avec une boucle while (...) {...}
        – avec une boucle do {...} while (...) ;
        – avec une boucle for (...;...;...) {...}
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
    // 1. boucle while
    /*
        A-) Analyse du problème

        1) Comment reconnaitre un nombre pair ?
        2) Comment recuperer les 50 premiers nombre pairs avec une boucle while ?
        3) Comment afficher les 50 premiers nombres pairs ?

        B-) Specifications algorithmiques

        compteur : entier := 0
        LIMITE   : constant entier := 50
        index    : entier := 2

        Debut 
            
            Afficher "Les 50 Premiers Nombres Pairs" (Avec retour a la ligne)
            Repeter tant que compteur <= LIMIT faire

                si index modulo 2 == 0 faire
                    Afficher "valeur_index" (avec retour a la ligne)
                    compteur <------ compteur + 1
                Fin si

                index <------- index + 1

        Fin

        
        // Codage 

        int compteur = 0;
        int index    = 0;
        const int LIMIT = 50;


        printf("***************** Les 50 Premiers Nombres Pairs ****************\n");

        while (compteur <= LIMIT)
        {
            if (index % 2 == 0)
            {
                printf("%d nombre pair est %d\n", compteur, index);
                compteur++;       // Post incrementation
            }
            index ++;           // forme contractée de index = index + 1
        }

    */

    // 2. boucle do {...} while

    /*
        B-) Specifications algorithmiques

        compteur : entier := 0
        LIMITE   : constant entier := 50
        index    : entier := 0

        Debut 
            
            Afficher "Les 50 Premiers Nombres Pairs" (Avec retour a la ligne)
            
            Faire
                index <----- index + 1
                Afficher "index"

                si index modulo 2 == 0 faire
                    Afficher "valeur_index" (avec retour a la ligne)
                    compteur <--- compteur + 1

            Tant que compteur <= LIMIT

        Fin

        // Codage 


        int compteur = 0;
        int index    = 0;
        const int LIMIT = 50;

        printf("***************** Les 50 Premiers Nombres Pairs ****************\n");
        do
        {
            index ++;
            printf("I= %d\n\n", index);

            if (index % 2 == 0)
            {
                printf("%d nombre pair est %d \n", compteur+1, index);
                compteur ++;
            }

        }while(compteur < LIMIT);
    
    */


    // 3. boucle for (...;...;...)

    int compteur = 0;

    for (int i = 0; i < 100; i++)
    {
        if (i%2==0)
        {
            printf("[%d] %d\n", compteur+1,i);
            compteur++;
        }

        //if (compteur == 50)
        //    exit(0);

    }
   
   
    return 0;
}