#include <stdio.h>

int main()
{

    int n;
    printf("Ingresar el numero: ");
    scanf("%i", &n);

    if (n % 2 == 0)
    {
        printf("Tu numero es PAR");
    }
    else
    {
        printf("Tu numero es IMPAR");
    }
    printf("\n\n");
    return 0;
}