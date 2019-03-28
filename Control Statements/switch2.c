#include <stdio.h>

int main()
{
    char nota;

    printf("\033[0;36m");
    printf("\n\n\t\t\tDada una nota de un examen mediante un codigo escribir el literal que le corresponde a la nota.\n");
    printf("\t\t\t===============================================================================================\n\n");
    printf("\033[0;m");

    printf("\t\t\tIngresa la nota: ");
    scanf("%c", &nota);

    switch (nota)   
    {
    case 'A':
        printf("\033[1;35m");
        printf("\n\t\t\tExcelente\n\n");
        printf("\033[0;m");
        break;
    case 'B':
        printf("\033[1;32m");
        printf("\n\t\t\tNotable\n\n");
        printf("\033[0;m");
        break;
    case 'C':
        printf("\033[1;33m");
        printf("\n\t\t\tAprobado\n\n");
        printf("\033[0;m");
        break;
    case 'F':
        printf("\033[1;31m");
        printf("\n\t\t\tReprobado\n\n");
        printf("\033[0;m");
        break;
    case 'D':
        printf("\033[1;31m");
        printf("\n\t\t\tReprobado\n\n");
        printf("\033[0;m");
        break;
    default:
        printf("\033[1;31m");
        printf("\n\t\t\tLas notas deben ser 'A', 'B', 'C', 'D' o 'F'\n\n");
        printf("\033[0;m");
        break;
    }
    return 0;
}