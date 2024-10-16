#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int valor, maior, menor;

    printf("Digite o 1 valor: ");
    scanf("%d", &valor);
    maior = valor;
    menor = valor;

    for(int i = 1; i < 10 ; i++)
    {
        printf("\nDigite o %d valor: ", i+1);
        scanf("%d", &valor);
        
        if(valor > maior)
        {
            maior = valor;
        }
        if (valor < menor)
        {
            menor = valor;
        }
        
    }

    printf("\nO maior número entre os valores digitados é: %d.\n", maior);
    printf("\nO menor número entre os valores digitados é %d.", menor);
}