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
    printf("O imc � %0.1f\n", imc);
    if (imc < 30)
        printf("Voc� n�o est� obeso");
    else
        printf("Voc� est� obeso");
    return 0;
}