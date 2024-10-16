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

    int n, aux;

    printf("Bem-Vindo Usuário!\n");

    printf("\nUsuário, digite o tamanho do vetor que vamos trabalhar: ");
    scanf("%d", &n);

    float vetor[n];

    for(int i = 0; i < n; i++)
    {
        printf("\nDigite o valor do %d elemento: ", i+1);
        scanf("%f", &vetor[i]);
    }

    printf("\nVetor original: ");
    for(int i = 0; i < n; i++)
    {
        printf("%.2f ", vetor[i]);
    }

    // verificação Bubblesort. (Faz o ajuste dos elementos de vetor em ordem decrescente).
    int flag = 1;
    while(flag)
    {
        flag = 0;
        for(int i = 0; i < n - 1; i++)
        {
            if(vetor[i] < vetor[i + 1])
            {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
                flag = 1;
            }
        }
    }

    printf("\nVetor decresente: ");
    for(int i = 0; i < n; i++)
    {
        printf("%.2f ", vetor[i]);
    }

    printf("\n");

    return 0;
}