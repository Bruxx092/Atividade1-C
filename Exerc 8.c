#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float d, c, m;

    printf("Escreva a distancia percorrida e o combustivel gasto\n");
    scanf("%f %f", &d, &c);

    m = d / c;
    printf("O consumo m�dio total do seu carro �: %0.2f", m);
    return 0;
}