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

    float ConsumoMedio, distan, combustivel;

    printf("Bem vindo usuário!\n");
    printf("\nEssa calculadora irá possibilitar saber o consumo médio de combustível de um veículo.\n");
    printf("\n");
    system("pause");
    
    printf("\nDigite a sua distância percorrida(km): ");
    scanf("%f", &distan);

    printf("\nDigite a sua quantidade de combustível gasto(L): ");
    scanf("%f", &combustivel);
    
    ConsumoMedio = distan / combustivel;

    printf("\nO consumo médio de combustível foi de aproximadamente: %.2f km/L!\n", ConsumoMedio);

    return 0;
}