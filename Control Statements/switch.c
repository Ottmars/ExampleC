#include <stdio.h>

int main()
{
    int n;

    printf("\n\n\t\tDigite un numero entre 1 y 3: ");
    scanf("%i", &n);

    switch (n)
    {
    case 1:
        printf("\t\tEs el numero 1\n");
        break;
    case 2:
        printf("\t\tEs el numero 2\n");
        break;
    case 3:
        printf("\t\tEs el numero 3\n");
        break;

    default:
        printf("\t\tNo ha digitado un numetro entre el 1 y 3\n");
        break;
    }
    return 0;
}