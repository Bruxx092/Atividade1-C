#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale( LC_ALL, "" );

    float peso, altura, imc;
    printf("Digite p peso e a altura:");
    scanf("%f %f", &peso, &altura);
    imc = peso / pow(altura, 2);
    printf("O imc é %0.1f\n", imc);
    if (imc < 30)
        printf("Você não está obeso");
    else
        printf("Você está obeso");
    return 0;
}