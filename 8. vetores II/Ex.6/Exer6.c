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

    int repetido, n = 0;

    printf("Bem-Vindo Usuário!\n");

    printf("\nUsuário, digite quantos números vamos trabalhar na sequência: ");
    scanf("%d", &n);

    int jaContado[n];
    float numeros[n];

    for(int i = 0; i < n; i++)
    {
        printf("\nDigite o %d número: ", i+1);
        scanf("%f", &numeros[i]);
        jaContado[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        if(jaContado[i] == 1)
        {
            continue;
        }
        
        repetido = 0;
        for(int j = 0; j < n; j++)
        {
            if(numeros[i] == numeros[j])
            {
                repetido++;
                jaContado[j] = 1;
            }
        }

        printf("\n%.2f ocorre %d vezes.\n", numeros[i], repetido);       
    }
}