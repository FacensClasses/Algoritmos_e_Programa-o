#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

#define salario_diario 35

main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int dias;
    float total, imposto_renda, liquido;

    printf("Bem vindo ao calculo do valor a ser pago para o enganador!\n");

    printf("\nDigite o número de dias trabalhados pelo encanador: ");
    scanf("%d", &dias);

    total = salario_diario * dias;

    printf("\nO salario total é de: R$%.2f.\n", total);
    printf("\nAgora vamos reajustar o valor para torna-lo liquido...\n");
    printf("\n");
    system("pause");

    imposto_renda = total * 0.08;
    liquido = total - imposto_renda;

    printf("\nO salario liquido final é: R$%.2f!\n", liquido);

    return 0;
}