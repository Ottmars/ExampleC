#include <stdio.h>

int main()
{
    float dinero, horas, salario_diario, salario_mensual;

    // discount 15% from the total value
    printf("\033[0;34m");
    printf("\n\n\t\tObtener el salario de una persona conforme las horas trabajadss y la paga por hora\n");
    printf("\033[0;30m");
    printf("\033[0;36m");
    printf("\t\t==================================================================================\n\n");
    printf("\033[0;m");

    printf("\033[0;32m");
    printf("\t\tDinero ganado por hora: "); // total
    scanf("%f", &dinero);
    printf("\033[0m");

    printf("\033[0;33m");
    printf("\t\tHoras Trabajadas: "); // total
    scanf("%f", &horas);
    printf("\033[0m");

    salario_diario = dinero * horas;
    printf(" \n");

    printf("\033[1;35m");
    printf("\t\tSalario al dia: $%.2f\n\n", salario_diario); // percent discount
    printf("\033[0m");

    salario_mensual = salario_diario * 30;

    printf("\033[1;34m");
    printf("\t\tSalario al mes: $%.2f\n\n", salario_mensual); // percent discount
    printf("\033[0m");

    return 0;
}