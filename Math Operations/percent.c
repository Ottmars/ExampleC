#include <stdio.h>

int main()
{
        float total, descuento, total_final;


    // discount 15% from the total value
    printf("\033[0;33m");
    printf("\n\n\t\t\t\tDescontar el 15 Porciento del total\n");
    printf("\033[0;30m");
    printf("\033[0;36m");
    printf("\t\t=====================================================================\n\n");
    printf("\033[0;m");

    printf("\033[0;32m");
    printf("\t\tTotal: ");    // total
    scanf("%f", &total);
    printf("\033[0m");

    descuento = total * .15;
     printf(" \n");

      printf("\033[1;33m");
    printf("\t\tValor del descuento: %.2f\n\n", descuento); // percent discount
    printf("\033[0m"); 
    

    total_final = total - descuento;

    printf("\033[1;34m");
    printf("\t\tTotal menos el descuento: %.2f\n\n", total_final); // total sub discount
    printf("\033[0m"); 
    return 0;
}