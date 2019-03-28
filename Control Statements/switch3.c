#include <stdio.h>

int main()
{
    int vehiculos;

    printf("\033[0;36m");
    printf("\n\n\t\t\tSeleccionar un tipo de vehículo e indicar el peaje a pagar según un valor numérico\n");
    printf("\t\t\t1 - turismo, peaje = $500.\n");
    printf("\t\t\t2 - autobus, peaje = $3000.\n");
    printf("\t\t\t3 - motocicleta, peaje = $300.\n");
    printf("\t\t\t===============================================================================================\n\n");
    printf("\033[0;m");

    printf("\t\t\tIngresa el numero segun tu Vehiculo: ");
    scanf("%i", &vehiculos);

    switch (vehiculos)
    {
    case 1:
        printf("\033[0;32m");
        printf("\n\t\t\tLa Tarifa a pagar es de 500 pesos.\n\n");
        printf("\033[0;m");
        break;
    case 2:
        printf("\033[0;32m");
        printf("\n\t\t\tLa Tarifa a pagar es de 3000 pesos.\n\n");
        printf("\033[0;m");
        break;
    case 3:
        printf("\033[0;32m");
        printf("\n\t\t\tLa Tarifa a pagar es de 300 pesos.\n\n");
        printf("\033[0;m");
        break;

    default:
        printf("\033[0;31m");
        printf("\n\t\t\tVehiculo no autorizado\n\n");
        printf("\033[0;m");
        break;
    }

    return 0;
}