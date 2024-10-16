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

    int linha, coluna, matriz[4][4], elemento = 0, soma = 0, vetor[4];

    printf("Usuário, seja Bem-vindo!\n\nVamos preencher uma matriz 4x4 e em seguida exibir a soma dos elementos da diagonal principal.\n\n");

    system("pause");

    for(linha = 0; linha < 4; linha++)
    {
        for(coluna = 0; coluna < 4; coluna++)
        {
            printf("\nDigite o %d número na %d linha e %d coluna: ", elemento+1, linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
            elemento++;
        }
        printf("\n");
    }

    printf("\nMatriz em tabela:\n");
    for(linha = 0; linha < 4; linha++)
    {
        for(coluna = 0; coluna < 4; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    //Soma os elementos que estão na diagonal principal && Guarda os elementos da diagonal principal no vetor.
    for(int i = 0; i < 4; i++)
    {
        soma += matriz[i][i];
        vetor[i] = matriz[i][i];
    }

    //Exibe a soma e o vetor.
    printf("\nA soma dos elementos da diagonal principal é: %d.\n", soma);
    
    printf("\nOs elementos da diagonal principal no vetor é: ");
    for(int i = 0; i < 4; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}