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

    float valor1, valor2, resultado;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("\nDigite o segundo valor: ");
    scanf("%f", &valor2);

    if(valor2 == 0)
    {
        printf("\nNão existe divisão por zero!\n");
    }
    else
    {
        resultado = valor1 / valor2;
        printf("\nO valor da divisão é: %.2f.\n", resultado);
    }

    return 0;
}