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

    int A[6], B[10], pontos = 0;

    printf("Seja Bem-vindo usuário!\n");

    printf("\nUsuário, digite o gabarito da mega-sena.\n");

    for(int i = 0; i < 6; i++)
    {
        do
        {
            printf("\nDigite o valor do %d elemento: ", i+1);
            scanf("%d", &A[i]);

            if(A[i] >= 1 && A[i] <= 60)
            {
                printf("\nO valor se encontra na faixa de 01 a 60, por isso ele foi adicionado com sucesso!\n");
            }
            else
            {
                printf("\nUsuário, tente novamente! O sorteio consiste na extração de 6 números diferentes, no universo de 01 a 60.\n");
            }
        } while (A[i] <= 0 || A[i] > 60);
    }

    printf("\nAgora usuário, digite sua aposta!\n");

    for(int i = 0; i < 10; i++)
    {
        do
        {
            printf("\nDigite o valor do %d elemento: ", i+1);
            scanf("%d", &B[i]);

            if(B[i] >= 1 && B[i] <= 60)
            {
                printf("\nO valor se encontra na faixa de 01 a 60, por isso ele foi adicionado com sucesso!\n");
            }
            else
            {
                printf("\nUsuário, tente novamente! O sorteio consiste na extração de 6 números diferentes, no universo de 01 a 60.\n");
            }
        } while (B[i] <= 0 || B[i] > 60);
    }

    printf("\nAgora vamos verificar...\n");
    printf("\n");
    system("pause");

    for(int i = 0; i < 10; i++)
    {
        for(int x = 0; x < 6; x++)
        {
            if (B[i] == A[x])
            {
                pontos++;
            }
        }
    }

    if(pontos == 6)
    {
        printf("\nVocê fez sena! (6 pontos)\n");
    }
    else
    {
        if(pontos == 5)
        {
            printf("\nVocê fez quina! (5 pontos)\n");
        }
        if(pontos == 4)
        {
            printf("\nVocê fez quadra! (4 pontos)\n");
        }
        if(pontos >= 1 || pontos <= 3)
        {
            printf("\nSua pontuação final é: %d. (Você não teve sorte dessa vez)\n", pontos);
        }
    }
}