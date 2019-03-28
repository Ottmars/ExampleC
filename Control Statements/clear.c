#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tecla;

    printf("\033[0;34m");
    printf("\n\n\t\t\tHacer un Programa que borre la pantalla al pulsar 1 \n");
    printf("\033[0;30m");

    printf("\033[0;36m");
    printf("\t\t======================================================================\n\n");
    printf("\033[0;m");

    printf("\t\tIngrese el numero 1 para borrar la pantalla: ");
    scanf("%c", &tecla);

    if (tecla == '1')
    {
        system("cls");
        printf("\033[1;32m");
        printf("\n\t\t ===== Pantalla borrada =====\n\n");
        printf("\033[0;m");
    }
    else
    {
        fflush(stdin);
        printf("\033[1;31m");
        printf("\n\t\t\t\t = La pantalla no ha sido borrada = \n");
        printf("\033[0;m");
        printf("\033[1;32m");
        printf("\t\tFavor de ingresar la tecla del numero 1 para borrar la pantalla: ");
        scanf("%c", &tecla);
        printf("\n\n");
        printf("\033[0;m");
        if (tecla == '1')
        {
            system("cls");
            printf("\033[1;32m");
            printf("\n\t\t ===== Pantalla borrada =====\n\n");
            printf("\033[0;m");
        }
        else
        {
            printf("\033[1;31m");
            printf("\t\tHa ocurrido un error. La pantalla no pudo ser borrada\n\n");
            printf("\033[0;m");
        }
    }
    return 0;
}