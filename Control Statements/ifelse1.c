#include <stdio.h>

int main()
{
    int numero1, numero2;

    printf("\033[0;34m");
    printf("\n\n\t\t\tCalcular el mayor de dos numeros ingresados por el usuario y verificar cual es mayor.\n");
    printf("\033[0;30m");

    printf("\033[0;36m");
    printf("\t\t======================================================================================\n\n");
    printf("\033[0;m");

    printf("\033[1;34m");
    printf("\t\tNumero 1: ");
    scanf("%i", &numero1);
    printf("\033[0;m");
    printf("\033[1;34m");
    printf("\t\tNumero 2: ");
    scanf("%i", &numero2);
    printf("\033[0;m");

    printf("\n");

    if (numero1 > numero2)
    {
        printf("\033[1;32m"); // also can use puts("") instenad printf("") that only works in conditional statemnets
        printf("\t\tEl numero %i es mayor\n\n", numero1);
        printf("\033[0;m");
    }
    else
    {
        if (numero1 < numero2)
        {
            printf("\033[1;33m"); // also can use puts("") instenad printf("") that only works in conditional statemnets
            printf("\t\tEl numero %i es mayor\n\n", numero2);
            printf("\033[0;m");
        }
        else
        {
            printf("\033[1;31m");
            printf("\t\tLos Numeros son iguales");
            printf("\033[0;m");
            printf("\n\n");
        }
    }
    return 0;
}