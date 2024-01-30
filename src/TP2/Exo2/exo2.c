/*
    Exercice 2. Voyelles consonnes
    Faites saisir une variable de type caractère et indiquez à l'utilisateur 
    si celle-ci est une voyelle ou une consonne. On considérera que le caractère 
    saisi est en minuscule.
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    char value;

    printf("\n************ VOYELLE OU CONSONNE *************\n\n");
    printf("Entrer un caractere: ");
    scanf(" %c", &value);
    
    if(value == 'a' || value == 'e' || value == 'i' || value == 'o' || value == 'u' || value == 'y' ||
    value == 'A' || value == 'E' || value == 'I' || value == 'O' || value == 'U' || value == 'Y')  
    {
        printf("\n %c est une voyelle.\a", value);
    }
    else 
    {
        printf("\n %c est une consonne.\a", value);
    }

    return 0;
}