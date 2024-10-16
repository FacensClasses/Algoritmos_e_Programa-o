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
    
    int opcoes;
    float saldo_inicial, deposito, retirada, soma = 0, subtracao = 0, conta, saldo_final;

    printf("Bem-vindo ao banco do Brasil!\n");

    printf("\nUsuário, digite o seu saldo atual: ");
    scanf("%f", &saldo_inicial);

    do
    {
        printf("\nAgora escolha uma das opções:\n1 - Depósito\n2 - Retirada\n3 - Sair\nSua resposta: ");
        scanf("%d", &opcoes);

        switch (opcoes)
        {
            case 1:
                    printf("\nUsuário, digite a quantidade que você gostaria de depositar na sua conta: ");
                    scanf("%f", &deposito);

                    soma += deposito;

                    printf("\nUsuário, você depositou %.2f na sua conta.\n", deposito);
            break;
        
            case 2:
                    printf("\nUsuário, digite a quantidade que você gostaria de retirar da sua conta: ");
                    scanf("%f", &retirada);    

                    subtracao += retirada;

                    printf("\nUsuário, você retirou %.2f de sua conta.\n", retirada);
            break;

            case 3:
                    printf("\nUsuário você escolheu sair!\n");

                    conta = soma - subtracao;
                    
                    saldo_final = saldo_inicial + conta;

                    if(saldo_final > 0)
                    {
                        printf("\nSeu salário final é: %.2f.\n", saldo_final);

                        printf("\nSTATUS DA CONTA: PREFERENCIAL!\n");
                    }
                    else
                    {
                        if(saldo_final < 0)
                        {
                            printf("\nSeu salário final é: %.2f.\n", saldo_final);

                            printf("\nSTATUS DA CONTA: ESTOURADA!\n");
                        }
                        else
                        {
                            printf("\nSeu salário final é: %.2f.\n", saldo_final);

                            printf("\nSTATUS DA CONTA: ZERADA!\n");
                        }
                    }
            break;

            default:
                    printf("\nEstá opção não existe! Tente novamente...\n");
            break;
        }
    } while (opcoes != 3);
}