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

    int A[10], A1[10], A2[10];
    int a1_index = 0, a2_index = 0; // Índices para controle dos vetores A1 e A2

    printf("Bem-vindo usuário!\n\nVamos trabalhar com 10 elementos de um vetor!\n");

    for(int i = 0; i < 10; i++)
    {
        printf("\nDigite o valor da %d posição: ", i+1);
        scanf("%d", &A[i]);
    }

    // A2 > Números pares:
    for(int i = 0; i < 10; i++)
    {
        if(A[i] % 2 == 0)
        {
            A2[a2_index++] = A[i];
        }
    }

    // A1 > Números ímpares:
    for(int i = 0; i < 10; i++)
    {
        if(A[i] % 2 != 0)
        {
            A1[a1_index++] = A[i];
        }
    }

    // Resultado dos Vetores A1 e A2:
    printf("\nNúmeros ímpares do vetor A em A1: ");
    for(int i = 0; i < a1_index; i++)
    {
        printf("%d ", A1[i]);
    }

    printf("\nNúmeros pares do vetor A em A2: ");
    for(int i = 0; i < a2_index; i++)
    {
        printf("%d ", A2[i]);
    }
}