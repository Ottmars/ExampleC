#include <stdio.h>
#include <math.h>

int main() {
    float pi = 3.1416;
    float r;
    float lon;

    printf("\n\n\t\t\tObtener Area de una Circunferencia \n\n");
    printf("\t=================================================================\n\n");
    printf("\tIngresar radio de la Circunferencia: ");
    scanf("%f", &r);

    lon = pi * pow(r,2);

    printf("\033[1;34m");
    printf("\n\tArea de la Circunferencia: %.2f\n\n", lon);
    printf("\033[0m");

    return 0;
}
