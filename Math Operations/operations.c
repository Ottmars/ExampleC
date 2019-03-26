#include <stdio.h>

int main()
{
    int a, b;
    int sum = 0,
        res = 0,
        mul = 0;
    float dis = 0;
    // type number 'a' and number 'b' to do math operations addition, subtraction, multiplication, division
    printf("\n\n\tIngresar los 2 numeros (a y b) para hacer las operaciones de suma, resta, multiplicacicon y division: \n\n");
    printf("\t=====================================================================================================\n\n");
    printf("\tIngresar numero 'a': "); //type number a
    scanf("%i", &a);

    printf("\tIngresar numero 'b': "); // type number b
    scanf("%i", &b);

    sum = a + b; // add operation
    res = a - b; // sub operation
    mul = a * b; // mult operation
    dis = a / b; // div operations

    printf("\033[1;35m"); // this are colors for the CLI 
    printf("\n\tResultado suma a + b: %i", sum); // add result 
    printf("\033[0m"); // this reset the color 

    printf("\033[1;32m");
    printf("\n\tResultado resta a - b: %i", res); // sub result
    printf("\033[0m");

    printf("\033[1;33m");
    printf("\n\tResultado multiplicacion a * b: %i", mul); // mult result
    printf("\033[0m");

    printf("\033[1;34m");
    printf("\n\tResultado division a / b: %.3f \n\n", dis); // div result
    printf("\033[0m");

    return 0;

}
