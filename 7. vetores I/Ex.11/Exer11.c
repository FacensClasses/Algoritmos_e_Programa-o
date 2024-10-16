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

    int i = 0, x = 0, quantidade = 0, vetor[quantidade], outro[x], verificacao = 0;

    printf("Usuário, digite a quantidade de caracteres presentes no valor que você irá digitar: ");
    scanf("%d", &quantidade);

    for(i = 0; i < quantidade; i++)
    {
        printf("\nDigite o %d caracter de seu valor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    i = 0;
    for(x = quantidade-1; x >= 0; x--)
    {
        outro[i] = vetor[x];
        i++;
    }

    printf("\nOs valores armazenados nos vetores é:\n");

    printf("\n");

    for(i = 0; i < quantidade; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    for(i = 0; i < quantidade; i++)
    {
        printf("%d ", outro[i]);
    }

    printf("\n");

    printf("\nO primeiro vetor armazena os números da esquera para a direita. Segundo vetor armazena o inverso.\n");

    printf("\nAgora vamos verificar se este número é um palíndromo!\n");

    printf("\n");

    system("pause");

    for(i = 0; i < quantidade; i++)
    {
        if(vetor[i] == outro[i])
        {
            verificacao++;
        }
    }

    printf("\nVerificação: %d números iguais.\n", verificacao);

    if(verificacao == quantidade)
    {
        printf("\nO número digitado é um palíndromo!\n");
    }
    else
    {
        printf("\nO número digitado NÃO é um palíndromo!\n");
    }
}