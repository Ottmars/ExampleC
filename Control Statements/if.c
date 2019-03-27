#include <stdio.h>

int main()
{
    int n1, n2;

    printf("\033[0;34m");
    printf("\n\n\t\t\t  Verificar si el primer numero es divisible por el segundo numero.\n");
    printf("\033[0;30m");

    printf("\033[0;36m");
    printf("\t\t======================================================================================\n\n");
    printf("\033[0;m");

    printf("\033[1;34m");
    printf("\t\tNumero 1: ");
    scanf("%i", &n1);
    printf("\033[0;m");
    printf("\033[1;34m");
    printf("\t\tNumero 2: ");
    scanf("%i", &n2);
    printf("\033[0;m");

    if (n1 % n2 == 0)
    {
        printf("\033[1;32m");
        printf("\t\tEl numero %i SI es divisible entre %i\n\n", n1, n2);
        printf("\033[0;m");
    }
    else
    {
        printf("\033[1;31m");
        printf("\t\tEl numero %i NO es divisible entre %i\n\n", n1, n2);
        printf("\033[0;m");
    }

    return 0;
}