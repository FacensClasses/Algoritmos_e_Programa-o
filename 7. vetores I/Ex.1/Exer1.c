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

    int vetor[10];

    printf("Bem-vindo\n");

    for(int i = 0; i < 10; i++)
    {
        printf("\nDigite o número da posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        printf("\nO número da %d posição é: %d.\n", i, vetor[i]);
    }
}