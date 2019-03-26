#include <stdio.h>
#include <math.h>

int main()
{
    float base_M, base_m, area, altura;
    printf("\033[0;33m");
    printf("\n\n\t\tEscribir los valores necesarios para calcular el area de un trapecio\n");
    printf("\033[0;30m");
    printf("\033[0;36m");
    printf("\t\t=====================================================================\n\n");
    printf("\033[0;m");

    printf("\033[0;32m");
    printf("\t\tBase Mayor: ");
    scanf("%f", &base_M);
    printf("\033[0m");

    printf("\033[0;33m");
    printf("\t\tBase Menor: ");
    scanf("%f", &base_m);
    printf("\033[0;m");

    printf("\033[0;35m");
    printf("\t\tAltura: ");
    scanf("%f", &altura);
    printf("\033[0;m");
    printf(" \n");

    area = ((base_M + base_m) * altura) / 2;

    printf("\t\tFormula: area = ((base_M+base_m)*altura)/2\n\n");

    printf("\033[1;34m");
    printf("\t\tValor del area del Trapecio: %.2f\n\n", area);
    printf("\033[0m");
    return 0;
}
