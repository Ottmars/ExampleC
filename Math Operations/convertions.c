#include <stdio.h>

int main()
{
    float a;
    float far = 0;

    printf("\n\n\t\t  Convertir grados Celsius a grados Fahrenheit: \n\n");
    printf("\t=================================================================\n\n");
    printf("\tIngresar grados Celsius: ");
    scanf("%f", &a);

    far = ((a * 9) / 5) + 32;

    printf("\033[1;34m");
    printf("\n\tConversion grados Ceslsius a Fahrenheit: %.2f Grados Fahrenheit\n\n", far);
    printf("\033[0m");

    return 0;
}