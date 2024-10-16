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

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    resultado = (valor1 + valor2) / 2;

    printf("\nA média aritmética entre os valores é: %.2f.\n", resultado);

    return 0;
}
