#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

main()
{	
    int idade, genero;
    float altura, peso, pesoMideal, pesoFideal;
    
    printf("Bem-vindo a calculadora de peso ideal!\n");

    printf("\nUsuário digite sua idade: ");
    scanf("%d", &idade);

    printf("\nUsuário digite a sua altura(m): ");
    scanf("%f", &altura);

    printf("\nAgora selecione o seu gênero:\n1.Masculino\n2.Feminino\nSua escolha: ");
    scanf("%d", &genero);

    switch(genero)
    {
        case 1:
                if(idade >= 12 && idade <= 65)
                {
                    pesoMideal = (altura * 72.7) - 62;
                    printf("\nO seu peso ideal é: %f. (Arredondamento = %.3f)\n", pesoMideal, pesoMideal);

                    printf("\nAgora vamos realizar um comparativo entre o seu peso atual e o ideal...\n");
                    printf("\n");
                    system("pause");
                    printf("\nUsuário digite o seu peso atual(kg): ");
                    scanf("%f", &peso);

                    if(pesoMideal == peso)
                    {
                        printf("\nVocê está na faixa de peso ideal!\n");
                    }
                    else
                    {
                        if(peso > pesoMideal)
                        {
                            printf("\nVocê está acima da faixa de peso ideal!\n");
                        }
                        else
                        {
                            printf("\nVocê está abaixo da faixa de peso ideal!\n");
                        }
                    }
                }
                else
                {
                    printf("\nEste programa não calcula o peso ideal para pessoas com menos de 12 anos ou mais de 65 anos.\n");
                }

                break;
        case 2:
                if(idade >= 12 && idade <= 65)
                {
                    pesoFideal = (altura * 62.1) - 48.7;
                    printf("\nO seu peso ideal é: %f. (Arredondamento = %.3f)\n", pesoFideal, pesoFideal);
                    
                    printf("\nAgora vamos realizar um comparativo entre o seu peso atual e o ideal...\n");
                    printf("\n");
                    system("pause");
                    printf("\nUsuário digite o seu peso atual(kg): ");
                    scanf("%f", &peso);

                    if(pesoFideal == peso)
                    {
                        printf("\nVocê está na faixa de peso ideal!\n");
                    }
                    else
                    {
                        if(peso > pesoFideal)
                        {
                            printf("\nVocê está acima da faixa de peso ideal!\n");
                        }
                        else
                        {
                            printf("\nVocê está abaixo da faixa de peso ideal!\n");
                        }
                    }
                }
                else
                {
                    printf("\nEste programa não calcula o peso ideal para pessoas com menos de 12 anos ou mais de 65 anos.\n");
                }

                break;
        default: 
                printf("\nOpção invalida! (não existe)\n");
    }

    getch();
    return 0;
}