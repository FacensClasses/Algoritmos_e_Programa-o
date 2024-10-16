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

    int linha, coluna, matriz[3][3], matriz2[3][3], elemento = 0;

    printf("Usuário, seja Bem-vindo!\n\nVamos preencher uma matriz 3x3 e em seguida gerar uma nova matriz com o dobro de cada valor.\n\n");

    system("pause");

    for(linha = 0; linha < 3; linha++)
    {
        for(coluna = 0; coluna < 3; coluna++)
        {
            printf("\nDigite o %d número na %d linha e %d coluna: ", elemento+1, linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
            elemento++;
        }
        printf("\n");
    }

    //A segunda matriz recebe o dobro de cada valor da primeira matriz.
    for(linha = 0; linha < 3; linha++)
    {
        for(coluna = 0; coluna < 3; coluna++)
        {
            matriz2[linha][coluna] = matriz[linha][coluna] * 2;
        }
    }

    //Apresenta os elementos da primeira e segunda matriz. 
    printf("\nPrimeiro vetor:\n");
    for(linha = 0; linha < 3; linha++)
    {
        for(coluna = 0; coluna < 3; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    printf("\nSegundo vetor:\n");
    for(linha = 0; linha < 3; linha++)
    {
        for(coluna = 0; coluna < 3; coluna++)
        {
            printf("%d ", matriz2[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}