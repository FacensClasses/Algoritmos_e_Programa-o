#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

main()
{	
    int i, valores, soma = 0;
    float valor, media;

    printf("Bem-vindo ao calculo aritmetico automatico!\n");
    printf("\n");
    system("pause");

    printf("\nCom quantos valores vamos trabalhar?\n");
    printf("Sua resposta: ");
    scanf("%d", &valores);

    for(i = 0; i < valores; i++)
    {
        printf("\nDigite o %d valor: ", i+1);
        scanf("%f", &valor);

        soma += valor;
    }

    media = soma / valores;

    printf("A media aritmetica e: %.2f.", media);

    return 0;
}