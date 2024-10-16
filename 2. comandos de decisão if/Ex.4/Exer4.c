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

    float P1, P2, M, resultado;

    printf("Valor da primeira prova: ");
    scanf("%f", &P1);

    printf("\nValor da segunda prova: ");
    scanf("%f", &P2);

    M = (P1 + P2) / 2;

    if(M >= 5)
    {
        printf("\nAluno aprovado!\nO valor da nota da sua prova é: %.2f.", M);
    }
    else
    {
        resultado = 5 - M;
        printf("\nAluno reprovado!\nFaltou %.2f ponto(s) para ser aprovado.\n", resultado);
    }

    return 0;
}