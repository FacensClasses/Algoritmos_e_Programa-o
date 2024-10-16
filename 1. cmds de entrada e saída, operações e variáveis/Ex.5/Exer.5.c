#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

main()
{

    int valor1, valor2;
    float resultado, resto;

    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("\nDigite o segundo valor: ");
    scanf("%d", &valor2);

    resultado = (float)valor1 / valor2;

    resto = valor1 % valor2;

    printf("\nO valor da divisão entre os valores é: %.2f\n", resultado);
    printf("O resto da divisão é: %.2f\n", resto);

    return 0;
}