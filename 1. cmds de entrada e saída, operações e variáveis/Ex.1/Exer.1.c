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

    int nume, valor;

    printf("Vamos calcular o dobro de um número!\n");

    printf("\nUsuário, digite um número: ");
    scanf("%d", &nume);

    valor = nume * 2;

    printf("\nO dobro é: %d", valor);

    return 0;
}