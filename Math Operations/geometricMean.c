#include <stdio.h>
#include <math.h>

int main()
{
    float n1, n2, n3, geometric_mean, prod;

    printf("\033[0;34m");
    printf("\n\n\t\t\t\tCalcular la media geomatrica de tres numeros.\n");
    printf("\033[0;30m");

    printf("\033[0;36m");
    printf("\t\t======================================================================================\n\n");
    printf("\033[0;m");

    printf("\033[0;32m");
    printf("\t\tNumero 1: "); // total
    scanf("%f", &n1);
    printf("\033[0m");
    printf("\033[0;32m");
    printf("\t\tNumero 2: "); // total
    scanf("%f", &n2);
    printf("\033[0m");
    printf("\033[0;32m");
    printf("\t\tNumero 3: "); // total
    scanf("%f", &n3);
    printf("\033[0m");

    prod = n1 * n2 * n3;
    geometric_mean = cbrt(prod);

    printf("\033[1;35m");
    printf("\t\tMedia Geomatrica: %.2f ", geometric_mean); // total
    printf("\033[0m");

    printf(" \n");
    printf(" \n");
    
    return 0;
}