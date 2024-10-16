#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

#define PLANO_VALOR 50.00
#define PLANO_MINUTOS 50
#define CUSTO_MINUTO_EXTRA 1.50

main() 
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int escolha;
    float minutosUtilizados, valorConta;

    printf("Neste mês você acha que passou do limite de seu plano?\n1.Sim\n2.Não\nResposta: ");
    scanf("%d", &escolha);

    switch(escolha) 
    {
        case 1:
                printf("\nQuantos minutos você utilizou seu celular esse mês?\nResposta: ");
                scanf("%f", &minutosUtilizados);

                if(minutosUtilizados > PLANO_MINUTOS) 
                {
                    valorConta = PLANO_VALOR + (minutosUtilizados - PLANO_MINUTOS) * CUSTO_MINUTO_EXTRA;

                    printf("\nVocê passou %.2f minutos do limite do plano esse mês.\n", minutosUtilizados - PLANO_MINUTOS);
                    
                    printf("O valor total que você deve pagar é: R$%.2f.\n", valorConta);
                } 
                else 
                {
                    printf("\nVocê não passou do limite do plano. Total a ser pago: R$%.2f.\n", PLANO_VALOR);
                }
        break;

        case 2:
                printf("\nEntão você pagará o valor do plano padrão: R$%.2f.\n", PLANO_VALOR);
        break;

        default:
                printf("\nOpção inválida. Por favor, selecione 1 ou 2.\n");
        break;
    }

    return 0;
}