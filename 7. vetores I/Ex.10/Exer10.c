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

    int i = 0, vetor[10], outro[10];

    printf("Vamos armazenar 10 valores no vetor!\n");

    while(i < 10)
    {
        printf("\nUsuário digite um valor para %d posição: ", i+1);
        scanf("%d", &vetor[i]);
        i++;
    }
        i = 0;
    for(int x = 9; x >= 0; x--)
    {
        outro[i] = vetor[x];
        i++;
    }

    printf("\n");

    printf("\nComo ficou os dois vetores:\n");
        
    printf("\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
        printf("\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", outro[i]);
    }

    printf("\n");

    printf("\nAqui está os números repetidos entre os dois vetores:\n");

    printf("\n");

    for(i = 0; i < 10; i++)
    {
        if(vetor[i] == outro[i])
        {   
            printf("%d ", vetor[i]);
        }
    }
        printf("\n");
    for(i = 0; i < 10; i++)
    {
        if(outro[i] == vetor[i])
        {   
            printf("%d ", outro[i]);
        }
    }
    
    printf("\n");
}