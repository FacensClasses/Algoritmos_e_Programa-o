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

    int soma = 0, matriz[3][4], elemento = 0;

    printf("Usuário, seja Bem-vindo!\n\nVamos preencher uma matriz 3x4 e no final retornar a soma de todos os elementos.\n\n");

    system("pause");

    for(int linha = 0; linha < 3; linha++)
    {
        for(int coluna = 0; coluna < 4; coluna++)
        {
            printf("\nDigite o %d número na %d linha e %d coluna: ", elemento+1, linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
            elemento++;
        }
        printf("\n");
    }

    for(int linha = 0; linha < 3; linha++)
    {
        for(int coluna = 0; coluna < 4; coluna++)
        {
            soma += matriz[linha][coluna];
        }
    }

    printf("A soma de todos os elementos da matriz é: %d.\n", soma);

    return 0;
}