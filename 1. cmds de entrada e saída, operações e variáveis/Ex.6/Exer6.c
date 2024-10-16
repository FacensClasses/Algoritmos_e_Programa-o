#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float base, altura, resultado;

    printf("Bem vindo a calculadora da área tringular!\n");

    printf("\nDigite o valor da base: ");
    scanf("%f", &base);

    printf("\nDigite o valor da altura: ");
    scanf("%f", &altura);

    resultado = (base * altura) / 2;

    printf("\nA área do triangulo é: %.2f\n", resultado);

    return 0;
}