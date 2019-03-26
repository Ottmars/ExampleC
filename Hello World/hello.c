#include <stdio.h>

int main(int argc, char const *argv[])
{
    char word[20] = "Hello GitHub";
    printf("\033[1;34m"); // add color to cli
    printf("\tHello GitHub\n");
    printf("\033[0m;");  // reset color 
    return 0;
}   