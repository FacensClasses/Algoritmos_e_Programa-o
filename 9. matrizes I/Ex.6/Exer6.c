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

    int linha, coluna, elemento = 0, matriz[3][4], escolha, soma = 0;
    float media = 0;

    printf("Usuário, seja Bem-vindo!\n\nVamos preencher uma matriz 3x4 e em seguida calcular a média dos elementos de uma linha escolhida por você.\n\n");

    system("pause");

    for(linha = 0; linha < 3; linha++)
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
    for(linha = 0; linha < 3; linha++)
    {
        for(coluna = 0; coluna < 4; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    
    do
    {
        printf("\nAgora usuário, escolha uma das três linhas (1 a 3) para calcular a média dos elementos dela: ");
        scanf("%d", &escolha);

        if(escolha < 1 || escolha > 3)
        {
            printf("\nEscolha inválida! Por favor, escolha uma linha entre 1 e 3.\n");
        }
    } while(escolha < 1 || escolha > 3);

    linha = escolha - 1;
    for(coluna = 0; coluna < 4; coluna++)
    {
        soma += matriz[linha][coluna];
    }

    media = (float)soma / 4;
    
    printf("\nA média dos elementos da %d linha é: %.2f.\n", escolha, media);

    return 0;
}