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

    int divisor, inicio, final;

        printf("Digite o valor do divisor: ");
        scanf("%d", &divisor);

        printf("\nDigite o início do intervalo: ");
        scanf("%d", &inicio);

        printf("\nDigite o final do intervalo: ");
        scanf("%d", &final);

         printf("\nOs números divisíveis por %d nos intervalo entre %d e %d é: ", divisor, inicio, final);

    do
    {
        for(int i = inicio + 1; i < final; i++)
        {
            if(i % divisor == 0)
            {
                printf("%d ", i);
            }
        }
    } while (inicio == final);

    printf("\n");
}