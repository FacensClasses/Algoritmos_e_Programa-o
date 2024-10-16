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

    printf("Bem-vindo usuário!\n\nVamos encontrar o minimax (o menor valor da linha do maior valor da matriz).\n\nPrimeiro preencha a matriz 4x4 abaixo:\n");

    int matriz[4][4], elemento = 0 , soma = 0, maior = 0, linha = 0, menor = 0;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("\nDigite o %d número na %d linha e %d coluna: ", elemento+1, i+1, j+1);
            scanf("%d", &matriz[i][j]);
            elemento++;
        }
        printf("\n");
    }

    //Imprime a matriz 4x4 em formato de tabela.
    printf("\nMatriz em formato de tabela:\n\n");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //Verifica qual é o maior elemento da matriz.
    maior = matriz[0][0]; 
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
    }

    //Com base na informação de qual é o maior elemento da matriz, usamos uma variável para guardar sua linha.
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(matriz[i][j] == maior)
            {
                linha = i;
            }
        }
    }

    //Buscamos na linha do maior elemento, o menor número da mesma.
    menor = matriz[linha][0];
    for(int j = 0; j < 4; j++)
    {
        if(matriz[linha][j] < menor)
        {
            menor = matriz[linha][j];
        }
    }

    printf("\nO elemento minimax da matriz é %d.\n", menor);

    return 0;
}