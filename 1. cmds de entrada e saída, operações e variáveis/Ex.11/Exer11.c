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
    
    int pf, pi, escolha, escolha2;
    float Vm, ds, tempo, vtempo1, vtempo2;

    printf("Bem vindo a calculadora da velocidade média!\n");
    printf("\n");
    system("pause");
    
    printf("\nESCOLHA UMA DAS OPÇÕES ABAIXO!\n");

    printf("\nUsuário você sabe o valor da variação de espaço?\n1.Sim\n2.Não\n");
    printf("Resposta: ");
    scanf("%d", &escolha);

    switch(escolha)
    {
        case 1:
                printf("\nEntão digite o valor: ");
                scanf("%f", &ds);
                break;
        case 2:
                printf("\nEntão digite a posição final e em seguida a incial: ");
                scanf("%d" "%d", &pf, &pi);

                ds = pf - pi;

                printf("\nO valor da distância percorrida é: %.2f!\n", ds);
                break;
        default:
                printf("Opção inválida!");
                break;
    }

    printf("\nUsuário você sabe o valor da variação do tempo?\n1.Sim\n2.Não\n");
    printf("Resposta: ");
    scanf("%d", &escolha2);

    switch(escolha2)
    {
        case 1:
                printf("\nEntão digite o valor: ");
                scanf("%f", &tempo);
                break;
        case 2:
                printf("\nEntão digite o valor do instante final e em seguida o inicial: ");
                scanf("%f" "%f", &vtempo1, &vtempo2);

                tempo = vtempo1 - vtempo2;

                printf("\nO valor da variação do tempo é: %.2f!\n", tempo);
                break;
        default:
                printf("\nOpção inválida!\n");
                break;
    }

    Vm = ds / tempo;

    printf("\nO valor da velocidade média é: %.2f.\n", Vm);

    return 0;
}