#include <stdio.h>

int main()
{

    float n1, n2, n3, ave;


    // Obtain average from 3 random numbers
    printf("\033[0;33m");
    printf("\n\n\t\t\t    Obetener el promedio de 3 numeros cualquiera\n");
    printf("\033[0;30m");
    printf("\033[0;36m");
    printf("\t\t=====================================================================\n\n");
    printf("\033[0;m");

    printf("\033[0;32m");
    printf("\t\tNumero 1 ");    // number 1
    scanf("%f", &n1);
    printf("\033[0m");

    printf("\033[0;33m");
    printf("\t\tNumero 2: "); // number 2
    scanf("%f", &n2);
    printf("\033[0;m");

    printf("\033[0;35m");
    printf("\t\tNumero 3: "); //number 3
    scanf("%f", &n3);
    printf("\033[0;m");
    printf(" \n");

    ave = (n1+n2+n3)/3; // formula

    printf("\t\tFormula: (n1+n2+n3)/3 \n\n" ); 

    printf("\033[1;34m");
    printf("\t\tPromedio de los 3 numeros: %.2f\n\n", ave); // average result
    printf("\033[0m"); 

    return 0;
}