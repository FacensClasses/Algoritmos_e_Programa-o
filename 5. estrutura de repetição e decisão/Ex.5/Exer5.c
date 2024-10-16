#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

#define pessoas 15

main()
{
    int filhos, somafilhos = 0, pessoas500 = 0;
    float salario, somasalarial = 0, mediafilhos, mediasalarial, maiorsalario = 0, percentual;
    

    printf("Bem-vindo pessoas de Boituva!\n");

    for(int i = 0; i < pessoas; i++)
    {
        printf("\n%d pessoa digite o seu numero total de filhos: ", i+1);
        scanf("%d", &filhos);
        somafilhos += filhos;

        printf("\n%d pessoa agora digite o seu salario: ", i+1);
        scanf("%f", &salario);
        somasalarial += salario;

        if(salario > maiorsalario)
        {
            maiorsalario = salario;
        }
        if(salario <= 500)
        {
            pessoas500++;
        }
    }

    mediafilhos = (float)somafilhos / pessoas;
    mediasalarial = somasalarial / pessoas; 
    percentual = (float)pessoas500 / pessoas;

    printf("\n\n\n");
    printf("---------------------");
    printf("RESULTADOS FINAIS ABAIXO!");
    printf("---------------------");
    printf("\n\n\n");

    printf("\nA media de filhos da populacao de boituva \x82: %.2f.\n", mediafilhos);
    printf("\nA media do salario da populacao de boituva \x82: %.2f.\n", mediasalarial);
    printf("\nO maior salario \x82: %.2f.\n", maiorsalario);
    printf("\nO percentual de pessoas com ate 500 reais \x82: %.2f.\n", percentual*100);
}