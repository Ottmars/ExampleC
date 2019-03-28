#include <stdio.h>
#include <string.h>

int main()
{
    char nombre[30], sexo[10];
    int edad;

    printf("\033[1;36m");
    printf("\n\n\t\t\tIngresar por teclado el nombre, la edad y el sexo de cualquier persona e imprima, \n");
    printf("\t\t\tsolo si la persona es de sexo masculino y mayor de edad, el nombre de la persona.\n");
    printf("\t\t\t=================================================================================\n\n");
    printf("\033[0;m");

    printf("\033[1;32m");
    printf("\t\t\tNombre: ");
    gets(nombre);
    printf("\t\t\tSexo: ");
    gets(sexo);
    printf("\t\t\tEdad: ");
    scanf("%i", &edad);
    printf("\033[0;m");
    printf("\n");

    if (edad >= 18 && strcmp(sexo, "masculino") == 0 || strcmp(sexo, "Masculino") == 0)
    {
        printf("\033[1;35m");
        printf("\t\t\tLa persona %s es de sexo masculino y mayor de edad\n\n", nombre);
        printf("\033[0;m");
    }
    else if (edad >= 18 && strcmp(sexo, "femenino") == 0 || strcmp(sexo, "Femenino") == 0)
    {
        printf("\033[1;35m");
        printf("\t\t\tLa persona %s es de sexo femenino y mayor de edad\n\n", nombre);
        printf("\033[0;m");
    }
    else
    {
        printf("\033[1;31m");
        printf("\t\t\t%s eres menor de edad y tu sexo es %s\n\n", nombre, sexo);
        printf("\033[0;m");
    }
    return 0;
}