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

    printf("Digite o primero valor: ");
    scanf("%d", &valor);

    printf("\nDigite o segundo valor: ");
    scanf("%d", &valor2);

    if(valor > valor2)
    {
        printf("\nO %d é maior que %d.\n", valor, valor2);

    }
    else
    {
        printf("\nO %d é maior que %d.\n", valor2, valor);
    }

    return 0;
}