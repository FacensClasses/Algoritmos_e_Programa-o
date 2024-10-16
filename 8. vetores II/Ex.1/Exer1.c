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

    int vetor[5], outro[5];
    float produto_escalar = 0;

    printf("Bem vindo ao calculo do produto escalar entre dois vetores!\n");

    for(int i = 0; i < 5; i++)
    {
        printf("\nDigite o valor da %d posição do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        printf("\nDigite o valor da %d posição do vetor: ", i+1);
        scanf("%d", &outro[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        produto_escalar += vetor[i] * outro[i];
    }

    printf("\nO produto escalar entre os dois vetores é: %.2f.\n", produto_escalar);
}