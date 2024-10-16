#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

#define salario 10
#define extra 15

main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int hora, hora_extra, resposta, salario1, salario_extra2;
    float total;

    printf("Bem vindo a calculadora da Matieli!\n");
    printf("\nVamos calcular o salário...\n");
    printf("\n");
    system("pause");

    printf("\nDigite as horas trabalhadas de seu funcionário: ");
    scanf("%d", &hora);

    printf("\nEste funcionário fez hora extra?\n1.sim\n2.não\n");
    printf("Resposta: ");
    scanf("%d", &resposta);

    switch(resposta)
    {    
        case 1:
                printf("\nDigite as horas extras de seu funcionário: ");
                scanf("%d", &hora_extra);

                salario1 = hora * salario;
                salario_extra2 = hora_extra * extra;
                total = salario1 + salario_extra2;

                printf("\nO salario total com hora extra calculado é: R$%.2f!\n", total);
                break;
        case 2:
                total = hora * salario;
                
                printf("\nO salario total sem hora extra calculado é: R$%.2f!\n", total);
                break;
    }
    
    printf("\nObrigado por usar o nosso software! (Matieli)\n");
    
    return 0;
}