#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

#define reajuste1 1.05
#define reajuste2 1.07

main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float salario, novo_salario;

    printf("Bem-vindo a calculadora de salario!\n");

    printf("\nDigite o seu salário atual: R$ ");
    scanf("%f", &salario);

    printf("\nA soma do primeiro ganho com o segundo é: R$%.2f.\n", salario);
    
    if(salario <= 1000)
    {
        printf("\nSeu salario será reajustado com um aumento de 5 por cento.\n");
        
        novo_salario = salario * reajuste1;

        printf("\nSeu salario agora é: R$%.2f.\n", novo_salario);
    }
    else
    {
        printf("\nSeu salario será reajustado com um aumento de 7 por cento.\n");
        
        novo_salario = salario * reajuste2;

        printf("\nSeu salario agora é: R$%.2f.\n", novo_salario);
    }

    return 0;
}