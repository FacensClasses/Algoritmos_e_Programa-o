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

    int opcao, jose = 0, maria = 0, joao = 0, branco = 0, nulo = 0, validos;
    float percentual;

    printf("Bem-vindo a eleição do Presidente do Brasil\n");

    do
    {
        printf("\nEscolha uma das opções para votar:\n1 - José\n2 - Maria\n3 - João\n4 - voto branco\n5 - voto nulo\nSua resposta: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                    jose++;

                    printf("\nVocê escolheu votar em José!\n");
            break;

            case 2:
                    maria++;

                    printf("\nVocê escolheu votar em Maria!\n");
            break;

            case 3:
                    joao++;

                    printf("\nVocê escolheu votar em João!\n");
            break;

            case 4:
                    branco++;

                    printf("\nSeu voto é branco!\n");
            break;

            case 5:
                    nulo++;

                    printf("\nSeu voto é nulo!\n");
            break;

            case 0:
                    printf("\nVocê finalizou a votação!\n\n\n\n------------Abaixo está os resultados da eleição!------------\n\n\n");

                    printf("\nA quantidade de votos para o candidato José é: %d.\n", jose);
                    printf("\nA quantidade de votos para o candidata Maria é: %d.\n", maria);
                    printf("\nA quantidade de votos para o candidato João é: %d.\n", joao);
                    printf("\nA quantidade de votos brancos é: %d.\n", branco);
                    printf("\nA quantidade de votos nulos é: %d.\n", nulo);

                    validos = jose + maria + joao;

                    if(jose > maria && jose > joao)
                    {
                        printf("\nO candidato vencedor é José!\n");

                        percentual = ((float)jose / validos) * 100;

                        printf("\nO percentual de eleitores que elegeram o candidato vencedor: %.2f.\n", percentual);
                    }
                    if(maria > jose && maria > joao)
                    {
                        printf("\nO candidato vencedor é Maria!\n");

                        percentual = ((float)maria / validos) * 100;

                        printf("\nO percentual de eleitores que elegeram o candidato vencedor: %.2f.\n", percentual);
                    }
                    if(joao > jose && joao > maria)
                    {
                        printf("\nO candidato vencedor é João!\n");

                        percentual = ((float)joao / validos) * 100;

                        printf("\nO percentual de eleitores que elegeram o candidato vencedor: %.2f.\n", percentual);
                    }
                    if (joao == maria || joao == jose || maria == jose)
                    {
                        printf("\nHouve um empate entre os candidatos.\n");
                    }         
            break;
        
            default:
                    printf("\nVocê escolheu uma opção inexistente! Tente novamente...\n");
            break;
        }
    } while (opcao != 0);
}