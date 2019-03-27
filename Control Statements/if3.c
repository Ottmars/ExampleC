#include <stdio.h>

int main()
{
    int numero;

    printf("\033[0;34m");
    printf("\n\n\t\t\tComprobar si un numero digitado por el usuario es positivo o negativo.\n");
    printf("\033[0;30m");

    printf("\033[0;36m");
    printf("\t\t======================================================================================\n\n");
    printf("\033[0;m");

    printf("\033[1;34m");
    printf("\t\tNumero a verificar: ");
    scanf("%i", &numero);
    printf("\033[0;m");

    printf("\n");

    if (numero > 0)
    {
        printf("\033[1;32m"); // also can use puts("") instenad printf("") that only works in conditional statemnets
        printf("\t\tEl numero es POSITIVO\n\n");
        printf("\033[0;m");
    }
    else
    {
        printf("\033[1;31m");
        printf("\t\tEl numero es NEGATIVO \n\n");
        printf("\033[0;m");
    }

    return 0;
}