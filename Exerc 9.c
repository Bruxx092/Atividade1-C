#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int f, c;
    printf("Qual temperatura deseja converter de Fahrenheit para Celcius?\n");
    scanf("%i", &f);
    c = (f - 32) * 5 / 9;
    printf("A temperatura em Celcius é: %i", c);
    return 0;
}