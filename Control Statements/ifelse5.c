#include <stdio.h>
#include <string.h>

#define HONDA .05
#define YAMAHA .08
#define SUZUKI .10
#define OTROS .02

int main()
{
    char marca[10];
    float precio, total;

    printf("\033[0;36m");
    printf("\n\n\t\t\tUna distribuidora de motocicletas tiene una promocion de fin de anio que consiste en lo siguiente:\n");
    printf("\t\t\t- Honda tiene un descuento del 5 porciento.\n");
    printf("\t\t\t- Yamaha tiene un descuento del 8 porciento.\n");
    printf("\t\t\t- Suzuki tiene un descuento del 10 porciento.\n");
    printf("\t\t\t- Otros tienes un descuento del 2 porciento.\n");
    printf("\033[0;0m");

    printf("\033[0;36m");
    printf("\t\t\t==================================================================================================\n\n");
    printf("\033[0;m");

    printf("\033[1;34m");
    printf("\t\t\tMarca de motocicleta: ");
    gets(marca);
    printf("\033[0;m");
    printf("\033[1;34m");
    printf("\t\t\tPrecio de la motocicleta: ");
    scanf("%f", &precio);
    printf("\033[0;m");

    printf("\n");

    if (strcmp(marca, "Honda") == 0 || strcmp(marca, "honda") == 0)
    {
        total = precio - (precio * HONDA);
        printf("\t\t\tLa motocicleta marca %s con el descuento del 2 porciento tiene un valor de: %.2f\n\n", marca, total);
    }
    else if (strcmp(marca, "Yamaha") == 0 || strcmp(marca, "yamaha") == 0)
    {
        total = precio - (precio * YAMAHA);
        printf("\t\t\tLa motocicleta marca %s con el descuento del 8 porciento tiene un valor de: %.2f\n\n", marca, total);
    }
    else if (strcmp(marca, "Suzuki") == 0 || strcmp(marca, "suzuki") == 0)
    {
        total = precio - (precio * SUZUKI);
        printf("\t\t\tLa motocicleta marca %s con el descuento del 10 porciento tiene un valor de: %.2f\n\n", marca, total);
    }
    else
    {
        total = precio - (precio * OTROS);
        printf("\t\t\tLa motocicleta de la marca %s con el descuento del 2 porciento tiene un valor de: %.2f\n\n", marca, total);
    }

    return 0;
}