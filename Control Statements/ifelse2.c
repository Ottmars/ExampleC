#include <stdio.h>
#include <math.h>

int main()
{
    float numero, raiz;
    printf("\033[1;36m");
    printf("\n\n\t\t\t\t Ingrese un numero y calcule e imprima su raiz cuadrada.\n");
    printf("\t\t\t=======================================================================\n\n");
    printf("\033[0;m");

    printf("\033[1;32m");
    printf("\t\t\tNumero a calcular: ");
    scanf("%f", &numero);
    printf("\033[0;m");
    printf("\n");

    raiz = sqrt(numero);

    if (raiz >= 0)
    {
        printf("\033[1;35m");
        printf("\t\t\tLa raiz es cuadrada es: %.2f", raiz);
        printf("\033[0;m");
        printf("\n\n");
    }
    else
    {
        printf("\033[1;31m");
        printf("\t\t\tEl numero tiene raiz imaginaria: %f", raiz);
        printf("\033[0;m");
        printf("\n\n");
    }

    return 0;
}
