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

    int linha, coluna, matriz[4][3], elemento = 0;

    printf("Usuário, seja Bem-vindo!\n\nVamos preencher uma matriz 4x3.\n\n");

    system("pause");

    for(linha = 0; linha < 4; linha++)
    {
        for(coluna = 0; coluna < 3; coluna++)
        {
            printf("\nDigite o %d número na %d linha e %d coluna: ", elemento+1, linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
            elemento++;
        }
        printf("\n");
    }

    printf("\nMatriz em formato de tabela:\n");
    for(linha = 0; linha < 4; linha++)
    {
        for(coluna = 0; coluna < 3; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}