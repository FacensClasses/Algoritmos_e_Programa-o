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

    int vetor[12];

    for(int i = 0; i < 12; i++)
    {
        printf("\nUsuário digite o %d número: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 12; i++)
    {
        if (vetor[i] < 0)
        {
            printf("\nO %d número é negativo: %d.\n", i+1, vetor[i]);
        }
    }
}