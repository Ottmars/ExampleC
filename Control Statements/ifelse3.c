#include <stdio.h>
#include <string.h>

int main()
{
    char nombre[30], signo[20];

    printf("\033[1;36m");
    printf("\n\n\t\t\t      Ingresar por teclado el nombre y el signo de cualquier persona e imprima, \n");
    printf("\t\t\tel nombre solo si la persona es signo Piscis, caso contrario imprima no es signo Piscis. \n");
    printf("\t\t\t======================================================================================\n\n");
    printf("\033[0;m");

    printf("\033[1;32m");
    printf("\t\t\tNombre: ");
    gets(nombre);
    printf("\t\t\tSigno: ");
    gets(signo);
    printf("\033[0;m");
    printf("\n");

    if (strcmp(signo, "Piscis") == 0)
    {
        printf("\033[1;35m");
        printf("\t\t\tEs signo Piscis y su nombre es %s\n\n", nombre);
        printf("\033[0;m");
    }
    else if (strcmp(signo, "piscis") == 0)
    {
        printf("\033[1;35m");
        printf("\t\t\tEs signo Piscis y su nombre es %s\n\n", nombre);
        printf("\033[0;m");
    }
    else
    {
        printf("\033[1;31m");
        printf("\t\t\tNo es signo Piscis, eres %s\n\n", signo);
        printf("\033[0;m");
    }

    return 0;
}