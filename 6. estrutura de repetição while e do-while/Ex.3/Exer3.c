#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

main()
{
    float modulo1, modulo2, media;

    printf("Bem-vindo(a) ao calculo de notas!\n");
    
    do
    {
        printf("\nAluno digite sua nota do primeiro modulo: ");
        scanf("%f", &modulo1);

        printf("\nAluno digite sua nota do segundo modulo: ");
        scanf("%f", &modulo2);

        if(modulo1 >= 0 && modulo2 >= 0 && modulo1 <= 10 && modulo2 <= 10)
        {
            media = (modulo1 + modulo2) / 2;
        }
        else
        {
            printf("\nValor invalido! Coloque valores de 0 a 10 e tente novamente...\n");
        }
    } while (modulo1 < 0 || modulo2 < 0 || modulo1 > 10 || modulo2 > 10);

    printf("\nA media dos modulos \x82: %.2f.", media);
}