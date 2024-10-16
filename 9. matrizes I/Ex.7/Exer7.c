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

    int matriz[3][5], elemento = 0 , soma = 0;

    printf("Bem-vindo usuário!\n\nVamos preencher uma matriz 3x5 com números inteiros, em seguida o programa irá somar os elementos negativos e subsituir os mesmos por zero:\n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("\nDigite o %d número na %d linha e %d coluna: ", elemento+1, i+1, j+1);
            scanf("%d", &matriz[i][j]);
            elemento++;
        }
        printf("\n");
    }

    //Imprime a versão original e soma os elementos negativos, em seguida eles são substituidos por 0.
    printf("\nMatriz Original:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%d ", matriz[i][j]);

            if(matriz[i][j] < 0)
            {
                soma += matriz[i][j];
                matriz[i][j] = 0;
            }
        }
        printf("\n");
    }

    //Imprime a matriz modificada com os elementos negativos sendo zero.
    printf("\nMatriz Modificada:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nA soma dos elementos da coluna que foram modificados é: %d.\n", soma);

    return 0;
}