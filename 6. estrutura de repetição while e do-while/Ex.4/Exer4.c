#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

main()
{
    int opcao, quantidade = 0;
    float numero, soma = 0, media, maior;

    printf("Bem-vindo ao calculo de numeros!\n");

    do
    {
        printf("\nUsuario, digite um numero: ");
        scanf("%f", &numero);

        soma += numero;
        quantidade++;

        if(quantidade == 1 || numero > maior)
        {
            maior = numero;
        }
    
        printf("\nUsuario, se voce deseja informar mais numeros digite 1, se nao tecle 2:\nSua resposta: ");
        scanf("%d", &opcao);

        if(opcao == 2)
        {
            printf("\nVoce escolheu sair!\n");

        }
        else
        {
            if(opcao != 1)
            {
                printf("\nNao existe esta opcao! Tente novamente...\n");
            }
        }
    } while(opcao == 1 || opcao != 2);

    if(quantidade > 0)
    {
        media = soma / quantidade;
        printf("\nO maior numero digitado foi: %.2f\n", maior);
        printf("\nA media dos valores digitados foi: %.2f\n", media);
    }
}