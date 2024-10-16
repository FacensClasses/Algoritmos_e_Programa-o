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

    int linha, coluna, matriz[5][3], elemento = 0;

    printf("Usuário, seja Bem-vindo!\n\nVamos preencher uma matriz 5x3 e depois retonar o maior elemento dela.\n\n");

    for(linha = 0; linha < 5; linha++)
    {
        for(coluna = 0; coluna < 3; coluna++)
        {
            printf("\nDigite o %d número na %d linha %d coluna: ", elemento+1, linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
            elemento++;
        }
        printf("\n");
    }

    int maior = matriz[0][0];
    for(linha = 0; linha < 5; linha++)
    {
        for(coluna = 0; coluna < 3; coluna++)
        {
            if(matriz[linha][coluna] > maior)
            {
                maior = matriz[linha][coluna];
            }
        }
    }

    printf("\nO maior número da matriz é: %d.\n", maior);

    return 0;
}