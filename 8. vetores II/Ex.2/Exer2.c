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

    int i, x = 0, vetor[x], par = 0, pares = 0, impares = 0, produto = 1;
    float media;
    
    printf("Bem-vindo usuário!\n");

    do
    {
        printf("\nUsuário, digite o tamanho do vetor: ");
        scanf("%d", &x);

        if(x > 100)
        {
            printf("\nUsuário, este vetor só pode ter no maximo 100 unidades!\n");
        }
    } while (x > 100);
    
    for(i = 0; i < x; i++)
    {
        printf("\nDigite o valor da %d posição: ", i);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < x; i += 2)
    {
        par += vetor[i];
        pares++;
    }

    for(i = 1; i < x; i += 2)
    {
        produto *= vetor[i];
    }

    media = (float)par / pares;

    printf("\nA média dos números pares no vetor é: %.2f.\n", media);
    printf("\nO produto dos números ímpares no vetor é: %d.\n", produto);
}