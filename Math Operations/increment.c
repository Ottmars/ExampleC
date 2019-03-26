#include <stdio.h>

int main()
{
    float salario_actual, aumento, salario_final, aumento_valor;

      // increment % from the total value
    printf("\033[0;34m");
    printf("\n\n\t\t\t     Obtener el salario de una persona despues de un aumento\n"); 
    printf("\033[0;30m");
    printf("\033[0;36m");
    printf("\t\t==================================================================================\n\n");
    printf("\033[0;m");

    printf("\033[0;32m");
    printf("\t\tSalario Actual: "); // total
    scanf("%f", &salario_actual);
    printf("\033[0m");

    printf("\033[0;33m");
    printf("\t\tPorcentaje de aumento: "); // total
    scanf("%f", &aumento);
    printf("\033[0m");

    aumento_valor = (aumento /  100) * salario_actual;

    printf(" \n");

    printf("\033[1;35m");
    printf("\t\tTotal del aumento: $%.2f\n\n", aumento_valor); // percent discount
    printf("\033[0m");

    salario_final = salario_actual + aumento_valor;

    printf("\033[1;34m");
    printf("\t\tSalario final: $%.2f\n\n", salario_final); // percent discount
    printf("\033[0m");
    return 0;
}