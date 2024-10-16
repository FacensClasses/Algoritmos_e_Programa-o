#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

main()
{
	float peso, altura, IMC;

    printf("Bem-Vindo a calculadora de IMC!\n");

    printf("\nUsuario informe seu peso(kg): ");
    scanf("%f", &peso);

    printf("\nUsuario informe sua altura(m): ");
    scanf("%f", &altura);

    altura = altura * altura;
    IMC = peso / altura;

    printf("\nSeu IMC: %.2f.\n", IMC);

    if(IMC < 18.5)
    {
        printf("\nVoce esta abaixo do peso!\n");
    }
    else
    {
        if(IMC >= 18.5 && IMC < 25.0)
        {
            printf("\nVoce esta saudavel!\n");
        }
        else if(IMC >= 25.0 && IMC < 30.0)
        {
            printf("\nVocê esta em sobrepeso!\n");
        }
        else if(IMC >= 30.0 && IMC < 35.0)
        {
            printf("\nVoce esta com obesidade de grau 1!\n");
        }
        else if(IMC >= 35.0 && IMC < 40.0)
        {
            printf("\nVoce esta com obesidade de grau 2! (severa)\n");
        }
        else if(IMC >= 40.0)
        {
            printf("\nVoce esta com obesidade de grau 3! (mórbida)\n");
        }
    }
    
    return 0;
}
