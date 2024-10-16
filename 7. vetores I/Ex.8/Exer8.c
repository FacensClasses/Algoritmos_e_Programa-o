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

    int i = 0, valor, soma = 0, vetor[10];

    printf("Bem-vindo usuário!\n");


    while (i < 10)
    {
        printf("Usuário digite o valor da %d posição: ", i+1);
        scanf("%d", &valor);

        if(valor > 0)
        {
            vetor[i] = valor;
            i++;
        }
        else
        {
            printf("\nUsuário, só é permitido digitar valores positivos!\n");
        }
    }

    for (i = 0; i < 10; i += 2)
    {
        soma += vetor[i];
    }

    printf("\nA soma de todos os números que estão nas posições ímpares do vetor é: %d.\n", soma);
}