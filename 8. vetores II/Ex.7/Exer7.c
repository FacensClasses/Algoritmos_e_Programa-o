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

    int n, aux;

    printf("Bem-Vindo Usuário!\n");

    printf("\nUsuário, digite o tamanho do vetor que vamos trabalhar: ");
    scanf("%d", &n);

    float vetor[n], vetor2[n];

    for(int i = 0; i < n; i++)
    {
        printf("\nDigite o valor do %d elemento: ", i+1);
        scanf("%f", &vetor[i]);
    }

    printf("\n");

    // Passa os elementos de vetor para vetor2.
    for(int i = 0; i < n; i++)
    {
        vetor2[i] = vetor[i]; 
    }

    // verificação Bubblesort. (Faz o ajuste dos elementos de vetor2 em ordem crescente).
    // for(int i = 0; i < n; i++) //
    int flag = 1;
    while(flag)
    {
        flag = 0;
        for(int j = 0; j < n - 1; j++)
        {
            if(vetor2[j] > vetor2[j + 1])
            {
                aux = vetor2[j];
                vetor2[j] = vetor2[j + 1];
                vetor2[j + 1] = aux;
                flag = 1;
            }
        }
    }
    //Printa na tela os elementos do primeiro e segundo vetor.
    for(int i = 0; i < n; i++)
    {
        printf("%.2f ", vetor[i]);
    }

    printf("\n");

    for(int i = 0; i < n; i++)
    {
        printf("%.2f ", vetor2[i]);
    }

    printf("\n");

    return 0;
}