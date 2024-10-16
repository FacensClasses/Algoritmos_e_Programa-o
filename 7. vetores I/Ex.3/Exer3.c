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

    int vetor[8], x;

    printf("Bem-vindo\n");

    for(int i = 0; i < 8; i++)
    {
        printf("\nDigite o %d número: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nEscolha uma posição do vetor para mostrar o seu valor: ");
    scanf("%d", &x);

    printf("\nO número da posição %d é: %d.\n", x, vetor[x]);
}