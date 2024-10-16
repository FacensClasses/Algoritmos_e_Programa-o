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

    int vetor[15], resultado;

    for(int i = 0; i < 15; i++)
    {
        printf("\nUsuário digite o %d número para calcular o seu dobro: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 15; i++)
    {
        resultado = vetor[i] * 2;
        printf("\nO dobro do %d número é: %d.\n", i+1, resultado);
    }
}