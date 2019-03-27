#include <stdio.h>

#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

int main()
{
    float tasa, gasto;
    printf("\033[0;34m");
    printf("\n\n\t\t\t\t  Visualizar la tarifa de la luz segun el gasto de corriente electrica.\n");
    printf("\t\tPara un gasto menor de 1.000Kwxh la tarifa es 1.2, entre 1.OOO y 1.850Kwxh es 1.0 y mayor de 1.85OKwxh 0.9.\n");
    printf("\033[0;30m");

    printf("\033[0;36m");
    printf("\t\t===========================================================================================================\n\n");
    printf("\033[0;m");

    printf("\033[0;32m");
    printf("\t\tIngresar gasto de corriente electrica: ");
    scanf("%f", &gasto);
    printf("\033[0;m");
    printf("\n");

    if (gasto < 1000)
    {
        tasa = TARIFA1;
    }
    if (gasto >= 1000 && gasto <= 1850)
    {
        tasa = TARIFA2;
    }
    if (gasto > 1850)
    {
        tasa = TARIFA3;
    }
    printf("\033[0;35m");
    printf("\t\tLa tarifa de tu consumo de corriente electrica es: %.2f", tasa);
    printf("\033[0;m");
    printf("\n\n");
    return 0;
}