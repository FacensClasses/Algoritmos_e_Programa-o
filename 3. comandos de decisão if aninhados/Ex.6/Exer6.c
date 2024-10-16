#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int valor, valor2, opcao;
    float resultado;

    printf("Bem-vindo a calculadora!\n");

    printf("\nDigite dois valores para serem usados na calculadora: ");
    scanf("%d" "%d", &valor, &valor2);

    printf("\nAgora escolha uma das opções abaixo:\n1.Adição\n2.Subtração\n3.Multiplicação\n4.Divisão\nSua escolha: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
                resultado = valor + valor2;

                printf("\nA soma entre %d e %d é %.2f.\n", valor, valor2, resultado);
                break;
        case 2:
                resultado = valor - valor2;

                printf("\nA subtração entre %d e %d é %.2f.\n", valor, valor2, resultado);
                break;
        case 3:
                resultado = valor * valor2;

                printf("\nA multiplicação entre %d e %d é %.2f.\n", valor, valor2, resultado);
                break;
        case 4:
                resultado = valor / valor2;

                printf("\nA divisão entre %d e %d é %.2f.\n", valor, valor2, resultado);
                break;
        default:
                printf("\nOpção invalida! (não existente)\n");
    }
}