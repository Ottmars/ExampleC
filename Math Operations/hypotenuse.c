#include <stdio.h>
#include <math.h>

int main()
{
    float hyp, c1, c2;
  
    // hypotenuse operation, type cateto 1 and cateto 2 
    printf("\033[1;34m");   
    printf("\n\n\tIngresar los valores de los dos catetos para obtener el valor de la hipotenusa:  \n\n");
     printf("\033[0m"); 
    printf("\t===============================================================================\n\n");

    printf("\033[1;33m"); 
    printf("\tIngresar Cateto 1: " ); // type cateto 1
    scanf("%f", &c1);
    printf("\tIngresar Cateto 2: "); //type  cateto 2
    scanf("%f", &c2);
    printf("\033[0m");   

    hyp = sqrt(pow(c1,2)+pow(c2,2));

    printf("\033[1;35m");                        // this are colors for the CLI
    printf("\n\tHipotenusa: %.3f \n\n", hyp); //  hypotenuse result
    printf("\033[0m");                           // this reset the color

    return 0;
}