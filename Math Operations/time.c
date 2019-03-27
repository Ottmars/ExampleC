#include <stdio.h>

int main()
{
    int horas, minutos, segundos, t1, t2, total;

    printf("\033[0;34m");
    printf("\n\n\t\tCalcular la cantidad de segundos que estan incluidos en el numero de horas, minutos y\n");
    printf("\t\tsegundos ingresados por el usuario\n");
    printf("\033[0;30m");

    printf("\033[0;36m");
    printf("\t\t======================================================================================\n\n");
    printf("\033[0;m");

    printf("\033[0;32m");
    printf("\t\tHoras: "); // total
    scanf("%i", &horas);
    printf("\033[0m");
    printf("\033[0;32m");
    printf("\t\tMinutos: "); // total
    scanf("%i", &minutos);
    printf("\033[0m");
    printf("\033[0;32m");
    printf("\t\tSegundos: "); // total
    scanf("%i", &segundos);
    printf("\033[0m");

    t1 = horas * 3600;
    t2 = minutos * 60;
    total = t1 + t2 + segundos;

    printf("\033[1;35m");
    printf("\t\tTotal del tiempo en segundos: %i ", total); // total
    printf("\033[0m");

    printf(" \n");
    printf(" \n");

    return 0;
}