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

    int valor, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor);

    printf("\nDigite o segundo valor: ");
    scanf("%d", &valor2);

    if(valor < valor2)
    {
        printf("\nOs números %d %d estão em ordem crescente.\n", valor, valor2);
    }
    if(valor > valor2)
    {
        printf("\nOs números %d %d estão em ordem crescente.\n", valor2, valor);
    }
    if(valor == valor2)
    {
        printf("\nOs valores são iguais.\n");
    }

    return 0;
}