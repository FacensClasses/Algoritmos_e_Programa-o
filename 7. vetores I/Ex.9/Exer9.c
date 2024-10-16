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

    int i = 0, vetor[10], valor, repetido = 0, encontrado = 0;

    printf("Vamos armazenar 10 valores no vetor!\n");

    while(i < 10)
    {
        printf("\nUsuário digite o valor da %d posição: ", i+1);
        scanf("%d", &vetor[i]);
        i++;
    }

    printf("\nUsuário agora vamos verificar se o número que você digitar está no vetor!\n");

    do
    {
        printf("\nUsuário digite o número: ");
        scanf("%d", &valor);

        for(int i = 0; i < 10; i++)
        {
            if(vetor[i] == valor)
            {
                printf("\nO valor se encontra no vetor!\nO valor encontrado é: %d\n", valor);
                repetido++;
                encontrado = 1;
            }
        }

        if(!encontrado)
        {
            printf("\nO valor não se encontra no vetor! Tente novamente.\n");
        }
    } while (!encontrado);


    printf("\nA quantidade de vezes que o número %d apareceu é: %d.\n", valor, repetido);

    printf("\nOs números encontrados no vetor são:\n");
    
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
}