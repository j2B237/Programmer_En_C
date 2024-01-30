/*
    Ecrire un programme qui affiche le code ASCII des caractères sous la forme suivante :
    caractère A code = xx
    caractère B code = xx

    ASCII : American Standard Code for Information Interchange

    Le code ASCII est la représentation numérique d'un caractrère.
*/

#include <stdio.h>

int main (int argc, char* argv[])
{
    char A = 'A';
    char B = 'B';

    printf("caractere %c \tCode = %d\n", A, A);
    printf("caractere %c \tCode = %d\n", B, B);

    /*
        %c => permet d'afficher en sortie de console la valeur d'un caractère.
        %d => permet d'afficher en sortir de console la valeur numérique d'une variable.
    */
    return 0;
}