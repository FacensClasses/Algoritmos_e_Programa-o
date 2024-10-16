#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

main()
{
    int opcao;
    float valor1, valor2, soma, subtracao, multiplicacao, divisao;

    printf("Bem-vindo ao calculo entre dois numeros!\n");

    do
    {
        printf("\nUsuario, digite o primeiro valor: ");
        scanf("%f", &valor1);

        printf("\nUsuario, digite o segundo valor: ");
        scanf("%f", &valor2);
        
        printf("\n");
        system("pause");

        printf("\nEscolha uma das opcoes para trabalharmos com os dois valores:\n");
        printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Sair\n\nSua Resposta: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                    soma = valor1 + valor2;

                    printf("\nO resultado da soma entre %.2f e %.2f \x82: %.2f.\n", valor1, valor2, soma);
            break;

            case 2:
                    subtracao = valor1 - valor2;

                    printf("\nO resultado da subtracao entre %.2f e %.2f \x82: %.2f.\n", valor1, valor2, subtracao);
            break;
                    
            case 3:
                    multiplicacao = valor1 * valor2;

                    printf("\nO resultado da multiplicacao entre %.2f e %.2f \x82: %.2f.\n", valor1, valor2, multiplicacao);
            break;


            case 4:
                    divisao = valor1 / valor2;

                    printf("\nO resultado da divisao entre %.2f e %.2f \x82: %.2f.\n", valor1, valor2, divisao);
            break;

            case 5:
                    printf("\nVoce escolheu sair!\n");
            break;
            
            default:
                    printf("\nEsta opcao nao existe! Tente novamente...\n");
            break;
        }
    } while (opcao != 5);
}