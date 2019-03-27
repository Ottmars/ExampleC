#include <stdio.h>

int main()
{
    float examen;

    printf("\033[0;34m");
    printf("\n\n\t\t\t  Verificar si el alumno aprobo el examne (Nota mayor o igual 10.5).\n");
    printf("\033[0;30m");

    printf("\033[0;36m");
    printf("\t\t======================================================================================\n\n");
    printf("\033[0;m");

    printf("\033[1;34m");
    printf("\t\tCalificacion del examen: ");
    scanf("%f", &examen);
    printf("\033[0;m");

    printf("\n");

    if (examen >= 10.5) 
    {
        printf("\033[1;32m"); // also can use puts("") instenad printf("") that only works in conditional statemnets
        printf("\t\tEl alumno SI aprobo el examen\n\n");
        printf("\033[0;m");
    }
    else
    {
        printf("\033[1;31m");
        printf("\t\tEl alumno NO aprobo el examen \n\n");
        printf("\033[0;m");
    }
    return 0;
}