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

    float A[12], B[12];

    printf("Seja Bem-vindo usuário!\n\nDigite 12 números no vetor A.\n");

    for(int i = 0; i < 12; i++)
    {
        printf("\nDigite o valor da %d posição do vetor A: ", i+1);
        scanf("%f", &A[i]);
    }

    printf("\n");

    for(int i = 0; i < 12; i++)
    {
        if(i % 2 == 0)
        {
            B[i] = A[i] / 2;
        }
        else
        {
            B[i] = A[i] * 3;
        }
    }

    printf("\nOs elementos do vetor A são: ");
    for(int i = 0; i < 12; i++)
    {
        printf("%.1f ", A[i]);
    }

    printf("\n");

    printf("\nOs elementos do vetor B são: ");
    for(int i = 0; i < 12; i++)
    {
        printf("%.1f ", B[i]);
    }

    printf("\n");
}